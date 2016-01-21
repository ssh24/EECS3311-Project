note
	description: "Summary description for {UNARY_OP}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	UNARY_OP

inherit
	COMPOSITE_EXPRESSION
create
	make_unary_op

feature -- constructor

	make_unary_op(operation: EXPRESSION)
		do
			op:=operation
			create {CURRENT_EXPRESSION}right.make
		end

feature -- childs

	right: EXPRESSION

	op: EXPRESSION

	replace_right_child(e: EXPRESSION)
		do
			right:=e
		end

	accept(v: VISITOR)
		do
		end

	output: STRING
		do
			Result:="(" + op.output + " " + right.output + ")"
		end

end
