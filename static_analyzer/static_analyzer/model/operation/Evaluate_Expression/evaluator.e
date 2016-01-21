note
	description: "Summary description for {EVALUATOR}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	EVALUATOR

inherit

	VISITOR

create
	make

feature -- Constructor

	make
		do
			create set.make_empty
			create text.make_empty
		end

feature -- visitors

	visit_current (e: CURRENT_EXPRESSION)
		do
			boolean_value := false
			text:=boolean_value.out
		end

	visit_nil (e: NIL_EXPRESSION)
		do
			boolean_value := false
			text:=boolean_value.out
		end

	visit_integer (e: INTEGER_CONSTANT)
		do
			integer_value := e.integer
			text:=integer_value.out
		end

	visit_boolean (e: BOOLEAN_CONSTANT)
		do
			boolean_value := e.boolean
			text:=boolean_value.out
		end

	visit_add (e: ADD)
		local
			left_evaluator, right_evaluator: EVALUATOR
		do
			create left_evaluator.make
			create right_evaluator.make
			e.left.accept (left_evaluator)
			e.right.accept (right_evaluator)
			integer_value := left_evaluator.integer_value + right_evaluator.integer_value
			if left_evaluator.text ~ "Divisor is zero!" or right_evaluator.text ~ "Divisor is zero!" then
				text:="Divisor is zero!"
			else
				text := integer_value.out
			end


		end

	visit_subtract (e: SUBTRACT)
		local
			left_evaluator, right_evaluator: EVALUATOR
		do
			create left_evaluator.make
			create right_evaluator.make
			e.left.accept (left_evaluator)
			e.right.accept (right_evaluator)
			integer_value := left_evaluator.integer_value - right_evaluator.integer_value
			if left_evaluator.text ~ "Divisor is zero!" or right_evaluator.text ~ "Divisor is zero!" then
				text:="Divisor is zero!"
			else
				text := integer_value.out
			end
		end

	visit_multiply (e: MULTIPLY)
		local
			left_evaluator, right_evaluator: EVALUATOR
		do
			create left_evaluator.make
			create right_evaluator.make
			e.left.accept (left_evaluator)
			e.right.accept (right_evaluator)
			integer_value := left_evaluator.integer_value * right_evaluator.integer_value
			if left_evaluator.text ~ "Divisor is zero!" or right_evaluator.text ~ "Divisor is zero!" then
				text:="Divisor is zero!"
			else
				text := integer_value.out
			end
		end

	visit_division (e: DIVISION)
		local
			left_evaluator, right_evaluator: EVALUATOR
		do
			create left_evaluator.make
			create right_evaluator.make

			e.left.accept (left_evaluator)
			e.right.accept (right_evaluator)

			if not (right_evaluator.integer_value=0) then
				integer_value := left_evaluator.integer_value // right_evaluator.integer_value
				if left_evaluator.text ~ "Divisor is zero!" or right_evaluator.text ~ "Divisor is zero!" then
					text:="Divisor is zero!"
				else
					text := integer_value.out
				end
			else
				text:="Divisor is zero!"
			end

		end

	visit_or (e: O_R)
		local
			left_evaluator, right_evaluator: EVALUATOR
		do
			create left_evaluator.make
			create right_evaluator.make
			e.left.accept (left_evaluator)
			e.right.accept (right_evaluator)
			boolean_value := left_evaluator.boolean_value or right_evaluator.boolean_value
			text := boolean_value.out
		end

	visit_and (e: A_N_D)
		local
			left_evaluator, right_evaluator: EVALUATOR
		do
			create left_evaluator.make
			create right_evaluator.make
			e.left.accept (left_evaluator)
			e.right.accept (right_evaluator)
			boolean_value := left_evaluator.boolean_value and right_evaluator.boolean_value
			text := boolean_value.out
		end

	visit_implies (e: I_M_P)
		local
			left_evaluator, right_evaluator: EVALUATOR
		do
			create left_evaluator.make
			create right_evaluator.make
			e.left.accept (left_evaluator)
			e.right.accept (right_evaluator)
			boolean_value := left_evaluator.boolean_value implies right_evaluator.boolean_value
			text := boolean_value.out
		end

	visit_gt (e: GT)
		local
			left_evaluator, right_evaluator: EVALUATOR
		do
			create left_evaluator.make
			create right_evaluator.make
			e.left.accept (left_evaluator)
			e.right.accept (right_evaluator)
			boolean_value := (left_evaluator.integer_value > right_evaluator.integer_value)
			text := boolean_value.out
		end

	visit_lt (e: LT)
		local
			left_evaluator, right_evaluator: EVALUATOR
		do
			create left_evaluator.make
			create right_evaluator.make

			e.left.accept (left_evaluator)
			e.right.accept (right_evaluator)


			boolean_value := (left_evaluator.integer_value < right_evaluator.integer_value)
			text := boolean_value.out
		end

	visit_equal (e: EQUAL)
		local
			left_evaluator, right_evaluator: EVALUATOR
		do
			create left_evaluator.make
			create right_evaluator.make
			e.left.accept (left_evaluator)
			e.right.accept (right_evaluator)
			boolean_value := (left_evaluator.boolean_value = right_evaluator.boolean_value)
			text := boolean_value.out
		end

	visit_set_enumeration (e: SET_ENUMERATION)
		do
				--			set.copy (e.set)
		end

	visit_union (e: UNION)
		local
			left_evaluator, right_evaluator: EVALUATOR
		do
				--			create left_evaluator.make
				--			create right_evaluator.make
				--			e.left.accept (left_evaluator)
				--			e.right.accept (right_evaluator)
				--			set := left_evaluator.set.unioned (right_evaluator.set)
				--				--	 		set.copy (left_evaluator.set)
				--				--	 		set.merge_right (right_evaluator.set)
		end

	visit_intersect (e: INTERSECT)
		local
			left_evaluator, right_evaluator: EVALUATOR
		do
				--			create left_evaluator.make
				--			create right_evaluator.make
				--			e.left.accept (left_evaluator)
				--			e.right.accept (right_evaluator)
				--			set := left_evaluator.set.intersected (right_evaluator.set)
		end

	visit_difference (e: DIFFERENCE)
		local
			left_evaluator, right_evaluator: EVALUATOR
		do
				--			create left_evaluator.make
				--			create right_evaluator.make
				--			e.left.accept (left_evaluator)
				--			e.right.accept (right_evaluator)
				--			set := left_evaluator.set.differenced (right_evaluator.set)
		end

	visit_negative (e: NEGATIVE)
		local
			evaluator: EVALUATOR
		do
			create evaluator.make
			e.right.accept (evaluator)
			integer_value := 0 - evaluator.integer_value
			text := integer_value.out
		end

	visit_negation (e: NEGATION)
		local
			evaluator: EVALUATOR
		do
			create evaluator.make
			e.right.accept (evaluator)
			boolean_value := not evaluator.boolean_value
			text := boolean_value.out
		end

	visit_sum (e: SUM)
		local
			sum: INTEGER
			i: INTEGER
			imp: ARRAY [EXPRESSION]
		do
				--			if attached {SET_ENUMERATION} e.operand as integer_set then
				--				sum := 0
				--				create imp.make_from_array (integer_set.set.as_array)
				--				from
				--					i := imp.lower
				--				until
				--					i > imp.upper
				--				loop
				--					check attached {INTEGER_CONSTANT} imp [i] as cur then
				--						sum := sum + cur.value
				--					end
				--					i := i + 1
				--				end
				--				integer_value := sum
				--			end
		end

	visit_exists (e: EXISTS)
		local
			boolean_result: BOOLEAN
			i: INTEGER
			imp: ARRAY [EXPRESSION]
		do
				--			if attached {SET_ENUMERATION} e.operand as integer_set then
				--				create imp.make_from_array (integer_set.set.as_array)
				--				if attached {BOOLEAN_CONSTANT} imp [1] as first then
				--					boolean_result := first.value
				--				end
				--				from
				--					i := imp.lower
				--				until
				--					i > imp.upper
				--				loop
				--					check attached {BOOLEAN_CONSTANT} imp [i] as cur then
				--						boolean_result := boolean_result and cur.value
				--					end
				--					i := i + 1
				--				end
				--				boolean_value := boolean_result
				--			end
		end

	visit_forall (e: FORALL)
		local
			boolean_result: BOOLEAN
			i: INTEGER
			imp: ARRAY [EXPRESSION]
		do
				--			if attached {SET_ENUMERATION} e.operand as integer_set then
				--				create imp.make_from_array (integer_set.set.as_array)
				--				if attached {BOOLEAN_CONSTANT} imp [1] as first then
				--					boolean_result := first.value
				--				end
				--				from
				--					i := imp.lower
				--				until
				--					i > imp.upper
				--				loop
				--					check attached {BOOLEAN_CONSTANT} imp [i] as cur then
				--						boolean_result := boolean_result or cur.value
				--					end
				--					i := i + 1
				--				end
				--				boolean_value := boolean_result
				--			end
		end

feature -- attributes

	integer_value: INTEGER

	boolean_value: BOOLEAN

	text: STRING

	set: SET [EXPRESSION]

end
