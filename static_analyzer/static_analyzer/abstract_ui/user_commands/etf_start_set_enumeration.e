note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_START_SET_ENUMERATION
inherit
	ETF_START_SET_ENUMERATION_INTERFACE
		redefine start_set_enumeration end
create
	make
feature -- command
	start_set_enumeration
		local
			i: INTEGER
    	do
			-- perform some update on the model state
--			if model.i >= 0 then
--				i:= model.expression.index_of ('?', 1)

--				model.expression.insert_character (' ', i)

--				model.expression.replace_substring ("{", i, i)
--				model.expression.insert_character (',', i+2)

--				model.set_report (model.report_success)
--				model.default_update
--			end


			etf_cmd_container.on_change.notify ([Current])
    	end

end
