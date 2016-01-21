note
	description: "Summary description for {GT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	GT

inherit
	BINARY_OP
redefine
	output, accept
	end

create
	make_gt

feature -- Constructor

	make_gt
		do
			make_binary_op (Current)
		end

feature -- Other features

	accept(v: VISITOR)
		do
			v.visit_gt (Current)
		end

	output: STRING
		do
			Result:=">"
		end

end
