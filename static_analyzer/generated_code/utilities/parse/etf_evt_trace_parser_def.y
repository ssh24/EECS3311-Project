--
--	grammar for an event trace parser
--
%{
class ETF_EVT_TRACE_PARSER 

inherit

	YY_PARSER_SKELETON
		rename
			make as make_parser_skeleton
		redefine
			report_error
		end	
			
	ETF_EVT_SCANNER
		rename
			make as make_scanner
		end

create 
	make
		
feature {ANY}

%}

-- the symbol calculate is the root of the parse tree
%start	input

-- these are tokens that appear as part of the grammar in addition to single characters
%token<INTEGER> NUMBER 		-- a integer number
%token<REAL> 	REAL   		-- a real number 
%token<STRING>  IDENT  		-- a string identifier
%token			CHAR_LIT	-- a character literal
%token			STR_LIT 	-- a string literal
%token 			TK_SYSTEM
%token 			TK_BOOL
%token 			TK_BOOLEAN
%token			TK_CHAR
%token			TK_CHARACTER
%token			TK_INT
%token			TK_INTEGER
%token 			TK_REAL
%token    		TK_STR
%token			TK_VALUE
%token 			TK_TUPLE
%token			TK_ARRAY
%token 			TK_TRUE
%token			TK_FALSE
%token 			TK_TRUE_LOWER
%token			TK_FALSE_LOWER
%token			TK_COMMA
%token 			TK_COLON      
%token 			TK_SEMI_COLON 
%token 			TK_LPAREN	  
%token 			TK_RPAREN     
%token 			TK_LSBRAC    
%token			TK_RSBRAC    
%token			TK_LABRAC
%token			TK_RABRAC
%token 			TK_LCBRAC
%token			TK_RCBRAC
%token 			TK_DQUOTE
%token			TK_MINUS
%token			TK_UPTO
%token			TK_TYPE
%token			TK_EQ
%token	EOL -- an end-of-line character

%type<ARRAY[TUPLE[name: STRING; args: ARRAY[ETF_EVT_ARG]]]>	evt_trace 
%type<ARRAY[ETF_EVT_ARG]> 						evt_arg_list
%type<ETF_EVT_ARG>								evt_arg
%type<ETF_PRIMITIVE_ARG>						primitive_arg
%type<ETF_COMPOSITE_ARG>						composite_arg
%type<ARRAY[ETF_PRIMITIVE_ARG]>					primitive_arg_list
%type<ARRAY[ETF_PRIMITIVE_ARG]>					primitive_simple_arg_list 	-- for tuple expressions
%type<ETF_PRIMITIVE_ARG>						primitive_simple_arg		-- for tuple expressions

%%

input : -- identify system context and call events
    evt_trace
    {
	  event_trace := $1
	}
	;

evt_trace :
	-- Empty rule, create an empty array
		{ 
		  create {ARRAY[TUPLE[name: STRING; args: ARRAY[ETF_EVT_ARG]]]} $$.make_empty
		}
	|	evt_trace IDENT TK_LPAREN evt_arg_list TK_RPAREN
	    {
		  $$ := $1
		  $$.force([$2, $4], $$.upper + 1)
		}
	|	evt_trace IDENT 
	    {
		  $$ := $1
		  $$.force([$2, <<>>], $$.upper + 1)
		}
	;
	
evt_arg_list : 
	  evt_arg 
	  { 
		create $$.make_empty	
		$$.force($1, $$.upper + 1)
	  }
	| evt_arg_list TK_COMMA evt_arg
	  { 
	    $$ := $1 
	    $$.force($3, $$.upper + 1)
	  }
	;
	
evt_arg : 
	  primitive_arg { $$ := $1 }
	| composite_arg { $$ := $1 }
	;

primitive_arg :
	  primitive_simple_arg { $$ := $1 }
	| TK_LSBRAC primitive_simple_arg_list TK_RSBRAC
	  {
	  	create {ETF_TUPLE_ARG} $$.make($2)
	  }
 	;
	
