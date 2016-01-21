note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADD_CONJUNCTION

inherit

	ETF_ADD_CONJUNCTION_INTERFACE
		redefine
			add_conjunction
		end

create
	make

feature -- command

	add_conjunction
		do
				-- perform some update on the model state
			model.pretty_print

			if model.get_pretty_text.has ('?') then
				model.insert_binary_op_expression (create {A_N_D}.make_and)

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
