note
	description: "Summary description for {SUM}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	SUM

inherit
	UNARY_OP
redefine
	output, accept
	end

create
	make_sum


feature -- Constructor

	make_sum
		do
			make_unary_op(Current)
		end

feature -- Other features

	accept(v: VISITOR)
		do
			v.visit_sum (Current)
		end

	output: STRING
		do
			Result:="+"
		end

end


