note
	description: "A default business model."
	author: "Jackie Wang"
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_MODEL

inherit

	ANY
		redefine
			out
		end

create --{ETF_MODEL_ACCESS}
	make

feature {ETF_MODEL_ACCESS} --{NONE} -- Initialization

	make
			-- Initialization for `Current'.
		do
			create tree.make_empty
			create {ARRAYED_LIST [EXPRESSION]} stack.make (0)
			stack.force (create {CURRENT_EXPRESSION}.make)
			tree.force (create {CURRENT_EXPRESSION}.make, 1)
			create report.make_from_string ("Expression is initialized.")
			create expression.make_from_string (stack.at (1).output)
			last_expression := stack.at (1)
			last_constant_pointer := last_expression
			create printer.make
			create eval.make
			create type_checker.make
			count := 1
			default_count := 0
		end

feature {ETF_MODEL_ACCESS} -- Inside methods and attributes

	tree: ARRAY [EXPRESSION]
			-- tree made up of expressions

	stack: LIST [EXPRESSION]
			-- stack of recent expressions

	push_element (e: EXPRESSION)
			-- push an element into the stack
		do
			stack.force (e)
			stack.forth
			last_expression := e
			last_constant_pointer := last_expression
				--			cursor:=last_expression
		end

	pop_element
			-- pop the top element on stack
		do
			stack.remove
			stack.back
		end

	top: EXPRESSION
			-- current item on top of the stack
		do
			Result := stack.item
		end

	grow_tree (entry: INTEGER)
			-- expand the tree
		local
			j: INTEGER
			empty: EMPTY_EXPRESSION
		do
			create empty.make
			from
				j := tree.count + 1
			until
				j > (2 * entry) + 2
			loop
				tree.force (empty, j)
				j := j + 1
			end
		end

	last_expression: EXPRESSION

	last_constant_pointer: EXPRESSION

	root: EXPRESSION
		do
			Result := tree.at (1)
		end

	print_tree_list: STRING
			-- print tree in an array list order
			-- i.e left_child is at (2*k) and right_child is at (2*k)+1
		local
			i: INTEGER
		do
			create Result.make_empty
			from
				i := 1
			until
				i > tree.count
			loop
				Result.append (tree.at (i).output + " ")
				i := i + 1
			end
		end

	update_constant_nodes (const_exp: BASIC_EXPRESSION)
		local
			i, j: INTEGER
			curr: CURRENT_EXPRESSION
			nil: NIL_EXPRESSION
		do
			create curr.make
			create nil.make
			from
				i := 1
			until
				i > tree.count
			loop
				if tree.item (i) ~ curr then
					tree.put (const_exp, i)
				end
				i := i + 1
			end -- end loop

				--				loop for changing the print tree list
			from
				i := tree.count
			until
				i < 1
			loop
				if tree.item (i) ~ nil then
					tree.put (curr, i)
					j := i
					i := 1
				end
				i := i - 1
			end
		end

	printer: PRETTY_PRINTER
			-- pretty printer

	eval: EVALUATOR
			-- evaluator

	type_checker: TYPE_CHECKER
			-- type checker

feature -- Public methods

	get_last_expression: EXPRESSION
		do
			Result := last_expression
		end

	pretty_print
			-- print the current expression
		do
			root.accept (printer)
		end

	evaluator
			-- evaluate the current expression
		do
			root.accept (eval)
		end

	checker
			-- type check the current expression
		do
			root.accept (type_checker)
		end

	get_pretty_text: STRING
		do
			Result := printer.text
		end

	type_check_result: BOOLEAN
		do
			Result := type_checker.type_correct
		end

--	evaluate_integer_result: STRING
--		do
--			Result := eval.integer_value.out
--		end

	get_evaluate_result: STRING
		do
			Result := eval.text
		end

	count: INTEGER
			-- total number of expressions in tree

	reset_printer
			-- reset the printer
		do
			printer.reset
		end

	reset_checker
		do
			checker
		end

feature -- model attributes

	default_count: INTEGER

	expression: STRING

	report: STRING

feature {ETF_COMMAND} -- report items

	set_report (new_report: STRING)
		do
			report := new_report
		end

	set_expression (exp: STRING)
		do
			expression := exp
		end

	report_success: STRING
		attribute
			Result := "OK."
		end

	report_initial_expression_cannot_be_reset: STRING
		attribute
			Result := "Error (Initial expression cannot be reset)."
		end

	report_expression_is_already_fully_specified: STRING
		do
			Result := "Error (Expression is already fully specified)."
		end

	report_expression_is_not_yet_fully_specified: STRING
		do
			Result := "Error (Expression is not yet fully specified)."
		end

	report_error_expression_is_not_type_correct: STRING
		do
			Result := "Error (Expression is not type-correct)."
		end

	report_error_divisor_is_zero: STRING
		do
			Result:="Error (Divisor is zero)."
		end

	report_is_type_corrent: STRING
		do
			Result:=" is type-correct."
		end

feature -- model operations

	default_update
			-- Perform update to the model state.
		do
			default_count := default_count + 1
		end

	reset
			-- Reset model state.
		do
			make
		end

feature -- insert constant expressions

		--------------------------- INTEGER EXPRESSION ------------------------

	insert_integer (i_c: INTEGER_CONSTANT)
		local
			i, j, k: INTEGER
			curr: CURRENT_EXPRESSION
			nil: NIL_EXPRESSION
		do
			create curr.make
			create nil.make
			update_constant_nodes (i_c)

				-- updating nodes of tree
			if stack.count >= 1 then

					---------------------------if the first input by the user was an integer-------------------
				if attached {CURRENT_EXPRESSION} last_constant_pointer as constant_op then
					last_constant_pointer := i_c
				end

					-----------------------BINARY OPERATION----------------------
				if attached {BINARY_OP} last_constant_pointer as stack_last_binary_op then
					if stack_last_binary_op.left ~ curr then -- if left is '?'
						stack_last_binary_op.replace_left_child (i_c)
						stack_last_binary_op.replace_right_child (curr)
					elseif stack_last_binary_op.right ~ curr then -- if right is '?'
						stack_last_binary_op.replace_right_child (i_c)

							-- traverse back to replace nil...
						from
							k := stack.count - 1
						until
							k < 1
						loop

								-------------BINARY OPERATION----------------------

							if attached {BINARY_OP} stack.at (k) as c1_binary then
								if c1_binary.left ~ nil then
									c1_binary.replace_left_child (curr)
									k := 1
									last_constant_pointer := c1_binary
								elseif c1_binary.right ~ nil then
									c1_binary.replace_right_child (curr)
									k := 1
									last_constant_pointer := c1_binary
								end

									---------------UNARY OPERATION---------------------

							elseif attached {UNARY_OP} stack.at (k) as c1_unary then
								if c1_unary.right ~ nil then
									c1_unary.replace_right_child (curr)
									k := 1
									last_constant_pointer := c1_unary
								end
							end
							k := k - 1
						end --end loop for else if
					end
				end --end binary op inner if statement
			end --end binary op if statemenet

				-----------------------UNARY OPERATION----------------------
			if attached {UNARY_OP} last_expression as stack_last_unary_op then
				if stack_last_unary_op.right ~ curr then -- if right is '?'
					stack_last_unary_op.replace_right_child (i_c)

						-- traverse back to replace nil...
					from
						k := stack.count - 1
					until
						k < 1
					loop

							-------------BINARY OPERATION----------------------

						if attached {BINARY_OP} stack.at (k) as c1_binary then
							if c1_binary.left ~ nil then
								c1_binary.replace_left_child (curr)
								k := 1
								last_constant_pointer := c1_binary
							elseif c1_binary.right ~ nil then
								c1_binary.replace_right_child (curr)
								k := 1
								last_constant_pointer := c1_binary
							end

								---------------UNARY OPERATION---------------------

						elseif attached {UNARY_OP} stack.at (k) as c1_unary then
							if c1_unary.right ~ nil then
								c1_unary.replace_right_child (curr)
								k := 1
								last_constant_pointer := c1_unary
							end
						end
						k := k - 1
					end
				end --end unary op inner if statement
			end --end unary op if statemenet
		end

		--------------------------- BOOLEAN EXPRESSION ------------------------

	insert_boolean (b_c: BOOLEAN_CONSTANT)
		local
			i, j, k: INTEGER
			curr: CURRENT_EXPRESSION
			nil: NIL_EXPRESSION
		do
			create curr.make
			create nil.make
			update_constant_nodes (b_c)

				-- updating nodes of tree
			if stack.count >= 1 then

					---------------------------if the first input by the user was an integer-------------------
				if attached {CURRENT_EXPRESSION} last_constant_pointer as constant_op then
					last_constant_pointer:=b_c
				end

					-----------------------BINARY OPERATION----------------------
				if attached {BINARY_OP} last_constant_pointer as stack_last_binary_op then
					if stack_last_binary_op.left ~ curr then -- if left is '?'
						stack_last_binary_op.replace_left_child (b_c)
						stack_last_binary_op.replace_right_child (curr)
					elseif stack_last_binary_op.right ~ curr then -- if right is '?'
						stack_last_binary_op.replace_right_child (b_c)

							-- traverse back to replace nil...
						from
							k := stack.count - 1
						until
							k < 1
						loop

								-------------BINARY OPERATION----------------------

							if attached {BINARY_OP} stack.at (k) as c1_binary then
								if c1_binary.left ~ nil then
									c1_binary.replace_left_child (curr)
									k := 1
									last_constant_pointer := c1_binary
								elseif c1_binary.right ~ nil then
									c1_binary.replace_right_child (curr)
									k := 1
									last_constant_pointer := c1_binary
								end

									---------------UNARY OPERATION---------------------

							elseif attached {UNARY_OP} stack.at (k) as c1_unary then
								if c1_unary.right ~ nil then
									c1_unary.replace_right_child (curr)
									k := 1
									last_constant_pointer := c1_unary
								end
							end
							k := k - 1
						end --end loop for else if
					end
				end --end binary op inner if statement
			end --end binary op if statemenet

				-----------------------UNARY OPERATION----------------------
			if attached {UNARY_OP} last_expression as stack_last_unary_op then
				if stack_last_unary_op.right ~ curr then -- if right is '?'
					stack_last_unary_op.replace_right_child (b_c)

						-- traverse back to replace nil...
					from
						k := stack.count - 1
					until
						k < 1
					loop

							-------------BINARY OPERATION----------------------

						if attached {BINARY_OP} stack.at (k) as c1_binary then
							if c1_binary.left ~ nil then
								c1_binary.replace_left_child (curr)
								k := 1
								last_constant_pointer := c1_binary
							elseif c1_binary.right ~ nil then
								c1_binary.replace_right_child (curr)
								k := 1
								last_constant_pointer := c1_binary
							end

								---------------UNARY OPERATION---------------------

						elseif attached {UNARY_OP} stack.at (k) as c1_unary then
							if c1_unary.right ~ nil then
								c1_unary.replace_right_child (curr)
								k := 1
								last_constant_pointer := c1_unary
							end
						end
						k := k - 1
					end
				end --end unary op inner if statement
			end --end unary op if statemenet
		end

feature -- insert binary expressions

	insert_binary_op_expression (bop: BINARY_OP)
		local
			i, j, k: INTEGER
			curr: CURRENT_EXPRESSION
		do
			create curr.make

				-- if current expression is not set
			if count = 0 then
				tree.force (bop, count + 1)
				tree.force (bop.left, count + 2)
				tree.force (bop.right, count + 3)
				stack.put_i_th (bop, 1)
			elseif count > 0 then
					-- updating tree...
				from
					i := 1
				until
					i > tree.count
				loop
					if tree.at (i) ~ curr then
						j := i
						i := tree.count
					end
					i := i + 1
				end
				grow_tree (j)
				tree.put (bop, j)
				tree.put (bop.left, (2 * j))
				tree.put (bop.right, (2 * j) + 1)


					-- updating actual nodes...
				if stack.count >= 1 then

						------------------------------BINARY OPERATIONS------------------------

					if attached {BINARY_OP} last_expression as stack_last_binary_op then
						if stack_last_binary_op.left ~ curr then
							stack_last_binary_op.replace_left_child (bop)
						elseif stack_last_binary_op.right ~ curr then
							stack_last_binary_op.replace_right_child (bop)
						else
								-- traverse back to replace '?'...
							from
								k := stack.count - 1
							until
								k < 1
							loop

									------------------------------BINARY OPERATIONS------------------------

								if attached {BINARY_OP} stack.at (k) as previous_binary_op then
									if previous_binary_op.left ~ curr then
										previous_binary_op.replace_left_child (bop)
										k := 1
									elseif previous_binary_op.right ~ curr then
										previous_binary_op.replace_right_child (bop)
										k := 1
									end

										------------------------------UNARY OPERATIONS------------------------

								elseif attached {UNARY_OP} stack.at (k) as previous_unary_op then
									if previous_unary_op.right ~ curr then
										previous_unary_op.replace_right_child (bop)
										k := 1
									end
								end
								k := k - 1
							end
						end
					end

						------------------------------UNARY OPERATIONS------------------------

					if attached {UNARY_OP} last_expression as stack_last_binary_op then
						if stack_last_binary_op.right ~ curr then
							stack_last_binary_op.replace_right_child (bop)
						else
								-- traverse back to replace '?'...
							from
								k := stack.count - 1
							until
								k < 1
							loop
									------------------------------BINARY OPERATIONS------------------------

								if attached {BINARY_OP} stack.at (k) as previous_binary_op then
									if previous_binary_op.left ~ curr then
										previous_binary_op.replace_left_child (bop)
										k := 1
									elseif previous_binary_op.right ~ curr then
										previous_binary_op.replace_right_child (bop)
										k := 1
									end
										------------------------------UNARY OPERATIONS------------------------

								elseif attached {UNARY_OP} stack.at (k) as previous_unary_op then
									if previous_unary_op.right ~ curr then
										previous_unary_op.replace_right_child (bop)
										k := 1
									end
								end
								k := k - 1
							end
						end
					end
					push_element (bop)
					count := count + 1
				end --end inner if statement
			end -- end main  if statement

		end ---end method

feature -- insert unary expressions

	insert_unary_op_expression (uop: UNARY_OP)
		local
			i, j, k: INTEGER
			curr: CURRENT_EXPRESSION
			emp: EMPTY_EXPRESSION
		do
			create curr.make
			create emp.make

				-- if current expression is not set
			if count = 0 then
				tree.force (uop, count + 1)
				tree.force (emp, count + 2)
				tree.force (uop.right, count + 3)
				stack.put_i_th (uop, 1)
			elseif count > 0 then
					-- updating tree...
				from
					i := 1
				until
					i > tree.count
				loop
					if tree.at (i) ~ curr then
						j := i
						i := tree.count
					end
					i := i + 1
				end
				grow_tree (j)
				tree.put (uop, j)
				tree.put (emp, (2 * j))
				tree.put (uop.right, (2 * j) + 1)

					-- updating actual nodes...
				if stack.count >= 1 then

						------------------------------BINARY OPERATIONS------------------------

					if attached {BINARY_OP} last_expression as stack_last_binary_op then
						if stack_last_binary_op.left ~ curr then
							stack_last_binary_op.replace_left_child (uop)
						elseif stack_last_binary_op.right ~ curr then
							stack_last_binary_op.replace_right_child (uop)
						else
								-- traverse back to replace '?'...
							from
								k := stack.count - 1
							until
								k < 1
							loop

									------------------------------BINARY OPERATIONS------------------------

								if attached {BINARY_OP} stack.at (k) as previous_binary_op then
									if previous_binary_op.left ~ curr then
										previous_binary_op.replace_left_child (uop)
										k := 1
									elseif previous_binary_op.right ~ curr then
										previous_binary_op.replace_right_child (uop)
										k := 1
									end

										------------------------------UNARY OPERATIONS------------------------

								elseif attached {UNARY_OP} stack.at (k) as previous_unary_op then
									if previous_unary_op.right ~ curr then
										previous_unary_op.replace_right_child (uop)
										k := 1
									end
								end
								k := k - 1
							end
						end
					end

						------------------------------UNARY OPERATIONS------------------------

					if attached {UNARY_OP} last_expression as stack_last_binary_op then
						if stack_last_binary_op.right ~ curr then
							stack_last_binary_op.replace_right_child (uop)
						else
								-- traverse back to replace '?'...
							from
								k := stack.count - 1
							until
								k < 1
							loop
									------------------------------BINARY OPERATIONS------------------------

								if attached {BINARY_OP} stack.at (k) as previous_binary_op then
									if previous_binary_op.left ~ curr then
										previous_binary_op.replace_left_child (uop)
										k := 1
									elseif previous_binary_op.right ~ curr then
										previous_binary_op.replace_right_child (uop)
										k := 1
									end
										------------------------------UNARY OPERATIONS------------------------

								elseif attached {UNARY_OP} stack.at (k) as previous_unary_op then
									if previous_unary_op.right ~ curr then
										previous_unary_op.replace_right_child (uop)
										k := 1
									end
								end
								k := k - 1
							end
						end
					end
					push_element (uop)
					count := count + 1
				end --end inner if statement
			end -- end main  if statement

		end ---end method

feature -- queries

	out: STRING
		do
			create Result.make_from_string ("")
			Result.append ("Expression currently specified: " + expression + "%N")
			Result.append ("Report: " + report)

		end

invariant
	number_of_expressions_in_tree: count = stack.count

end
