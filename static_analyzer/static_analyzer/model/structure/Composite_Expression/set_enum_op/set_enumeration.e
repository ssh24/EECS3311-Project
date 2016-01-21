note
	description: "Summary description for {SET_ENUMERATION}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	SET_ENUMERATION

inherit
	EXPRESSION

create
	make_se

feature -- constructor

	make_se
		do
			create set.make_empty
			set.extend (create {NIL_EXPRESSION}.make)
		end

feature -- attributes and methods

	set: SET[EXPRESSION]

	output: STRING
		local
			i: INTEGER
			imp: ARRAY[EXPRESSION]
		do
			create imp.make_from_array (set.as_array)
			create Result.make_empty

			Result.append ("{")
			from
				i := imp.lower
			until
				i > imp.upper
			loop
				check attached {EXPRESSION} imp[i] as e then
					Result.append (e.output)
				end
				if i < imp.upper then
					Result.append (", ")
				end
				i := i + 1
			end
			Result.append ("}")
		end

	accept (v: VISITOR)
		do
			v.visit_set_enumeration (Current)
		end
end
