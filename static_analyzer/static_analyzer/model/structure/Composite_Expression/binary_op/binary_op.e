note
	description: "Summary description for {BINARY_OP}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	BINARY_OP

inherit
	COMPOSITE_EXPRESSION
create
	make_binary_op

feature -- constructor

	make_binary_op(operation: EXPRESSION)
		do
			parent:=operation
			create {CURRENT_EXPRESSION}left.make
			create {NIL_EXPRESSION}right.make
		end

feature -- childs

	left: EXPRESSION

	right: EXPRESSION

	parent: EXPRESSION

	replace_left_child(e: EXPRESSION)
		do
			left:=e
		end

	replace_right_child(e: EXPRESSION)
		do
			right:=e
		end

	accept(v: VISITOR)
		do
		end

	output: STRING
		do
			Result:="(" + left.output + " " + parent.output + " " + right.output + ")"
		end
end
