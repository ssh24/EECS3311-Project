note
	description: "Summary description for {DIFFERENCE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	DIFFERENCE

inherit
	BINARY_OP
redefine
	output, accept
	end

create
	make_difference

feature -- Constructor

	make_difference
		do
			make_binary_op (Current)
		end

feature -- Other features

	accept(v: VISITOR)
		do
			v.visit_difference (Current)
		end

	output: STRING
		do
			Result:="\"
		end

end
