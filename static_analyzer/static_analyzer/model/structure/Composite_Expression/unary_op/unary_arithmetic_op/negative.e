note
	description: "Summary description for {NEGATIVE}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	NEGATIVE

inherit
	UNARY_OP
redefine
	output, accept
	end

create
	make_negative


feature -- Constructor

	make_negative
		do
			make_unary_op(Current)
		end

feature -- Other features

	accept(v: VISITOR)
		do
			v.visit_negative (Current)
		end

	output: STRING
		do
			Result:="-"
		end

end


