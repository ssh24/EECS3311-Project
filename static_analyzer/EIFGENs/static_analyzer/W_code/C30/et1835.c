/*
 * Code for class ETF_EVT_TOKENS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1835_21749(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1835_21750(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1835_21751(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1835_21752(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1835_21753(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1835_21754(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1835_21755(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1835_21756(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1835_21757(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1835_21758(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1835_21759(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1835_21760(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1835_21761(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1835_21762(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1835_21763(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1835_21764(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1835_21765(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1835_21766(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1835_21767(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1835_21768(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1835_21769(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1835_21770(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1835_21771(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1835_21772(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1835_21773(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1835_21774(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1835_21775(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1835_21776(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1835_21777(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1835_21778(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1835_21779(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1835_21780(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1835_21781(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1835_21782(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1835_21783(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1835_21784(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1835_21785(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1835_21786(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1835_21787(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1835_21788(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1835_21789(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1835_21790(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1835_21791(EIF_REFERENCE);
extern void EIF_Minit1835(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ETF_EVT_TOKENS}.last_detachable_any_value */
EIF_TYPED_VALUE F1835_21749 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(17942,Dtype(Current)));
	return r;
}


/* {ETF_EVT_TOKENS}.last_integer_value */
EIF_TYPED_VALUE F1835_21750 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(17943,Dtype(Current)));
	return r;
}


/* {ETF_EVT_TOKENS}.last_real_value */
EIF_TYPED_VALUE F1835_21751 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL32;
	r.it_r4 = *(EIF_REAL_32 *)(Current + RTWA(17944,Dtype(Current)));
	return r;
}


/* {ETF_EVT_TOKENS}.last_string_value */
EIF_TYPED_VALUE F1835_21752 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(17945,Dtype(Current)));
	return r;
}


