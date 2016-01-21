note
	description: "Summary description for {ADD}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ADD

inherit
	BINARY_OP
redefine
	output, accept
	end

create
	make_add

feature -- Constructor

	make_add
		do
			make_binary_op (Current)
		end

feature -- Other features

	accept(v: VISITOR)
		do
			v.visit_add (Current)
		end

	output: STRING
		do
			Result:="+"
		end

end
