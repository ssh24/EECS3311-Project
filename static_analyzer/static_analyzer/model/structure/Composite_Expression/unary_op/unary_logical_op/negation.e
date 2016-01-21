note
	description: "Summary description for {NEGATIVE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	NEGATION

inherit
	UNARY_OP
redefine
	output, accept
	end

create
	make_negation


feature -- Constructor

	make_negation
		do
			make_unary_op(Current)
		end

feature -- Other features

	accept(v: VISITOR)
		do
			v.visit_negation (Current)
		end

	output: STRING
		do
			Result:="!"
		end

end


