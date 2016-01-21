note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADD_EQUALITY
inherit
	ETF_ADD_EQUALITY_INTERFACE
		redefine add_equality end
create
	make
feature -- command
	add_equality
    	do
			-- perform some update on the model state
			model.pretty_print

			if model.get_pretty_text.has ('?') then
				model.insert_binary_op_expression (create {EQUAL}.make_equal)

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
