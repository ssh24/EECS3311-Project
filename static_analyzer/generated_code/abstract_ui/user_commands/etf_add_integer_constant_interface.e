note
	description: ""
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	ETF_ADD_INTEGER_CONSTANT_INTERFACE
inherit
	ETF_COMMAND
		redefine 
			make 
		end

feature {NONE} -- Initialization

	make(an_etf_cmd_name: STRING; etf_cmd_args: TUPLE; an_etf_cmd_container: ETF_ABSTRACT_UI_INTERFACE)
		do
			Precursor(an_etf_cmd_name,etf_cmd_args,an_etf_cmd_container)
			etf_cmd_routine := agent add_integer_constant(?)
			etf_cmd_routine.set_operands (etf_cmd_args)
			if
				attached {INTEGER} etf_cmd_args[1] as c
			then
				out := "add_integer_constant(" + etf_event_argument_out("add_integer_constant", "c", c) + ")"
			else
				etf_cmd_error := True
			end
		end

feature -- command 
	add_integer_constant(c: INTEGER)
    	deferred
    	end
end
