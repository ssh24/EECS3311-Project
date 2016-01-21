note
	description: "Summary description for {FORALL}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	FORALL

inherit
	UNARY_OP
redefine
	output, accept
	end

create
	make_forall


feature -- Constructor

	make_forall
		do
			make_unary_op(Current)
		end

feature -- Other features

	accept(v: VISITOR)
		do
			v.visit_forall (Current)
		end

	output: STRING
		do
			Result:="&&"
		end

end


