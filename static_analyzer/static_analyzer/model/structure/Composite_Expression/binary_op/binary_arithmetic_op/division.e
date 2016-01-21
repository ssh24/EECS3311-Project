note
	description: "Summary description for {DIVISION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	DIVISION

inherit
	BINARY_OP
redefine
	output, accept
	end

create
	make_division

feature -- Constructor

	make_division
		do
			make_binary_op (Current)
		end

feature -- Other features

	accept(v: VISITOR)
		do
			v.visit_division (Current)
		end

	output: STRING
		do
			Result:="/"
		end

end