/* {ETF_EVT_TOKENS}.token_name */
EIF_TYPED_VALUE F1835_21753 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "token_name";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1834, Current, 0, 1, 26949);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1834, Current, 26949);
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (arg1) {
		case 0L:
			RTHOOK(2);
			RTDBGAL(Current, 0, 0xF80000DB, 0,0); /* Result */
			
			Result = RTMS_EX_H("EOF token",9,451139182);
			break;
		case -1L:
			RTHOOK(3);
			RTDBGAL(Current, 0, 0xF80000DB, 0,0); /* Result */
			
			Result = RTMS_EX_H("Error token",11,1176850798);
			break;
		case 258L:
			RTHOOK(4);
			RTDBGAL(Current, 0, 0xF80000DB, 0,0); /* Result */
			
			Result = RTMS_EX_H("NUMBER",6,1450195794);
			break;
		case 259L:
			RTHOOK(5);
			RTDBGAL(Current, 0, 0xF80000DB, 0,0); /* Result */
			
			Result = RTMS_EX_H("REAL",4,1380270412);
			break;
		case 260L:
			RTHOOK(6);
			RTDBGAL(Current, 0, 0xF80000DB, 0,0); /* Result */
			
			Result = RTMS_EX_H("IDENT",5,1145953364);
			break;
		case 261L:
			RTHOOK(7);
			RTDBGAL(Current, 0, 0xF80000DB, 0,0); /* Result */
			
			Result = RTMS_EX_H("CHAR_LIT",8,1474326612);
			break;
		case 262L:
			RTHOOK(8);
			RTDBGAL(Current, 0, 0xF80000DB, 0,0); /* Result */
			
			Result = RTMS_EX_H("STR_LIT",7,590287188);
			break;
		case 263L:
			RTHOOK(9);
			RTDBGAL(Current, 0, 0xF80000DB, 0,0); /* Result */
			
			Result = RTMS_EX_H("TK_SYSTEM",9,661771853);
			break;
		case 264L:
			RTHOOK(10);
			RTDBGAL(Current, 0, 0xF80000DB, 0,0); /* Result */
			
			Result = RTMS_EX_H("TK_BOOL",7,589667660);
			break;
		case 265L:
			RTHOOK(11);
			RTDBGAL(Current, 0, 0xF80000DB, 0,0); /* Result */
			
			Result = RTMS_EX_H("TK_BOOLEAN",10,1789796174);
			break;
		case 266L:
			RTHOOK(12);
			RTDBGAL(Current, 0, 0xF80000DB, 0,0); /* Result */
			
			Result = RTMS_EX_H("TK_CHAR",7,605982546);
			break;
		case 267L:
			RTHOOK(13);
			RTDBGAL(Current, 0, 0xF80000DB, 0,0); /* Result */
			
			Result = RTMS_EX_H("TK_CHARACTER",12,234055762);
			break;
		case 268L:
			RTHOOK(14);
			RTDBGAL(Current, 0, 0xF80000DB, 0,0); /* Result */
			
			Result = RTMS_EX_H("TK_INT",6,1764366420);
			break;
		case 269L:
			RTHOOK(15);
			RTDBGAL(Current, 0, 0xF80000DB, 0,0); /* Result */
			
			Result = RTMS_EX_H("TK_INTEGER",10,898815826);
			break;
		case 270L:
			RTHOOK(16);
			RTDBGAL(Current, 0, 0xF80000DB, 0,0); /* Result */
			
			Result = RTMS_EX_H("TK_REAL",7,857444172);
			break;
		case 271L:
			RTHOOK(17);
			RTDBGAL(Current, 0, 0xF80000DB, 0,0); /* Result */
			
			Result = RTMS_EX_H("TK_STR",6,1765023314);
			break;
		case 272L:
			RTHOOK(18);
			RTDBGAL(Current, 0, 0xF80000DB, 0,0); /* Result */
			
			Result = RTMS_EX_H("TK_VALUE",8,396412741);
			break;
		case 273L:
			RTHOOK(19);
			RTDBGAL(Current, 0, 0xF80000DB, 0,0); /* Result */
			
			Result = RTMS_EX_H("TK_TUPLE",8,732201541);
			break;
		case 274L:
			RTHOOK(20);
			RTDBGAL(Current, 0, 0xF80000DB, 0,0); /* Result */
			
			Result = RTMS_EX_H("TK_ARRAY",8,681852249);
			break;
		case 275L:
			RTHOOK(21);
			RTDBGAL(Current, 0, 0xF80000DB, 0,0); /* Result */
			
			Result = RTMS_EX_H("TK_TRUE",7,891855685);
			break;
		case 276L:
			RTHOOK(22);
			RTDBGAL(Current, 0, 0xF80000DB, 0,0); /* Result */
			
			Result = RTMS_EX_H("TK_FALSE",8,396289349);
			break;
		case 277L:
			RTHOOK(23);
			RTDBGAL(Current, 0, 0xF80000DB, 0,0); /* Result */
			
			Result = RTMS_EX_H("TK_TRUE_LOWER",13,1400247122);
			break;
		case 278L:
			RTHOOK(24);
			RTDBGAL(Current, 0, 0xF80000DB, 0,0); /* Result */
			
			Result = RTMS_EX_H("TK_FALSE_LOWER",14,2066344786);
			break;
		case 279L:
			RTHOOK(25);
			RTDBGAL(Current, 0, 0xF80000DB, 0,0); /* Result */
			
			Result = RTMS_EX_H("TK_COMMA",8,631211329);
			break;
		case 280L:
			RTHOOK(26);
			RTDBGAL(Current, 0, 0xF80000DB, 0,0); /* Result */
			
			Result = RTMS_EX_H("TK_COLON",8,631146318);
			break;
		case 281L:
			RTHOOK(27);
			RTDBGAL(Current, 0, 0xF80000DB, 0,0); /* Result */
			
			Result = RTMS_EX_H("TK_SEMI_COLON",13,429495630);
			break;
		case 282L:
			RTHOOK(28);
			RTDBGAL(Current, 0, 0xF80000DB, 0,0); /* Result */
			
			Result = RTMS_EX_H("TK_LPAREN",9,345819214);
			break;
		case 283L:
			RTHOOK(29);
			RTDBGAL(Current, 0, 0xF80000DB, 0,0); /* Result */
			
			Result = RTMS_EX_H("TK_RPAREN",9,357615694);
			break;
		case 284L:
			RTHOOK(30);
			RTDBGAL(Current, 0, 0xF80000DB, 0,0); /* Result */
			
			Result = RTMS_EX_H("TK_LSBRAC",9,362618435);
			break;
		case 285L:
			RTHOOK(31);
			RTDBGAL(Current, 0, 0xF80000DB, 0,0); /* Result */
			
			Result = RTMS_EX_H("TK_RSBRAC",9,374414915);
			break;
		case 286L:
			RTHOOK(32);
			RTDBGAL(Current, 0, 0xF80000DB, 0,0); /* Result */
			
			Result = RTMS_EX_H("TK_LABRAC",9,362480195);
			break;
		case 287L:
			RTHOOK(33);
			RTDBGAL(Current, 0, 0xF80000DB, 0,0); /* Result */
			
			Result = RTMS_EX_H("TK_RABRAC",9,374276675);
			break;
		case 288L:
			RTHOOK(34);
			RTDBGAL(Current, 0, 0xF80000DB, 0,0); /* Result */
			
			Result = RTMS_EX_H("TK_LCBRAC",9,362495555);
			break;
		case 289L:
			RTHOOK(35);
			RTDBGAL(Current, 0, 0xF80000DB, 0,0); /* Result */
			
			Result = RTMS_EX_H("TK_RCBRAC",9,374292035);
			break;
		case 290L:
			RTHOOK(36);
			RTDBGAL(Current, 0, 0xF80000DB, 0,0); /* Result */
			
			Result = RTMS_EX_H("TK_DQUOTE",9,665449797);
			break;
		case 291L:
			RTHOOK(37);
			RTDBGAL(Current, 0, 0xF80000DB, 0,0); /* Result */
			
			Result = RTMS_EX_H("TK_MINUS",8,530692435);
			break;
		case 292L:
			RTHOOK(38);
			RTDBGAL(Current, 0, 0xF80000DB, 0,0); /* Result */
			
			Result = RTMS_EX_H("TK_UPTO",7,908501583);
			break;
		case 293L:
			RTHOOK(39);
			RTDBGAL(Current, 0, 0xF80000DB, 0,0); /* Result */
			
			Result = RTMS_EX_H("TK_TYPE",7,892313157);
			break;
		case 294L:
			RTHOOK(40);
			RTDBGAL(Current, 0, 0xF80000DB, 0,0); /* Result */
			
			Result = RTMS_EX_H("TK_EQ",5,1265179985);
			break;
		case 295L:
			RTHOOK(41);
			RTDBGAL(Current, 0, 0xF80000DB, 0,0); /* Result */
			
			Result = RTMS_EX_H("EOL",3,4542284);
			break;
		default:
			RTHOOK(42);
			RTDBGAL(Current, 0, 0xF80000DB, 0,0); /* Result */
			
			ui4_1 = arg1;
			Result = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(17941, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			break;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(43);
		RTCT("token_name_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(44);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ui4_1
#undef arg1
}

/* {ETF_EVT_TOKENS}.number */
EIF_TYPED_VALUE F1835_21754 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 258L);
	return r;
}

