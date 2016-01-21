deferred class ETF_EVT_SCANNER

inherit

	YY_COMPRESSED_SCANNER_SKELETON
		rename
			make as make_compressed_scanner_skeleton,
			reset as reset_compressed_scanner_skeleton
		end
		
	ETF_EVT_TOKENS

feature -- Status report

	valid_start_condition (sc: INTEGER): BOOLEAN
			-- Is `sc' a valid start condition?
		do
			Result := (sc = INITIAL)
		end

feature {NONE} -- Implementation

	yy_build_tables
			-- Build scanner tables.
		do
			yy_nxt := yy_nxt_template
			yy_chk := yy_chk_template
			yy_base := yy_base_template
			yy_def := yy_def_template
			yy_ec := yy_ec_template
			yy_meta := yy_meta_template
			yy_accept := yy_accept_template
		end

	yy_execute_action (yy_act: INTEGER)
			-- Execute semantic action.
		do
if yy_act <= 21 then
if yy_act <= 11 then
if yy_act <= 6 then
if yy_act <= 3 then
if yy_act <= 2 then
if yy_act = 1 then
	yy_column := yy_column + yy_end - yy_start - yy_more_len
--|#line 68 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 68")
end
-- ignore whitespaces
else
yy_set_line_column
--|#line 70 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 70")
end
-- ignore new lines
end
else
	yy_column := yy_column + 6
--|#line 72 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 72")
end
last_token := TK_SYSTEM
end
else
if yy_act <= 5 then
if yy_act = 4 then
	yy_column := yy_column + 4
--|#line 73 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 73")
end
last_token := TK_BOOL
else
	yy_column := yy_column + 7
--|#line 74 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 74")
end
last_token := TK_BOOLEAN
end
else
	yy_column := yy_column + 4
--|#line 75 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 75")
end
last_token := TK_CHAR
end
end
else
if yy_act <= 9 then
if yy_act <= 8 then
if yy_act = 7 then
	yy_column := yy_column + 9
--|#line 76 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 76")
end
last_token := TK_CHARACTER
else
	yy_column := yy_column + 3
--|#line 77 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 77")
end
last_token := TK_INT
end
else
	yy_column := yy_column + 7
--|#line 78 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 78")
end
last_token := TK_INTEGER
end
else
if yy_act = 10 then
	yy_column := yy_column + 4
--|#line 79 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 79")
end
last_token := TK_REAL
else
	yy_column := yy_column + 6
--|#line 80 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 80")
end
last_token := TK_STR
end
end
end
else
if yy_act <= 16 then
if yy_act <= 14 then
if yy_act <= 13 then
if yy_act = 12 then
	yy_column := yy_column + 5
--|#line 81 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 81")
end
last_token := TK_VALUE
else
	yy_column := yy_column + 5
--|#line 82 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 82")
end
last_token := TK_TUPLE
end
else
	yy_column := yy_column + 5
--|#line 83 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 83")
end
last_token := TK_ARRAY
end
else
if yy_act = 15 then
	yy_column := yy_column + 5
--|#line 84 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 84")
end
last_token := TK_FALSE
else
	yy_column := yy_column + 4
--|#line 85 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 85")
end
last_token := TK_TRUE
end
end
else
if yy_act <= 19 then
if yy_act <= 18 then
if yy_act = 17 then
	yy_column := yy_column + 5
--|#line 86 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 86")
end
last_token := TK_false
else
	yy_column := yy_column + 4
--|#line 87 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 87")
end
last_token := TK_true
end
else
	yy_column := yy_column + 1
--|#line 89 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 89")
end
last_token := TK_COMMA
end
else
if yy_act = 20 then
	yy_column := yy_column + 1
--|#line 90 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 90")
end
last_token := TK_COLON
else
	yy_column := yy_column + 1
--|#line 91 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 91")
end
last_token := TK_SEMI_COLON
end
end
end
end
else
if yy_act <= 32 then
if yy_act <= 27 then
if yy_act <= 24 then
if yy_act <= 23 then
if yy_act = 22 then
	yy_column := yy_column + 1
--|#line 92 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 92")
end
last_token := TK_LPAREN
else
	yy_column := yy_column + 1
--|#line 93 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 93")
end
last_token := TK_RPAREN
end
else
	yy_column := yy_column + 1
--|#line 94 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 94")
end
last_token := TK_LSBRAC
end
else
if yy_act <= 26 then
if yy_act = 25 then
	yy_column := yy_column + 1
--|#line 95 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 95")
end
last_token := TK_RSBRAC
else
	yy_column := yy_column + 1
--|#line 96 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 96")
end
last_token := TK_LABRAC
end
else
	yy_column := yy_column + 1
--|#line 97 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 97")
end
last_token := TK_RABRAC
end
end
else
if yy_act <= 30 then
if yy_act <= 29 then
if yy_act = 28 then
	yy_column := yy_column + 1
--|#line 98 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 98")
end
last_token := TK_LCBRAC
else
	yy_column := yy_column + 1
--|#line 99 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 99")
end
last_token := TK_RCBRAC
end
else
	yy_column := yy_column + 1
--|#line 100 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 100")
end
last_token := TK_DQUOTE
end
else
if yy_act = 31 then
	yy_column := yy_column + 1
--|#line 101 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 101")
end
last_token := TK_MINUS
else
	yy_column := yy_column + 2
--|#line 102 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 102")
end
last_token := TK_UPTO
end
end
end
else
if yy_act <= 37 then
if yy_act <= 35 then
if yy_act <= 34 then
if yy_act = 33 then
	yy_column := yy_column + 4
--|#line 103 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 103")
end
last_token := TK_TYPE
else
	yy_column := yy_column + 1
--|#line 104 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 104")
end
last_token := TK_EQ
end
else
	yy_column := yy_column + yy_end - yy_start - yy_more_len
--|#line 107 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 107")
end
 -- return a digit token and store the integer value in last_integer_value, which the parser will use
			last_integer_value := text.to_integer
			last_token := NUMBER
		
end
else
if yy_act = 36 then
	yy_column := yy_column + yy_end - yy_start - yy_more_len
--|#line 112 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 112")
end

		                 last_real_value := text.to_real
						 last_string_value := text -- keep the original string rep. for VALUE, if applicable
		                 last_token := REAL
        
else
	yy_column := yy_column + yy_end - yy_start - yy_more_len
--|#line 118 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 118")
end
 -- return an identifier and store the value in last_string_value, which the parser will use
			last_string_value := text
			last_token := IDENT
		
end
end
else
if yy_act <= 40 then
if yy_act <= 39 then
if yy_act = 38 then
	yy_column := yy_column + 3
--|#line 123 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 123")
end

				last_character := text.item(2)
				last_token := CHAR_LIT
			
else
yy_set_line_column
--|#line 128 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 128")
end

				last_string_value := text.substring(2, text.count - 1)
				last_token := STR_LIT
			
end
else
	yy_column := yy_column + yy_end - yy_start - yy_more_len
--|#line 133 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 133")
end
-- Ignore comments
end
else
if yy_act = 41 then
	yy_column := yy_column + 1
--|#line 135 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 135")
end
-- DO NOT REMOVE THIS!!!!! 
        -- return the character code for a character, which are reserved tokens that the parser uses
		-- The character code for '+' is a value token and is used by the parser by writing
		-- '+' as a token in a rule
		last_token := text_item (1).code
		
else
yy_set_line_column
--|#line 0 "etf_evt_scanner_def.l"
debug ("GELEX")
	std.error.put_line ("Executing scanner user-code from file 'etf_evt_scanner_def.l' at line 0")
end
last_token := yyError_token
fatal_error ("scanner jammed")
end
end
end
end
end
		end

	yy_execute_eof_action (yy_sc: INTEGER)
			-- Execute EOF semantic action.
		do
			terminate
		end

feature {NONE} -- Table templates

	yy_nxt_template: SPECIAL [INTEGER]
			-- Template for `yy_nxt'
		once
			Result := yy_fixed_array (<<
			    0,    4,    5,    6,    7,    8,    9,   10,   11,   12,
			   13,   14,   15,   16,   17,   18,   19,   20,   21,   22,
			   23,   24,   25,   25,   26,   25,   25,   27,   25,   25,
			   25,   25,   28,   29,   30,   25,   31,   25,   32,    4,
			   33,    4,   25,   25,   34,   25,   25,   25,   25,   35,
			   36,   25,   25,   37,   38,   39,   39,   39,   39,   41,
			   46,   47,   56,   61,   39,   57,   39,   62,   41,   63,
			   46,   47,   41,   40,   40,   40,   40,   40,   43,  113,
			   43,   43,   43,   48,   48,   48,   44,  112,   44,   44,
			   44,  111,  110,   42,  109,  108,  107,  106,  105,  104,

			  103,  102,   42,   42,  101,  100,   42,   99,   98,   97,
			   96,   95,   94,   93,   92,   91,   90,   89,   88,   87,
			   86,   85,   84,   83,   82,   81,   80,   65,   79,   78,
			   77,   76,   75,   74,   73,   72,   71,   70,   69,   68,
			   67,   66,   65,   64,   60,   59,   58,   55,   54,   53,
			   52,   51,   50,   49,   45,   44,  114,    3,  114,  114,
			  114,  114,  114,  114,  114,  114,  114,  114,  114,  114,
			  114,  114,  114,  114,  114,  114,  114,  114,  114,  114,
			  114,  114,  114,  114,  114,  114,  114,  114,  114,  114,
			  114,  114,  114,  114,  114,  114,  114,  114,  114,  114,

			  114,  114,  114,  114,  114,  114,  114,  114,  114,  114,
			  114,  114, yy_Dummy>>)
		end

	yy_chk_template: SPECIAL [INTEGER]
			-- Template for `yy_chk'
		once
			Result := yy_fixed_array (<<
			    0,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    5,    7,    5,    7,    8,
			   15,   15,   30,   36,   39,   30,   39,   36,   40,   42,
			   47,   47,   63,  115,  115,  115,  115,  115,  116,  112,
			  116,  116,  116,  117,  117,  117,  118,  110,  118,  118,
			  118,  106,  105,    8,  104,  103,   99,   98,   96,   95,

			   91,   90,   40,   42,   89,   88,   63,   86,   84,   83,
			   82,   81,   80,   79,   78,   77,   76,   75,   74,   73,
			   72,   71,   70,   69,   68,   67,   66,   65,   62,   61,
			   60,   59,   58,   57,   56,   55,   54,   53,   52,   51,
			   50,   49,   46,   43,   35,   34,   31,   29,   28,   27,
			   26,   24,   23,   22,   14,   13,    3,  114,  114,  114,
			  114,  114,  114,  114,  114,  114,  114,  114,  114,  114,
			  114,  114,  114,  114,  114,  114,  114,  114,  114,  114,
			  114,  114,  114,  114,  114,  114,  114,  114,  114,  114,
			  114,  114,  114,  114,  114,  114,  114,  114,  114,  114,

			  114,  114,  114,  114,  114,  114,  114,  114,  114,  114,
			  114,  114, yy_Dummy>>)
		end

	yy_base_template: SPECIAL [INTEGER]
			-- Template for `yy_base'
		once
			Result := yy_fixed_array (<<
			    0,    0,    0,  156,  157,   53,  157,   54,   54,    0,
			  157,  157,  157,  145,  143,   49,  157,  157,  157,  157,
			  157,  157,  121,  122,  125,    0,  131,  120,  125,  113,
			   30,  127,  157,  157,  103,   92,   15,  157,  157,   62,
			   63,  157,   64,  137,    0,  157,  130,   59,    0,  109,
			  110,  120,  110,  103,  117,  103,   99,  102,  104,   86,
			   81,   78,   81,   67,  157,  115,  107,   97,   92,   90,
			   99,   93,   93,   96,   90,   82,   67,   65,   71,   70,
			   75,   88,   91,   86,   83,    0,   78,    0,   82,   81,
			   58,   57,    0,    0,    0,   80,   77,    0,   74,   71,

			    0,    0,    0,   49,   65,   58,   59,    0,    0,    0,
			   64,    0,   47,    0,  157,   72,   77,   80,   85, yy_Dummy>>)
		end

	yy_def_template: SPECIAL [INTEGER]
			-- Template for `yy_def'
		once
			Result := yy_fixed_array (<<
			    0,  114,    1,  114,  114,  114,  114,  114,  115,  116,
			  114,  114,  114,  114,  114,  114,  114,  114,  114,  114,
			  114,  114,  117,  117,  117,  117,  117,  117,  117,  117,
			  117,  117,  114,  114,  117,  117,  117,  114,  114,  114,
			  115,  114,  115,  114,  118,  114,  114,  114,  117,  117,
			  117,  117,  117,  117,  117,  117,  117,  117,  117,  117,
			  117,  117,  117,  115,  114,  114,  117,  117,  117,  117,
			  117,  117,  117,  117,  117,  117,  117,  117,  117,  117,
			  117,  117,  117,  117,  117,  117,  117,  117,  117,  117,
			  117,  117,  117,  117,  117,  117,  117,  117,  117,  117,

			  117,  117,  117,  117,  117,  117,  117,  117,  117,  117,
			  117,  117,  117,  117,    0,  114,  114,  114,  114, yy_Dummy>>)
		end

	yy_ec_template: SPECIAL [INTEGER]
			-- Template for `yy_ec'
		once
			Result := yy_fixed_array (<<
			    0,    1,    1,    1,    1,    1,    1,    1,    1,    2,
			    3,    1,    1,    4,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    2,    1,    5,    1,    1,    1,    1,    6,
			    7,    8,    1,    1,    9,   10,   11,    1,   12,   12,
			   12,   12,   12,   12,   12,   12,   12,   12,   13,   14,
			   15,   16,   17,   18,    1,   19,   20,   21,   22,   23,
			   24,   25,   26,   27,   22,   22,   28,   22,   29,   30,
			   31,   22,   32,   33,   34,   35,   36,   22,   22,   37,
			   22,   38,   39,   40,    1,   41,    1,   42,   22,   22,

			   22,   43,   44,   22,   22,   22,   22,   22,   45,   46,
			   22,   22,   47,   22,   48,   49,   50,   51,   22,   22,
			   22,   52,   22,   53,    1,   54,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,

			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
			    1,    1,    1,    1,    1,    1,    1, yy_Dummy>>)
		end

	yy_meta_template: SPECIAL [INTEGER]
			-- Template for `yy_meta'
		once
			Result := yy_fixed_array (<<
			    0,    1,    1,    2,    1,    1,    1,    1,    1,    1,
			    1,    1,    3,    1,    1,    1,    1,    1,    1,    3,
			    3,    3,    3,    3,    3,    3,    3,    3,    3,    3,
			    3,    3,    3,    3,    3,    3,    3,    4,    1,    1,
			    1,    3,    3,    3,    3,    3,    3,    3,    3,    3,
			    3,    3,    5,    1,    1, yy_Dummy>>)
		end

	yy_accept_template: SPECIAL [INTEGER]
			-- Template for `yy_accept'
		once
			Result := yy_fixed_array (<<
			    0,    0,    0,   43,   41,    1,    2,    1,   30,   41,
			   22,   23,   19,   31,   41,   35,   20,   21,   26,   34,
			   27,    2,   37,   37,   37,   37,   37,   37,   37,   37,
			   37,   37,   24,   25,   37,   37,   37,   28,   29,    1,
			    0,   39,    0,    0,   40,   32,    0,   35,   37,   37,
			   37,   37,   37,   37,   37,   37,   37,   37,   37,   37,
			   37,   37,   37,   39,   38,   36,   37,   37,   37,   37,
			    8,   37,   37,   37,   37,   37,   37,   37,   37,   37,
			   37,    4,    6,   37,   37,   10,   37,   16,   37,   37,
			   37,   37,   18,   33,   14,   37,   37,   15,   37,   37,

			   13,   12,   17,   37,   37,   37,   37,   11,    3,    5,
			   37,    9,   37,    7,    0, yy_Dummy>>)
		end

