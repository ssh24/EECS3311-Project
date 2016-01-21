note
	description: "Summary description for {MULTIPLY}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	MULTIPLY

inherit
	BINARY_OP
redefine
	output, accept
	end

create
	make_multiply

feature -- Constructor

	make_multiply
		do
			make_binary_op (Current)
		end

feature -- Other features

	accept(v: VISITOR)
		do
			v.visit_multiply (Current)
		end

	output: STRING
		do
			Result:="*"
		end

end
