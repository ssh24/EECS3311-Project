note
	description: "Summary description for {UNION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	UNION

inherit
	BINARY_OP
redefine
	output, accept
	end

create
	make_union

feature -- Constructor

	make_union
		do
			make_binary_op (Current)
		end

feature -- Other features

	accept(v: VISITOR)
		do
			v.visit_union (Current)
		end

	output: STRING
		do
			Result:="\/"
		end

end
