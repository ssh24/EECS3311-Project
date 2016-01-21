--note
--	description: "Summary description for {PRETTY_PRINTER}."
--	author: ""
--	date: "$Date$"
--	revision: "$Revision$"

--class
--	TYPE_CHECKER

--inherit

--	VISITOR

--create
--	make

--feature{CONTROL} -- attributes

--	flag: BOOLEAN

--feature{NONE} -- constructor

--	make
--		do
--			flag:=False
--		end

--feature -- Set enumeration op visits

--	visit_set_enumeration(e: SET_ENUMERATION)
--		do
--			
--		end

--feature -- Binary operation visits

--	visit_add (e: ADD)
--		do
--			if e.left_child ~ "?" and e.right_child ~ "nil" then
--				flag:=False
--			end
--		end

--	visit_subtract (e: SUBTRACT)
--		do
--		end

--	visit_multiply (e: MULTIPLY)
--		do
--		end

--	visit_division (e: DIVISION)
--		do
--		end

--	visit_and (e: A_N_D)
--		do
--		end

--	visit_difference (e: DIFFERENCE)
--		do
--		end

--	visit_equal (e: EQUAL)
--		do
--		end

--	visit_GT (e: GT)
--		do
--		end

--	visit_implies (e: I_M_P)
--		do
--		end

--	visit_intersect (e: INTERSECT)
--		do
--		end

--	visit_LT (e: LT)
--		do
--		end

--	visit_or (e: O_R)
--		do
--		end

--	visit_union (e: UNION)
--		do
--		end

--feature -- Unary op visits

--	visit_exists (e: EXISTS)
--		do
--		end

--	visit_forall (e: FORALL)
--		do
--		end

--	visit_sum (e: SUM)
--		do
--		end

--	visit_negation (e: NEGATION)
--		do
--		end

--	visit_negative (e: NEGATIVE)
--		do
--		end

--feature -- Basic expression visits

--	visit_integer (e: INTEGER_CONSTANT)
--		do
--		end

--	visit_boolean (e: BOOLEAN_CONSTANT)
--		do
--		end

--end

note
	description: "Summary description for {TYPE_CHECK}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TYPE_CHECKER

inherit
	VISITOR
create
	make

feature {NONE} -- Constructor

	make
		do
		end

feature {ETF_MODEL} --hidden

	reset
		do
			make
		end

feature -- Visitor

	visit_current(e: CURRENT_EXPRESSION)
	do
		type_correct:=False
	end

	visit_nil(e: NIL_EXPRESSION)
	do
		type_correct:=false
	end

	visit_integer(e: INTEGER_CONSTANT)
  		do
			if attached {INTEGER}e.integer then
				value := 1
				type_correct := True
			end
		end

	visit_boolean(e: BOOLEAN_CONSTANT)
		do
			if attached {BOOLEAN}e.boolean then
				value := 2
				type_correct := True
			end
		end

	visit_add(e: ADD)
		local
			left_tc: BOOLEAN
			right_tc: BOOLEAN
		do
			e.left.accept (Current)
			left_tc := (value = 1)
			e.right.accept (Current)
			right_tc := (value = 1)
			type_correct := left_tc and right_tc
		end

	visit_subtract(e: SUBTRACT)
  		local
			left_tc: BOOLEAN
			right_tc: BOOLEAN
		do
			e.left.accept (Current)
			left_tc := (value = 1)
			e.right.accept (Current)
			right_tc := (value = 1)
			type_correct := left_tc and right_tc
		end

	visit_multiply(e: MULTIPLY)
  		local
			left_tc: BOOLEAN
			right_tc: BOOLEAN
		do
			e.left.accept (Current)
			left_tc := (value = 1)
			e.right.accept (Current)
			right_tc := (value = 1)
			type_correct := left_tc and right_tc
		end

	visit_division(e: DIVISION)
		local
			left_tc: BOOLEAN
			right_tc: BOOLEAN
		do
			e.left.accept (Current)
			left_tc := (value = 1)
			e.right.accept (Current)
			right_tc := (value = 1)
			type_correct := left_tc and right_tc
		end

	visit_and(e: A_N_D)
  		local
			left_tc: BOOLEAN
			right_tc: BOOLEAN
		do
			e.left.accept (Current)
			left_tc := (value = 2)
			e.right.accept (Current)
			right_tc := (value = 2)
			type_correct := left_tc and right_tc
		end

	visit_or(e: O_R)
  		local
			left_tc: BOOLEAN
			right_tc: BOOLEAN
		do
			e.left.accept (Current)
			left_tc := (value = 2)
			e.right.accept (Current)
			right_tc := (value = 2)
			type_correct := left_tc and right_tc
		end

	visit_implies(e: I_M_P)
  		local
			left_tc: BOOLEAN
			right_tc: BOOLEAN
		do
			e.left.accept (Current)
			left_tc := (value = 2)
			e.right.accept (Current)
			right_tc := (value = 2)
			type_correct := left_tc and right_tc
		end

	visit_gt(e: GT)
		local
			left_tc: BOOLEAN
			right_tc: BOOLEAN
		do
			e.left.accept (Current)
			left_tc := (value = 1)
			e.right.accept (Current)
			right_tc := (value = 1)
			type_correct := left_tc and right_tc
		end

	visit_lt(e: LT)
		local
			left_tc: BOOLEAN
			right_tc: BOOLEAN
		do
			e.left.accept (Current)
			left_tc := (value = 1)
			e.right.accept (Current)
			right_tc := (value = 1)
			type_correct := left_tc and right_tc
		end

	visit_equal(e: EQUAL)
		local
			left_tc: BOOLEAN
			right_tc: BOOLEAN
		do
			e.left.accept (Current)
			if value = 1 then
				left_tc := (value = 1)

				e.right.accept (Current)
				right_tc := (value = 1)
				type_correct := left_tc and right_tc
			elseif value = 2 then
				left_tc := (value = 2)
				e.right.accept (Current)
				right_tc := (value = 2)
				type_correct := left_tc and right_tc
			end


		end

	visit_set_enumeration(e: SET_ENUMERATION)
		local
			int_tc, boolean_tc: BOOLEAN
		do
