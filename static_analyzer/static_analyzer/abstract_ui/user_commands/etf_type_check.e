note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_TYPE_CHECK
inherit
	ETF_TYPE_CHECK_INTERFACE
		redefine type_check end
create
	make
feature -- command
	type_check
    	do
			-- perform some update on the model state

			model.checker
			model.pretty_print

			if model.type_check_result then
				model.default_update
				model.set_expression (model.get_pretty_text)
				model.set_report (model.get_pretty_text + model.report_success)
			elseif model.get_pretty_text.has ('?') or model.get_pretty_text.has_substring ("nil") then
				model.set_report (model.report_expression_is_not_yet_fully_specified)
			else
				model.set_report (model.report_error_expression_is_not_type_correct)
			end

			model.reset_printer
			model.reset_checker

			etf_cmd_container.on_change.notify ([Current])
    	end

end
