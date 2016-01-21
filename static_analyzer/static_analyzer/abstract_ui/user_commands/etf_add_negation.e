note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADD_NEGATION

inherit

	ETF_ADD_NEGATION_INTERFACE
		redefine
			add_negation
		end

create
	make

feature -- command

	add_negation
		do
				-- perform some update on the model state
			model.pretty_print
			if model.get_pretty_text.has ('?') then
--				model.insert_unary_op_expression (create {NEGATION}.make_negation)

				model.insert_unary_op_expression (create {NEGATION}.make_negation)
				model.reset_printer
				model.pretty_print
				model.default_update
				model.set_expression (model.get_pretty_text)
				model.set_report (model.report_success)
			else
				model.default_update
				model.set_expression (model.get_pretty_text)
				model.set_report (model.report_expression_is_already_fully_specified)
			end
			model.reset_printer
			etf_cmd_container.on_change.notify ([Current])
		end

end
