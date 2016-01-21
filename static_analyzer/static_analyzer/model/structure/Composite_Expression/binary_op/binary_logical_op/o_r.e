note
	description: "Summary description for {O_R}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	O_R

inherit
	BINARY_OP
redefine
	output, accept
	end

create
	make_or

feature -- Constructor

	make_or
		do
			make_binary_op (Current)
		end

feature -- Other features

	accept(v: VISITOR)
		do
			v.visit_or(Current)
		end

	output: STRING
		do
			Result:="||"
		end

end
