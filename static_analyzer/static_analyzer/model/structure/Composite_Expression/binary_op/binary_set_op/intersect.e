note
	description: "Summary description for {INTERSECT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	INTERSECT

inherit
	BINARY_OP
redefine
	output, accept
	end

create
	make_intersect

feature -- Constructor

	make_intersect
		do
			make_binary_op (Current)
		end

feature -- Other features

	accept(v: VISITOR)
		do
			v.visit_intersect (Current)
		end

	output: STRING
		do
			Result:="/\"
		end

end
