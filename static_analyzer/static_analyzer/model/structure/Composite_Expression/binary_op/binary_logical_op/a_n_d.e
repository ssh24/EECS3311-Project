note
	description: "Summary description for {A_N_D}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	A_N_D

inherit
	BINARY_OP
redefine
	output, accept
	end

create
	make_and

feature -- Constructor

	make_and
		do
			make_binary_op (Current)
		end

feature -- Other features

	accept(v: VISITOR)
		do
			v.visit_and (Current)
		end

	output: STRING
		do
			Result:="&&"
		end

end
