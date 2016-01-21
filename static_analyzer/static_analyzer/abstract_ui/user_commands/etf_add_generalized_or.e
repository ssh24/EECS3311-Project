note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADD_GENERALIZED_OR
inherit 
	ETF_ADD_GENERALIZED_OR_INTERFACE
		redefine add_generalized_or end
create
	make
feature -- command 
	add_generalized_or
    	do
			-- perform some update on the model state
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
