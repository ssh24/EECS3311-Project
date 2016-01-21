note
	description: "Summary description for {SUBTRACT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	SUBTRACT

inherit
	BINARY_OP
redefine
	output, accept
	end

create
	make_subtract

feature -- Constructor

	make_subtract
		do
			make_binary_op (Current)
		end

feature -- Other features

	accept(v: VISITOR)
		do
			v.visit_subtract (Current)
		end

	output: STRING
		do
			Result:="-"
		end

end
