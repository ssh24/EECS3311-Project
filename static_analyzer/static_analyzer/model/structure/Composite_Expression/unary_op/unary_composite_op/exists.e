note
	description: "Summary description for {EXISTS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	EXISTS

inherit
	UNARY_OP
redefine
	output, accept
	end

create
	make_exists


feature -- Constructor

	make_exists
		do
			make_unary_op(Current)
		end

feature -- Other features

	accept(v: VISITOR)
		do
			v.visit_exists (Current)
		end

	output: STRING
		do
			Result:="||"
		end

end


