note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_END_SET_ENUMERATION
inherit
	ETF_END_SET_ENUMERATION_INTERFACE
		redefine end_set_enumeration end
create
	make
feature -- command
	end_set_enumeration
    	do
--			-- perform some update on the model state
--			if model.i >=0 then
--				if model.expression.at (model.expression.count) ~ ',' then
--					from
--						i:=model.expression.count-3
--					until
--						i > model.expression.count
--					loop
--						model.expression.remove (i)
--					end
--					model.expression.append ("}")
--					model.set_report (model.report_success)
--				end
--				model.default_update
--			end

--			etf_cmd_container.on_change.notify ([Current])
    	end

end
