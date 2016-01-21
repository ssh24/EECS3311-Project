note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_EVALUATE

inherit

	ETF_EVALUATE_INTERFACE
		redefine
			evaluate
		end

create
	make

feature -- command

	evaluate
		do
				-- perform some update on the model state
			model.checker
			model.pretty_print

			if model.type_check_result then
				model.evaluator

				if model.get_evaluate_result ~ "Divisor is zero!" then
					model.default_update
					model.set_report (model.report_error_divisor_is_zero)
				else
					model.set_expression (model.get_evaluate_result)
					model.default_update
					model.set_report (model.report_success)
				end

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
