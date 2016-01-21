note
	description: "Summary description for {TESTER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TESTER
inherit
	ES_TEST
create
	make
feature
	make
		do
			add_boolean_case (agent t1)
		end
feature

	t1: BOOLEAN
		local
			m: ETF_MODEL
--			e1,e2: ADD
			e2: DIVISION
			e1: ADD
			eq1,eq2: EQUAL

			e3,e4,e5: INTEGER_CONSTANT
		do
			comment ("t1: test reset")

			create e1.make_add
			create e2.make_division

			create m.make


			create e3.make (1)
			create e4.make (0)
			create e5.make (3)

			m.insert_binary_op_expression (e1)
			m.insert_binary_op_expression (e2)
			m.insert_integer (e3)
			m.insert_integer (e4)
			m.insert_integer (e5)


			m.pretty_print
			m.checker
			m.evaluator


			Result:= (m.count=1) and (m.get_pretty_text ~ "(? + nil)")
			check Result end

		end

end
