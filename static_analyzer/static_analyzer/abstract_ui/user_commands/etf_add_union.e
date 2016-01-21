note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	ETF_ADD_UNION
inherit 
	ETF_ADD_UNION_INTERFACE
		redefine add_union end
create
	make
feature -- command 
	add_union
    	do
			-- perform some update on the model state
			model.default_update
			etf_cmd_container.on_change.notify ([Current])
    	end

end