feature {NONE} -- Constants

	yyJam_base: INTEGER = 157
			-- Position in `yy_nxt'/`yy_chk' tables
			-- where default jam table starts

	yyJam_state: INTEGER = 114
			-- State id corresponding to jam state

	yyTemplate_mark: INTEGER = 115
			-- Mark between normal states and templates

	yyNull_equiv_class: INTEGER = 1
			-- Equivalence code for NULL character

	yyReject_used: BOOLEAN = false
			-- Is `reject' called?

	yyVariable_trail_context: BOOLEAN = false
			-- Is there a regular expression with
			-- both leading and trailing parts having
			-- variable length?

	yyReject_or_variable_trail_context: BOOLEAN = false
			-- Is `reject' called or is there a
			-- regular expression with both leading
			-- and trailing parts having variable length?

	yyNb_rules: INTEGER = 42
			-- Number of rules

	yyEnd_of_buffer: INTEGER = 43
			-- End of buffer rule code

	yyLine_used: BOOLEAN = true
			-- Are line and column numbers used?

	yyPosition_used: BOOLEAN = false
			-- Is `position' used?

	INITIAL: INTEGER = 0
			-- Start condition codes

feature -- User-defined features



feature {NONE} -- Initialization

	make 
		do
			make_compressed_scanner_skeleton
		end

feature -- reset

	reset 
		do
			reset_compressed_scanner_skeleton
		end

end


