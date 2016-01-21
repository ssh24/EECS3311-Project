note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADD_INTEGER_CONSTANT
inherit
	ETF_ADD_INTEGER_CONSTANT_INTERFACE
		redefine add_integer_constant end
create
	make
feature -- command

	add_integer_constant(c: INTEGER)
    	do
			-- perform some update on the model state

			model.insert_integer (create{INTEGER_CONSTANT}.make (c))
			model.default_update
			model.pretty_print
			model.set_expression (model.get_pretty_text)
			model.set_report (model.report_success)
			model.reset_printer

			etf_cmd_container.on_change.notify ([Current])
	end
end