/* {ETF_EVT_TOKENS}.real */
EIF_TYPED_VALUE F1835_21755 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 259L);
	return r;
}

/* {ETF_EVT_TOKENS}.ident */
EIF_TYPED_VALUE F1835_21756 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 260L);
	return r;
}

/* {ETF_EVT_TOKENS}.char_lit */
EIF_TYPED_VALUE F1835_21757 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 261L);
	return r;
}

/* {ETF_EVT_TOKENS}.str_lit */
EIF_TYPED_VALUE F1835_21758 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 262L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_system */
EIF_TYPED_VALUE F1835_21759 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 263L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_bool */
EIF_TYPED_VALUE F1835_21760 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 264L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_boolean */
EIF_TYPED_VALUE F1835_21761 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 265L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_char */
EIF_TYPED_VALUE F1835_21762 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 266L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_character */
EIF_TYPED_VALUE F1835_21763 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 267L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_int */
EIF_TYPED_VALUE F1835_21764 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 268L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_integer */
EIF_TYPED_VALUE F1835_21765 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 269L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_real */
EIF_TYPED_VALUE F1835_21766 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 270L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_str */
EIF_TYPED_VALUE F1835_21767 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 271L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_value */
EIF_TYPED_VALUE F1835_21768 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 272L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_tuple */
EIF_TYPED_VALUE F1835_21769 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 273L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_array */
EIF_TYPED_VALUE F1835_21770 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 274L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_true */
EIF_TYPED_VALUE F1835_21771 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 275L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_false */
EIF_TYPED_VALUE F1835_21772 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 276L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_true_lower */
EIF_TYPED_VALUE F1835_21773 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 277L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_false_lower */
EIF_TYPED_VALUE F1835_21774 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 278L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_comma */
EIF_TYPED_VALUE F1835_21775 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 279L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_colon */
EIF_TYPED_VALUE F1835_21776 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 280L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_semi_colon */
EIF_TYPED_VALUE F1835_21777 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 281L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_lparen */
EIF_TYPED_VALUE F1835_21778 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 282L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_rparen */
EIF_TYPED_VALUE F1835_21779 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 283L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_lsbrac */
EIF_TYPED_VALUE F1835_21780 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 284L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_rsbrac */
EIF_TYPED_VALUE F1835_21781 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 285L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_labrac */
EIF_TYPED_VALUE F1835_21782 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 286L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_rabrac */
EIF_TYPED_VALUE F1835_21783 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 287L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_lcbrac */
EIF_TYPED_VALUE F1835_21784 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 288L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_rcbrac */
EIF_TYPED_VALUE F1835_21785 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 289L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_dquote */
EIF_TYPED_VALUE F1835_21786 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 290L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_minus */
EIF_TYPED_VALUE F1835_21787 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 291L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_upto */
EIF_TYPED_VALUE F1835_21788 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 292L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_type */
EIF_TYPED_VALUE F1835_21789 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 293L);
	return r;
}

/* {ETF_EVT_TOKENS}.tk_eq */
EIF_TYPED_VALUE F1835_21790 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 294L);
	return r;
}

/* {ETF_EVT_TOKENS}.eol */
EIF_TYPED_VALUE F1835_21791 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 295L);
	return r;
}

void EIF_Minit1835 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
