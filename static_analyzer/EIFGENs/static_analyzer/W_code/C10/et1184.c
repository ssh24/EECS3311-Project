/*
 * Code for class ETF_TYPE_CONSTRAINTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1184_12883(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1184_12884(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1184_12885(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1184_12886(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit1184(void);

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

/* {ETF_TYPE_CONSTRAINTS}.enum_items */
EIF_TYPED_VALUE F1184_12883 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "enum_items";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1183, Current, 0, 0, 18379);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1183, Current, 18379);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000351, 0,0); /* Result */
	
	{
		static EIF_TYPE_INDEX typarr0[] = {849,205,0xFF11,219,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3300, Dtype(tr1)))(tr1, ui4_1x);
	
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
}

/* {ETF_TYPE_CONSTRAINTS}.enum_items_inverse */
EIF_TYPED_VALUE F1184_12884 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "enum_items_inverse";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1183, Current, 0, 0, 18380);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1183, Current, 18380);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF800016E, 0,0); /* Result */
	
	{
		static EIF_TYPE_INDEX typarr0[] = {366,0xFF11,219,205,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3300, Dtype(tr1)))(tr1, ui4_1x);
	
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
}

/* {ETF_TYPE_CONSTRAINTS}.evt_param_types */
EIF_TYPED_VALUE F1184_12885 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "evt_param_types";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc17 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc18 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc19 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc20 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc21 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc22 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc23 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc24 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc25 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(31);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc1);
	RTLR(4,ur1);
	RTLR(5,ur2);
	RTLR(6,loc2);
	RTLR(7,loc3);
	RTLR(8,loc4);
	RTLR(9,tr2);
	RTLR(10,loc5);
	RTLR(11,loc6);
	RTLR(12,loc7);
	RTLR(13,loc8);
	RTLR(14,loc9);
	RTLR(15,loc10);
	RTLR(16,loc11);
	RTLR(17,loc12);
	RTLR(18,loc13);
	RTLR(19,loc14);
	RTLR(20,loc15);
	RTLR(21,loc16);
	RTLR(22,loc17);
	RTLR(23,loc18);
	RTLR(24,loc19);
	RTLR(25,loc20);
	RTLR(26,loc21);
	RTLR(27,loc22);
	RTLR(28,loc23);
	RTLR(29,loc24);
	RTLR(30,loc25);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_REF, &loc11);
	RTLU(SK_REF, &loc12);
	RTLU(SK_REF, &loc13);
	RTLU(SK_REF, &loc14);
	RTLU(SK_REF, &loc15);
	RTLU(SK_REF, &loc16);
	RTLU(SK_REF, &loc17);
	RTLU(SK_REF, &loc18);
	RTLU(SK_REF, &loc19);
	RTLU(SK_REF, &loc20);
	RTLU(SK_REF, &loc21);
	RTLU(SK_REF, &loc22);
	RTLU(SK_REF, &loc23);
	RTLU(SK_REF, &loc24);
	RTLU(SK_REF, &loc25);
	
	RTEAA(l_feature_name, 1183, Current, 25, 0, 18381);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1183, Current, 18381);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF800013E, 0,0); /* Result */
	
	{
		static EIF_TYPE_INDEX typarr0[] = {318,0xFF11,318,0xFF11,1171,0xFF11,219,0xFF11,219,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3300, Dtype(tr1)))(tr1, ui4_1x);
	
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1697, "compare_objects", Result))(Result);
	
	RTHOOK(3);
	RTDBGAL(Current, 1, 0xF800013E, 0, 0); /* loc1 */
	
	{
		static EIF_TYPE_INDEX typarr0[] = {318,0xFF11,1171,0xFF11,219,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3300, Dtype(tr1)))(tr1, ui4_1x);
	
	RTNHOOK(3,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1697, "compare_objects", loc1))(loc1);
	
	RTHOOK(5);
	ur1 = RTCCL(loc1);
	tr1 = RTMS_EX_H("type_check",10,1152524907);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3330, "extend", Result))(Result, ur1x, ur2x);
	
	RTHOOK(6);
	RTDBGAL(Current, 2, 0xF800013E, 0, 0); /* loc2 */
	
	{
		static EIF_TYPE_INDEX typarr0[] = {318,0xFF11,1171,0xFF11,219,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3300, Dtype(tr1)))(tr1, ui4_1x);
	
	RTNHOOK(6,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1697, "compare_objects", loc2))(loc2);
	
	RTHOOK(8);
	ur1 = RTCCL(loc2);
	tr1 = RTMS_EX_H("evaluate",8,1446040677);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3330, "extend", Result))(Result, ur1x, ur2x);
	
	RTHOOK(9);
	RTDBGAL(Current, 3, 0xF800013E, 0, 0); /* loc3 */
	
	{
		static EIF_TYPE_INDEX typarr0[] = {318,0xFF11,1171,0xFF11,219,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3300, Dtype(tr1)))(tr1, ui4_1x);
	
	RTNHOOK(9,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(10);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1697, "compare_objects", loc3))(loc3);
	
	RTHOOK(11);
	ur1 = RTCCL(loc3);
	tr1 = RTMS_EX_H("reset",5,1702936948);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3330, "extend", Result))(Result, ur1x, ur2x);
	
	RTHOOK(12);
	RTDBGAL(Current, 4, 0xF800013E, 0, 0); /* loc4 */
	
	{
		static EIF_TYPE_INDEX typarr0[] = {318,0xFF11,1171,0xFF11,219,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3300, Dtype(tr1)))(tr1, ui4_1x);
	
	RTNHOOK(12,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(13);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1697, "compare_objects", loc4))(loc4);
	
	RTHOOK(14);
	tr1 = RTLN(1175);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	
	RTNHOOK(14,1);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("c",1,99);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3330, "extend", loc4))(loc4, ur1x, ur2x);
	
	RTHOOK(15);
	ur1 = RTCCL(loc4);
	tr1 = RTMS_EX_H("add_boolean_constant",20,1025716596);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3330, "extend", Result))(Result, ur1x, ur2x);
	
	RTHOOK(16);
	RTDBGAL(Current, 5, 0xF800013E, 0, 0); /* loc5 */
	
	{
		static EIF_TYPE_INDEX typarr0[] = {318,0xFF11,1171,0xFF11,219,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3300, Dtype(tr1)))(tr1, ui4_1x);
	
	RTNHOOK(16,1);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(17);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1697, "compare_objects", loc5))(loc5);
	
	RTHOOK(18);
	tr1 = RTLN(1176);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	
	RTNHOOK(18,1);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("c",1,99);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3330, "extend", loc5))(loc5, ur1x, ur2x);
	
	RTHOOK(19);
	ur1 = RTCCL(loc5);
	tr1 = RTMS_EX_H("add_integer_constant",20,893564788);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3330, "extend", Result))(Result, ur1x, ur2x);
	
	RTHOOK(20);
	RTDBGAL(Current, 6, 0xF800013E, 0, 0); /* loc6 */
	
	{
		static EIF_TYPE_INDEX typarr0[] = {318,0xFF11,1171,0xFF11,219,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3300, Dtype(tr1)))(tr1, ui4_1x);
	
	RTNHOOK(20,1);
	loc6 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(21);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1697, "compare_objects", loc6))(loc6);
	
	RTHOOK(22);
	ur1 = RTCCL(loc6);
	tr1 = RTMS_EX_H("add_addition",12,928585582);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3330, "extend", Result))(Result, ur1x, ur2x);
	
	RTHOOK(23);
	RTDBGAL(Current, 7, 0xF800013E, 0, 0); /* loc7 */
	
	{
		static EIF_TYPE_INDEX typarr0[] = {318,0xFF11,1171,0xFF11,219,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3300, Dtype(tr1)))(tr1, ui4_1x);
	
	RTNHOOK(23,1);
	loc7 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(24);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1697, "compare_objects", loc7))(loc7);
	
	RTHOOK(25);
	ur1 = RTCCL(loc7);
	tr1 = RTMS_EX_H("add_subtraction",15,2021233006);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3330, "extend", Result))(Result, ur1x, ur2x);
	
	RTHOOK(26);
	RTDBGAL(Current, 8, 0xF800013E, 0, 0); /* loc8 */
	
	{
		static EIF_TYPE_INDEX typarr0[] = {318,0xFF11,1171,0xFF11,219,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3300, Dtype(tr1)))(tr1, ui4_1x);
	
	RTNHOOK(26,1);
	loc8 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(27);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1697, "compare_objects", loc8))(loc8);
	
	RTHOOK(28);
	ur1 = RTCCL(loc8);
	tr1 = RTMS_EX_H("add_multiplication",18,760502894);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3330, "extend", Result))(Result, ur1x, ur2x);
	
	RTHOOK(29);
	RTDBGAL(Current, 9, 0xF800013E, 0, 0); /* loc9 */
	
	{
		static EIF_TYPE_INDEX typarr0[] = {318,0xFF11,1171,0xFF11,219,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3300, Dtype(tr1)))(tr1, ui4_1x);
	
	RTNHOOK(29,1);
	loc9 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(30);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1697, "compare_objects", loc9))(loc9);
	
	RTHOOK(31);
	ur1 = RTCCL(loc9);
	tr1 = RTMS_EX_H("add_division",12,1316991598);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3330, "extend", Result))(Result, ur1x, ur2x);
	
	RTHOOK(32);
	RTDBGAL(Current, 10, 0xF800013E, 0, 0); /* loc10 */
	
	{
		static EIF_TYPE_INDEX typarr0[] = {318,0xFF11,1171,0xFF11,219,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3300, Dtype(tr1)))(tr1, ui4_1x);
	
	RTNHOOK(32,1);
	loc10 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(33);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1697, "compare_objects", loc10))(loc10);
	
	RTHOOK(34);
	ur1 = RTCCL(loc10);
	tr1 = RTMS_EX_H("add_conjunction",15,1601340014);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3330, "extend", Result))(Result, ur1x, ur2x);
	
	RTHOOK(35);
	RTDBGAL(Current, 11, 0xF800013E, 0, 0); /* loc11 */
	
	{
		static EIF_TYPE_INDEX typarr0[] = {318,0xFF11,1171,0xFF11,219,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3300, Dtype(tr1)))(tr1, ui4_1x);
	
	RTNHOOK(35,1);
	loc11 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(36);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1697, "compare_objects", loc11))(loc11);
	
	RTHOOK(37);
	ur1 = RTCCL(loc11);
	tr1 = RTMS_EX_H("add_disjunction",15,1500349550);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3330, "extend", Result))(Result, ur1x, ur2x);
	
	RTHOOK(38);
	RTDBGAL(Current, 12, 0xF800013E, 0, 0); /* loc12 */
	
	{
		static EIF_TYPE_INDEX typarr0[] = {318,0xFF11,1171,0xFF11,219,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3300, Dtype(tr1)))(tr1, ui4_1x);
	
	RTNHOOK(38,1);
	loc12 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(39);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1697, "compare_objects", loc12))(loc12);
	
	RTHOOK(40);
	ur1 = RTCCL(loc12);
	tr1 = RTMS_EX_H("add_implication",15,2007965550);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3330, "extend", Result))(Result, ur1x, ur2x);
	
	RTHOOK(41);
	RTDBGAL(Current, 13, 0xF800013E, 0, 0); /* loc13 */
	
	{
		static EIF_TYPE_INDEX typarr0[] = {318,0xFF11,1171,0xFF11,219,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3300, Dtype(tr1)))(tr1, ui4_1x);
	
	RTNHOOK(41,1);
	loc13 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(42);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1697, "compare_objects", loc13))(loc13);
	
	RTHOOK(43);
	ur1 = RTCCL(loc13);
	tr1 = RTMS_EX_H("add_equality",12,929327481);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3330, "extend", Result))(Result, ur1x, ur2x);
	
	RTHOOK(44);
	RTDBGAL(Current, 14, 0xF800013E, 0, 0); /* loc14 */
	
	{
		static EIF_TYPE_INDEX typarr0[] = {318,0xFF11,1171,0xFF11,219,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3300, Dtype(tr1)))(tr1, ui4_1x);
	
	RTNHOOK(44,1);
	loc14 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(45);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1697, "compare_objects", loc14))(loc14);
	
	RTHOOK(46);
	ur1 = RTCCL(loc14);
	tr1 = RTMS_EX_H("add_greater_than",16,1421299566);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3330, "extend", Result))(Result, ur1x, ur2x);
	
	RTHOOK(47);
	RTDBGAL(Current, 15, 0xF800013E, 0, 0); /* loc15 */
	
	{
		static EIF_TYPE_INDEX typarr0[] = {318,0xFF11,1171,0xFF11,219,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3300, Dtype(tr1)))(tr1, ui4_1x);
	
	RTNHOOK(47,1);
	loc15 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(48);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1697, "compare_objects", loc15))(loc15);
	
	RTHOOK(49);
	ur1 = RTCCL(loc15);
	tr1 = RTMS_EX_H("add_less_than",13,1307581806);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3330, "extend", Result))(Result, ur1x, ur2x);
	
	RTHOOK(50);
	RTDBGAL(Current, 16, 0xF800013E, 0, 0); /* loc16 */
	
	{
		static EIF_TYPE_INDEX typarr0[] = {318,0xFF11,1171,0xFF11,219,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3300, Dtype(tr1)))(tr1, ui4_1x);
	
	RTNHOOK(50,1);
	loc16 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(51);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1697, "compare_objects", loc16))(loc16);
	
	RTHOOK(52);
	ur1 = RTCCL(loc16);
	tr1 = RTMS_EX_H("add_union",9,134105710);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3330, "extend", Result))(Result, ur1x, ur2x);
	
	RTHOOK(53);
	RTDBGAL(Current, 17, 0xF800013E, 0, 0); /* loc17 */
	
	{
		static EIF_TYPE_INDEX typarr0[] = {318,0xFF11,1171,0xFF11,219,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3300, Dtype(tr1)))(tr1, ui4_1x);
	
	RTNHOOK(53,1);
	loc17 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(54);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1697, "compare_objects", loc17))(loc17);
	
	RTHOOK(55);
	ur1 = RTCCL(loc17);
	tr1 = RTMS_EX_H("add_intersection",16,311193198);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3330, "extend", Result))(Result, ur1x, ur2x);
	
	RTHOOK(56);
	RTDBGAL(Current, 18, 0xF800013E, 0, 0); /* loc18 */
	
	{
		static EIF_TYPE_INDEX typarr0[] = {318,0xFF11,1171,0xFF11,219,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3300, Dtype(tr1)))(tr1, ui4_1x);
	
	RTNHOOK(56,1);
	loc18 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(57);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1697, "compare_objects", loc18))(loc18);
	
	RTHOOK(58);
	ur1 = RTCCL(loc18);
	tr1 = RTMS_EX_H("add_difference",14,1439044453);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3330, "extend", Result))(Result, ur1x, ur2x);
	
	RTHOOK(59);
	RTDBGAL(Current, 19, 0xF800013E, 0, 0); /* loc19 */
	
	{
		static EIF_TYPE_INDEX typarr0[] = {318,0xFF11,1171,0xFF11,219,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3300, Dtype(tr1)))(tr1, ui4_1x);
	
	RTNHOOK(59,1);
	loc19 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(60);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1697, "compare_objects", loc19))(loc19);
	
	RTHOOK(61);
	ur1 = RTCCL(loc19);
	tr1 = RTMS_EX_H("add_negative",12,1440735845);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3330, "extend", Result))(Result, ur1x, ur2x);
	
	RTHOOK(62);
	RTDBGAL(Current, 20, 0xF800013E, 0, 0); /* loc20 */
	
	{
		static EIF_TYPE_INDEX typarr0[] = {318,0xFF11,1171,0xFF11,219,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3300, Dtype(tr1)))(tr1, ui4_1x);
	
	RTNHOOK(62,1);
	loc20 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(63);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1697, "compare_objects", loc20))(loc20);
	
	RTHOOK(64);
	ur1 = RTCCL(loc20);
	tr1 = RTMS_EX_H("add_negation",12,1440734062);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3330, "extend", Result))(Result, ur1x, ur2x);
	
	RTHOOK(65);
	RTDBGAL(Current, 21, 0xF800013E, 0, 0); /* loc21 */
	
	{
		static EIF_TYPE_INDEX typarr0[] = {318,0xFF11,1171,0xFF11,219,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3300, Dtype(tr1)))(tr1, ui4_1x);
	
	RTNHOOK(65,1);
	loc21 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(66);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1697, "compare_objects", loc21))(loc21);
	
	RTHOOK(67);
	ur1 = RTCCL(loc21);
	tr1 = RTMS_EX_H("add_sum",7,1228441197);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3330, "extend", Result))(Result, ur1x, ur2x);
	
	RTHOOK(68);
	RTDBGAL(Current, 22, 0xF800013E, 0, 0); /* loc22 */
	
	{
		static EIF_TYPE_INDEX typarr0[] = {318,0xFF11,1171,0xFF11,219,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3300, Dtype(tr1)))(tr1, ui4_1x);
	
	RTNHOOK(68,1);
	loc22 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(69);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1697, "compare_objects", loc22))(loc22);
	
	RTHOOK(70);
	ur1 = RTCCL(loc22);
	tr1 = RTMS_EX_H("add_generalized_and",19,408775780);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3330, "extend", Result))(Result, ur1x, ur2x);
	
	RTHOOK(71);
	RTDBGAL(Current, 23, 0xF800013E, 0, 0); /* loc23 */
	
	{
		static EIF_TYPE_INDEX typarr0[] = {318,0xFF11,1171,0xFF11,219,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3300, Dtype(tr1)))(tr1, ui4_1x);
	
	RTNHOOK(71,1);
	loc23 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(72);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1697, "compare_objects", loc23))(loc23);
	
	RTHOOK(73);
	ur1 = RTCCL(loc23);
	tr1 = RTMS_EX_H("add_generalized_or",18,286812530);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3330, "extend", Result))(Result, ur1x, ur2x);
	
	RTHOOK(74);
	RTDBGAL(Current, 24, 0xF800013E, 0, 0); /* loc24 */
	
	{
		static EIF_TYPE_INDEX typarr0[] = {318,0xFF11,1171,0xFF11,219,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3300, Dtype(tr1)))(tr1, ui4_1x);
	
	RTNHOOK(74,1);
	loc24 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(75);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1697, "compare_objects", loc24))(loc24);
	
	RTHOOK(76);
	ur1 = RTCCL(loc24);
	tr1 = RTMS_EX_H("start_set_enumeration",21,833881198);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3330, "extend", Result))(Result, ur1x, ur2x);
	
	RTHOOK(77);
	RTDBGAL(Current, 25, 0xF800013E, 0, 0); /* loc25 */
	
	{
		static EIF_TYPE_INDEX typarr0[] = {318,0xFF11,1171,0xFF11,219,0xFFFF};
		EIF_TYPE_INDEX typres0;
		static EIF_TYPE_INDEX typcache0 = INVALID_DTYPE;
		
		typres0 = (typcache0 != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3300, Dtype(tr1)))(tr1, ui4_1x);
	
	RTNHOOK(77,1);
	loc25 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(78);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1697, "compare_objects", loc25))(loc25);
	
	RTHOOK(79);
	ur1 = RTCCL(loc25);
	tr1 = RTMS_EX_H("end_set_enumeration",19,1104385902);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3330, "extend", Result))(Result, ur1x, ur2x);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(80);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(27);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ur2
#undef ui4_1
}

/* {ETF_TYPE_CONSTRAINTS}.comment */
EIF_TYPED_VALUE F1184_12886 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "comment";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1183, Current, 0, 1, 18382);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1183, Current, 18382);
	RTCC(arg1, 1183, l_feature_name, 1, eif_attached_type(219));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

void EIF_Minit1184 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
