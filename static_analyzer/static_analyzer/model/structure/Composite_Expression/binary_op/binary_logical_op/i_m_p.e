note
	description: "Summary description for {I_M_P}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	I_M_P

inherit
	BINARY_OP
redefine
	output, accept
	end

create
	make_imp

feature -- Constructor

	make_imp
		do
			make_binary_op (Current)
		end

feature -- Other features

	accept(v: VISITOR)
		do
			v.visit_implies (Current)
		end

	output: STRING
		do
			Result:="=>"
		end

end