--			int_tc := True
--			boolean_tc := True

----			across e.set as cursor
----				loop
----					if not (attached {INTEGER_CONSTANT}e.set.item) then
----						int_tc := False
----					elseif not (attached {BOOLEAN_CONSTANT}e.set.item) then
----						boolean_tc := False
----					end
----				end

--			across e.set as cursor
--				loop
--					e.set.item.accept (Current)
--					int_tc := int_tc and (value = 1)
--				end

--			across e.set as cursor
--				loop
--					e.set.item.accept (Current)
--					boolean_tc := boolean_tc and (value = 2)
--				end

--			type_correct := int_tc or boolean_tc

--			if int_tc then
--				value := 3
--			elseif boolean_tc then
--				value := 4
--			end
		end

	visit_union(e: UNION)
		local
			int_l_tc, int_r_tc, boolean_l_tc, boolean_r_tc: BOOLEAN
		do
--			e.left.accept (Current)
--			int_l_tc := (value = 3)
--			boolean_l_tc := (value = 4)
--			e.right.accept (Current)
--			int_r_tc := (value = 3)
--			boolean_r_tc := (value = 4)
--			type_correct := (int_l_tc and int_r_tc) or (boolean_l_tc and boolean_r_tc)
		end

	visit_intersect(e: INTERSECT)
		local
			int_l_tc, int_r_tc, boolean_l_tc, boolean_r_tc: BOOLEAN
		do
--			e.left.accept (Current)
--			int_l_tc := (value = 3)
--			boolean_l_tc := (value = 4)
--			e.right.accept (Current)
--			int_r_tc := (value = 3)
--			boolean_r_tc := (value = 4)
--			type_correct := (int_l_tc and int_r_tc) or (boolean_l_tc and boolean_r_tc)
		end

	visit_difference(e: DIFFERENCE)
		local
			int_l_tc, int_r_tc, boolean_l_tc, boolean_r_tc: BOOLEAN
		do
--			e.left.accept (Current)
--			int_l_tc := (value = 3)
--			boolean_l_tc := (value = 4)
--			e.right.accept (Current)
--			int_r_tc := (value = 3)
--			boolean_r_tc := (value = 4)
--			type_correct := (int_l_tc and int_r_tc) or (boolean_l_tc and boolean_r_tc)
		end

	visit_negative(e: NEGATIVE)
		do
			e.right.accept (Current)
			type_correct := (value = 1)
		end

	visit_negation(e: NEGATION)
		do
			e.right.accept (Current)
			type_correct := (value = 2)
		end

	visit_sum(e: SUM)
		do
--			e.right.accept (Current)
--			type_correct := (value = 3)
		end

	visit_forall(e: FORALL)
		do
--			e.right.accept (Current)
--			type_correct := (value = 4)
		end

	visit_exists(e: EXISTS)
		do
--			e.right.accept (Current)
--			type_correct := (value = 4)
		end

feature -- Attributes
	value: INTEGER
	type_correct: BOOLEAN
end