primitive_simple_arg :
      TK_TRUE  					
	  { 
		create {ETF_BOOL_ARG} $$.make(true) 
	  }
    | TK_FALSE 					
	  { 
		create {ETF_BOOL_ARG} $$.make(false) 
	  }
 	| TK_TRUE_LOWER  					
	  { 
		create {ETF_BOOL_ARG} $$.make(true) 
	  }
    | TK_FALSE_LOWER 					
	  { 
		create {ETF_BOOL_ARG} $$.make(false) 
	  }
	| CHAR_LIT
	  {
		create {ETF_CHAR_ARG} $$.make(last_character)
	  }
	| STR_LIT
	  { 
		create {ETF_STR_ARG}  $$.make(last_string_value) 
	  }
	| NUMBER  					
	  { 
		create {ETF_INT_ARG}  $$.make(last_integer_value)  
	  }
	| TK_MINUS NUMBER
	  {
	 	create {ETF_INT_ARG}  $$.make(-last_integer_value)  
	  }
	| REAL						
	  { 
		create {ETF_REAL_ARG} $$.make(last_real_value) 
		$$.set_src_out (last_string_value) -- see the scanner spec: the original string rep. is stored
	  }
	| TK_MINUS REAL
	  {
	  	create {ETF_REAL_ARG} $$.make(-last_real_value) 
	  }
	| IDENT
	  {
		if enum_items.has_key ($1) then
			create {ETF_ENUM_INT_ARG} $$.make (enum_items[$1])
			$$.set_src_out ($1)
		else
			report_error ("Unknown identifier " + $1)
			create {ETF_ENUM_INT_ARG} $$.make (-1) -- just to make void safety work!
		end
	  }
	;
	
composite_arg :
	  TK_LABRAC TK_LABRAC primitive_arg_list TK_RABRAC TK_RABRAC
	  { 
		create {ETF_ARRAY_ARG} $$.make($3) 
	  }
	;
	
primitive_arg_list :
	  -- empty primitive arg list
	  { create $$.make_empty }
	| primitive_arg
	  {
	    $$ := <<$1>>
	  }
	| primitive_arg_list TK_COMMA primitive_arg 
	  {  
		$$ := $1
		$$.force($3, $$.upper + 1)
	  }
	;
	
primitive_simple_arg_list :
	  -- empty simple primitive arg list
	  { create $$.make_empty }
	| primitive_simple_arg
	  {
	    $$ := <<$1>>
	  }
	| primitive_simple_arg_list TK_COMMA primitive_simple_arg 
	  {  
		$$ := $1
		$$.force($3, $$.upper + 1)
	  }
	;
%%

feature -- create

	make (items: HASH_TABLE[INTEGER, STRING])
			-- Create a event trace parser.
		do
			last_string_value := ""
			make_parser_skeleton
			make_scanner
			create event_trace.make_empty	
			last_error := ""
			enum_items := items
		end
		
feature -- access  

	event_trace : ARRAY[TUPLE[name: STRING; args: ARRAY[ETF_EVT_ARG]]]
	last_error : STRING
	enum_items : HASH_TABLE[INTEGER, STRING]

feature -- parsing

	report_error(a_message: STRING)
		do
			last_error := text + " (Line " + line.out + ", " + "Column " + column.out + ")" 
		end

	parse_string(str :STRING)
			-- parse the text of this given string
		local
			buf : YY_BUFFER
		do
			create buf.make(str)
			
			reset
			set_input_buffer(buf)
			parse
		end

	parse_file(filename:STRING)
			-- parse the text of the given input file
		local
			a_file: KL_TEXT_INPUT_FILE
		do
			create a_file.make (filename)
			a_file.open_read
			
			if a_file.is_open_read then
				reset
				set_input_buffer (new_file_buffer (a_file))
				parse
				a_file.close
			else
				std.error.put_string ("event declaration parser: cannot read %'"+filename+"%'%N")
			end
		end
	
end


