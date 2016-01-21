note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADD_IMPLICATION
inherit
	ETF_ADD_IMPLICATION_INTERFACE
		redefine add_implication end
create
	make
feature -- command
	add_implication
    	do
			-- perform some update on the model state
			model.pretty_print

			if model.get_pretty_text.has ('?') then
				model.insert_binary_op_expression (create {I_M_P}.make_imp)

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
