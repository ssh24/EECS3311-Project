note
	description: "Summary description for {LT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	LT

inherit
	BINARY_OP
redefine
	output, accept
	end

create
	make_lt

feature -- Constructor

	make_lt
		do
			make_binary_op (Current)
		end

feature -- Other features

	accept(v: VISITOR)
		do
			v.visit_lt (Current)
		end

	output: STRING
		do
			Result:="<"
		end

end
