note
	description: "Summary description for {EQUAL}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	EQUAL

inherit
	BINARY_OP
redefine
	output, accept
	end

create
	make_equal

feature -- Constructor

	make_equal
		do
			make_binary_op (Current)
		end

feature -- Other features

	accept(v: VISITOR)
		do
			v.visit_equal (Current)
		end

	output: STRING
		do
			Result:="="
		end

end
