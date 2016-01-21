note
	description: "Summary description for {EMPTY_EXPRESSION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	EMPTY_EXPRESSION

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
			Result:="."
		end

	accept(v: VISITOR)
		do end

end
