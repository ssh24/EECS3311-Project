note
	description: "Summary description for {CURRENT_EXPRESSION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	CURRENT_EXPRESSION

inherit
	EXPRESSION
create
	make

feature -- constructor
	make
		do end

feature -- methods

	output: STRING
		do
			Result:="?"
		end

	accept(v: VISITOR)
		do
			v.visit_current(Current)
		end

end
