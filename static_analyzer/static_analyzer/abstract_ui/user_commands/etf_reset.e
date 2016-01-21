note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_RESET

inherit

	ETF_RESET_INTERFACE
		redefine
			reset
		end

create
	make

feature -- command

	reset
		local

		do
				-- perform some update on the model state

			if model.default_count = 0 then
				model.set_report (model.report_initial_expression_cannot_be_reset)
			else
				model.reset
				model.set_report (model.report_success)
			end
			etf_cmd_container.on_change.notify ([Current])
		end
end
