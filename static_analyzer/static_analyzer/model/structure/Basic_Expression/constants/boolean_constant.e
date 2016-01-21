note
	description: "Summary description for {BOOLEAN_CONSTANT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	BOOLEAN_CONSTANT

inherit
	BASIC_EXPRESSION

create
	make

feature -- Constructor

	make(b: BOOLEAN)
		do
			boolean:= b
		end

feature -- Attributes

	boolean: BOOLEAN

feature -- Methods

	accept(v: VISITOR)
		do
			v.visit_boolean (Current)
		end

	output: STRING
		do
			Result:=boolean.out
		end

end
