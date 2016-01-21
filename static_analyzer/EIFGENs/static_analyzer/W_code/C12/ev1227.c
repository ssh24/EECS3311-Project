/*
 * Code for class EVALUATOR
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1227_13262(EIF_REFERENCE);
extern void F1227_13263(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1227_13264(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1227_13265(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1227_13266(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1227_13267(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1227_13268(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1227_13269(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1227_13270(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1227_13271(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1227_13272(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1227_13273(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1227_13274(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1227_13275(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1227_13276(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1227_13277(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1227_13278(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1227_13279(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1227_13280(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1227_13281(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1227_13282(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1227_13283(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1227_13284(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1227_13285(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1227_13286(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1227_13287(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1227_13288(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1227_13289(EIF_REFERENCE);
extern void EIF_Minit1227(void);

#ifdef __cplusplus
}
#endif

#include "eif_plug.h"
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EVALUATOR}.make */
void F1227_13262 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1226, Current, 0, 0, 18743);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1226, Current, 18743);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 11001, 0xF80007BD, 0); /* set */
	
	tr1 = RTLNSMART(eif_non_attached_type(RTWCT(11001, dtype, Dftype(Current))));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(14104, Dtype(tr1)))(tr1);
	
	RTNHOOK(1,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11001, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 11000, 0xF80000DB, 0); /* text */
	
	tr1 = RTLNSMART(eif_non_attached_type(RTWCT(11000, dtype, Dftype(Current))));
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4330, Dtype(tr1)))(tr1);
	
	RTNHOOK(2,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11000, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {EVALUATOR}.visit_current */
void F1227_13263 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "visit_current";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1226, Current, 0, 1, 18744);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1226, Current, 18744);
	RTCC(arg1, 1226, l_feature_name, 1, eif_attached_type(1261));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 10999, 0x04000000, 1); /* boolean_value */
	
	*(EIF_BOOLEAN *)(Current + RTWA(10999, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 11000, 0xF80000DB, 0); /* text */
	
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(10999, dtype));
	tr1 = (tb1 ? makestr ("True", 4) : makestr ("False", 5));
	
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11000, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef arg1
}

/* {EVALUATOR}.visit_nil */
void F1227_13264 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "visit_nil";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1226, Current, 0, 1, 18745);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1226, Current, 18745);
	RTCC(arg1, 1226, l_feature_name, 1, eif_attached_type(1262));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 10999, 0x04000000, 1); /* boolean_value */
	
	*(EIF_BOOLEAN *)(Current + RTWA(10999, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 11000, 0xF80000DB, 0); /* text */
	
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(10999, dtype));
	tr1 = (tb1 ? makestr ("True", 4) : makestr ("False", 5));
	
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11000, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef arg1
}

/* {EVALUATOR}.visit_integer */
void F1227_13265 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "visit_integer";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1226, Current, 0, 1, 18746);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1226, Current, 18746);
	RTCC(arg1, 1226, l_feature_name, 1, eif_attached_type(1287));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 10998, 0x10000000, 1); /* integer_value */
	
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(11703, "integer", arg1));
	
	*(EIF_INTEGER_32 *)(Current + RTWA(10998, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 11000, 0xF80000DB, 0); /* text */
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(10998, dtype));
	tr1 = c_outi(ti4_1);
	
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11000, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef arg1
}

/* {EVALUATOR}.visit_boolean */
void F1227_13266 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "visit_boolean";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1226, Current, 0, 1, 18747);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1226, Current, 18747);
	RTCC(arg1, 1226, l_feature_name, 1, eif_attached_type(1286));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 10999, 0x04000000, 1); /* boolean_value */
	
	tb1 = *(EIF_BOOLEAN *)(arg1 + RTVA(11701, "boolean", arg1));
	
	*(EIF_BOOLEAN *)(Current + RTWA(10999, dtype)) = (EIF_BOOLEAN) tb1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 11000, 0xF80000DB, 0); /* text */
	
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(10999, dtype));
	tr1 = (tb1 ? makestr ("True", 4) : makestr ("False", 5));
	
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11000, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef arg1
}

/* {EVALUATOR}.visit_add */
void F1227_13267 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "visit_add";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,ur1);
	RTLR(5,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1226, Current, 2, 1, 18748);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1226, Current, 18748);
	RTCC(arg1, 1226, l_feature_name, 1, eif_attached_type(1282));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF80004CA, 0, 0); /* loc1 */
	
	tr1 = RTLN(1226);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(10997, Dtype(tr1)))(tr1);
	
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 2, 0xF80004CA, 0, 0); /* loc2 */
	
	tr1 = RTLN(1226);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(10997, Dtype(tr1)))(tr1);
	
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11682, "left", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	RTNHOOK(3,1);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11666, "accept", tr1))(tr1, ur1x);
	
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11683, "right", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	RTNHOOK(4,1);
	ur1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11666, "accept", tr1))(tr1, ur1x);
	
	RTHOOK(5);
	RTDBGAA(Current, dtype, 10998, 0x10000000, 1); /* integer_value */
	
	ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(10998, "integer_value", loc1));
	
	ti4_2 = *(EIF_INTEGER_32 *)(loc2 + RTVA(10998, "integer_value", loc2));
	
	*(EIF_INTEGER_32 *)(Current + RTWA(10998, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ti4_2);
	RTHOOK(6);
	tb1 = '\01';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11000, "text", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	if (!RTEQ(tr1, RTMS_EX_H("Divisor is zero!",16,20098337))) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11000, "text", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		
		tb1 = RTEQ(tr1, RTMS_EX_H("Divisor is zero!",16,20098337));
	}
	if (tb1) {
		RTHOOK(7);
		RTDBGAA(Current, dtype, 11000, 0xF80000DB, 0); /* text */
		
		tr1 = RTMS_EX_H("Divisor is zero!",16,20098337);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(11000, dtype)) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(8);
		RTDBGAA(Current, dtype, 11000, 0xF80000DB, 0); /* text */
		
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(10998, dtype));
		tr1 = c_outi(ti4_1);
		
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(11000, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {EVALUATOR}.visit_subtract */
void F1227_13268 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "visit_subtract";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,ur1);
	RTLR(5,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1226, Current, 2, 1, 18749);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1226, Current, 18749);
	RTCC(arg1, 1226, l_feature_name, 1, eif_attached_type(1281));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF80004CA, 0, 0); /* loc1 */
	
	tr1 = RTLN(1226);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(10997, Dtype(tr1)))(tr1);
	
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 2, 0xF80004CA, 0, 0); /* loc2 */
	
	tr1 = RTLN(1226);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(10997, Dtype(tr1)))(tr1);
	
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11682, "left", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	RTNHOOK(3,1);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11666, "accept", tr1))(tr1, ur1x);
	
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11683, "right", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	RTNHOOK(4,1);
	ur1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11666, "accept", tr1))(tr1, ur1x);
	
	RTHOOK(5);
	RTDBGAA(Current, dtype, 10998, 0x10000000, 1); /* integer_value */
	
	ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(10998, "integer_value", loc1));
	
	ti4_2 = *(EIF_INTEGER_32 *)(loc2 + RTVA(10998, "integer_value", loc2));
	
	*(EIF_INTEGER_32 *)(Current + RTWA(10998, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 - ti4_2);
	RTHOOK(6);
	tb1 = '\01';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11000, "text", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	if (!RTEQ(tr1, RTMS_EX_H("Divisor is zero!",16,20098337))) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11000, "text", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		
		tb1 = RTEQ(tr1, RTMS_EX_H("Divisor is zero!",16,20098337));
	}
	if (tb1) {
		RTHOOK(7);
		RTDBGAA(Current, dtype, 11000, 0xF80000DB, 0); /* text */
		
		tr1 = RTMS_EX_H("Divisor is zero!",16,20098337);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(11000, dtype)) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(8);
		RTDBGAA(Current, dtype, 11000, 0xF80000DB, 0); /* text */
		
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(10998, dtype));
		tr1 = c_outi(ti4_1);
		
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(11000, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {EVALUATOR}.visit_multiply */
void F1227_13269 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "visit_multiply";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,ur1);
	RTLR(5,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1226, Current, 2, 1, 18750);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1226, Current, 18750);
	RTCC(arg1, 1226, l_feature_name, 1, eif_attached_type(1274));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF80004CA, 0, 0); /* loc1 */
	
	tr1 = RTLN(1226);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(10997, Dtype(tr1)))(tr1);
	
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 2, 0xF80004CA, 0, 0); /* loc2 */
	
	tr1 = RTLN(1226);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(10997, Dtype(tr1)))(tr1);
	
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11682, "left", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	RTNHOOK(3,1);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11666, "accept", tr1))(tr1, ur1x);
	
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11683, "right", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	RTNHOOK(4,1);
	ur1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11666, "accept", tr1))(tr1, ur1x);
	
	RTHOOK(5);
	RTDBGAA(Current, dtype, 10998, 0x10000000, 1); /* integer_value */
	
	ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(10998, "integer_value", loc1));
	
	ti4_2 = *(EIF_INTEGER_32 *)(loc2 + RTVA(10998, "integer_value", loc2));
	
	*(EIF_INTEGER_32 *)(Current + RTWA(10998, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 * ti4_2);
	RTHOOK(6);
	tb1 = '\01';
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11000, "text", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	if (!RTEQ(tr1, RTMS_EX_H("Divisor is zero!",16,20098337))) {
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11000, "text", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		
		tb1 = RTEQ(tr1, RTMS_EX_H("Divisor is zero!",16,20098337));
	}
	if (tb1) {
		RTHOOK(7);
		RTDBGAA(Current, dtype, 11000, 0xF80000DB, 0); /* text */
		
		tr1 = RTMS_EX_H("Divisor is zero!",16,20098337);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(11000, dtype)) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(8);
		RTDBGAA(Current, dtype, 11000, 0xF80000DB, 0); /* text */
		
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(10998, dtype));
		tr1 = c_outi(ti4_1);
		
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(11000, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {EVALUATOR}.visit_division */
void F1227_13270 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "visit_division";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,ur1);
	RTLR(5,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1226, Current, 2, 1, 18751);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1226, Current, 18751);
	RTCC(arg1, 1226, l_feature_name, 1, eif_attached_type(1284));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF80004CA, 0, 0); /* loc1 */
	
	tr1 = RTLN(1226);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(10997, Dtype(tr1)))(tr1);
	
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 2, 0xF80004CA, 0, 0); /* loc2 */
	
	tr1 = RTLN(1226);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(10997, Dtype(tr1)))(tr1);
	
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11682, "left", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	RTNHOOK(3,1);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11666, "accept", tr1))(tr1, ur1x);
	
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11683, "right", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	RTNHOOK(4,1);
	ur1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11666, "accept", tr1))(tr1, ur1x);
	
	RTHOOK(5);
	ti4_1 = *(EIF_INTEGER_32 *)(loc2 + RTVA(10998, "integer_value", loc2));
	
	if ((EIF_BOOLEAN) !(EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
		RTHOOK(6);
		RTDBGAA(Current, dtype, 10998, 0x10000000, 1); /* integer_value */
		
		ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(10998, "integer_value", loc1));
		
		ti4_2 = *(EIF_INTEGER_32 *)(loc2 + RTVA(10998, "integer_value", loc2));
		
		*(EIF_INTEGER_32 *)(Current + RTWA(10998, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 / ti4_2);
		RTHOOK(7);
		tb1 = '\01';
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11000, "text", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		
		if (!RTEQ(tr1, RTMS_EX_H("Divisor is zero!",16,20098337))) {
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11000, "text", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			
			tb1 = RTEQ(tr1, RTMS_EX_H("Divisor is zero!",16,20098337));
		}
		if (tb1) {
			RTHOOK(8);
			RTDBGAA(Current, dtype, 11000, 0xF80000DB, 0); /* text */
			
			tr1 = RTMS_EX_H("Divisor is zero!",16,20098337);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(11000, dtype)) = (EIF_REFERENCE) tr1;
		} else {
			RTHOOK(9);
			RTDBGAA(Current, dtype, 11000, 0xF80000DB, 0); /* text */
			
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(10998, dtype));
			tr1 = c_outi(ti4_1);
			
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(11000, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
		}
	} else {
		RTHOOK(10);
		RTDBGAA(Current, dtype, 11000, 0xF80000DB, 0); /* text */
		
		tr1 = RTMS_EX_H("Divisor is zero!",16,20098337);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(11000, dtype)) = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {EVALUATOR}.visit_or */
void F1227_13271 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "visit_or";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,ur1);
	RTLR(5,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1226, Current, 2, 1, 18752);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1226, Current, 18752);
	RTCC(arg1, 1226, l_feature_name, 1, eif_attached_type(1275));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF80004CA, 0, 0); /* loc1 */
	
	tr1 = RTLN(1226);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(10997, Dtype(tr1)))(tr1);
	
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 2, 0xF80004CA, 0, 0); /* loc2 */
	
	tr1 = RTLN(1226);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(10997, Dtype(tr1)))(tr1);
	
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11682, "left", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	RTNHOOK(3,1);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11666, "accept", tr1))(tr1, ur1x);
	
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11683, "right", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	RTNHOOK(4,1);
	ur1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11666, "accept", tr1))(tr1, ur1x);
	
	RTHOOK(5);
	RTDBGAA(Current, dtype, 10999, 0x04000000, 1); /* boolean_value */
	
	tb1 = '\01';
	tb2 = *(EIF_BOOLEAN *)(loc1 + RTVA(10999, "boolean_value", loc1));
	
	if (!tb2) {
		tb2 = *(EIF_BOOLEAN *)(loc2 + RTVA(10999, "boolean_value", loc2));
		
		tb1 = tb2;
	}
	*(EIF_BOOLEAN *)(Current + RTWA(10999, dtype)) = (EIF_BOOLEAN) tb1;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 11000, 0xF80000DB, 0); /* text */
	
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(10999, dtype));
	tr1 = (tb1 ? makestr ("True", 4) : makestr ("False", 5));
	
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11000, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {EVALUATOR}.visit_and */
void F1227_13272 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "visit_and";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,ur1);
	RTLR(5,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1226, Current, 2, 1, 18753);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1226, Current, 18753);
	RTCC(arg1, 1226, l_feature_name, 1, eif_attached_type(1280));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF80004CA, 0, 0); /* loc1 */
	
	tr1 = RTLN(1226);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(10997, Dtype(tr1)))(tr1);
	
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 2, 0xF80004CA, 0, 0); /* loc2 */
	
	tr1 = RTLN(1226);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(10997, Dtype(tr1)))(tr1);
	
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11682, "left", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	RTNHOOK(3,1);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11666, "accept", tr1))(tr1, ur1x);
	
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11683, "right", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	RTNHOOK(4,1);
	ur1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11666, "accept", tr1))(tr1, ur1x);
	
	RTHOOK(5);
	RTDBGAA(Current, dtype, 10999, 0x04000000, 1); /* boolean_value */
	
	tb1 = '\0';
	tb2 = *(EIF_BOOLEAN *)(loc1 + RTVA(10999, "boolean_value", loc1));
	
	if (tb2) {
		tb2 = *(EIF_BOOLEAN *)(loc2 + RTVA(10999, "boolean_value", loc2));
		
		tb1 = tb2;
	}
	*(EIF_BOOLEAN *)(Current + RTWA(10999, dtype)) = (EIF_BOOLEAN) tb1;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 11000, 0xF80000DB, 0); /* text */
	
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(10999, dtype));
	tr1 = (tb1 ? makestr ("True", 4) : makestr ("False", 5));
	
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11000, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {EVALUATOR}.visit_implies */
void F1227_13273 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "visit_implies";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,ur1);
	RTLR(5,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1226, Current, 2, 1, 18754);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1226, Current, 18754);
	RTCC(arg1, 1226, l_feature_name, 1, eif_attached_type(1277));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF80004CA, 0, 0); /* loc1 */
	
	tr1 = RTLN(1226);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(10997, Dtype(tr1)))(tr1);
	
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 2, 0xF80004CA, 0, 0); /* loc2 */
	
	tr1 = RTLN(1226);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(10997, Dtype(tr1)))(tr1);
	
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11682, "left", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	RTNHOOK(3,1);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11666, "accept", tr1))(tr1, ur1x);
	
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11683, "right", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	RTNHOOK(4,1);
	ur1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11666, "accept", tr1))(tr1, ur1x);
	
	RTHOOK(5);
	RTDBGAA(Current, dtype, 10999, 0x04000000, 1); /* boolean_value */
	
	tb1 = '\01';
	tb2 = *(EIF_BOOLEAN *)(loc1 + RTVA(10999, "boolean_value", loc1));
	
	if (tb2) {
		tb2 = *(EIF_BOOLEAN *)(loc2 + RTVA(10999, "boolean_value", loc2));
		
		tb1 = tb2;
	}
	*(EIF_BOOLEAN *)(Current + RTWA(10999, dtype)) = (EIF_BOOLEAN) tb1;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 11000, 0xF80000DB, 0); /* text */
	
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(10999, dtype));
	tr1 = (tb1 ? makestr ("True", 4) : makestr ("False", 5));
	
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11000, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {EVALUATOR}.visit_gt */
void F1227_13274 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "visit_gt";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,ur1);
	RTLR(5,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1226, Current, 2, 1, 18755);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1226, Current, 18755);
	RTCC(arg1, 1226, l_feature_name, 1, eif_attached_type(1278));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF80004CA, 0, 0); /* loc1 */
	
	tr1 = RTLN(1226);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(10997, Dtype(tr1)))(tr1);
	
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 2, 0xF80004CA, 0, 0); /* loc2 */
	
	tr1 = RTLN(1226);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(10997, Dtype(tr1)))(tr1);
	
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11682, "left", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	RTNHOOK(3,1);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11666, "accept", tr1))(tr1, ur1x);
	
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11683, "right", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	RTNHOOK(4,1);
	ur1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11666, "accept", tr1))(tr1, ur1x);
	
	RTHOOK(5);
	RTDBGAA(Current, dtype, 10999, 0x04000000, 1); /* boolean_value */
	
	ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(10998, "integer_value", loc1));
	
	ti4_2 = *(EIF_INTEGER_32 *)(loc2 + RTVA(10998, "integer_value", loc2));
	
	*(EIF_BOOLEAN *)(Current + RTWA(10999, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 > ti4_2);
	RTHOOK(6);
	RTDBGAA(Current, dtype, 11000, 0xF80000DB, 0); /* text */
	
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(10999, dtype));
	tr1 = (tb1 ? makestr ("True", 4) : makestr ("False", 5));
	
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11000, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {EVALUATOR}.visit_lt */
void F1227_13275 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "visit_lt";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,ur1);
	RTLR(5,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1226, Current, 2, 1, 18756);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1226, Current, 18756);
	RTCC(arg1, 1226, l_feature_name, 1, eif_attached_type(1273));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF80004CA, 0, 0); /* loc1 */
	
	tr1 = RTLN(1226);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(10997, Dtype(tr1)))(tr1);
	
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 2, 0xF80004CA, 0, 0); /* loc2 */
	
	tr1 = RTLN(1226);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(10997, Dtype(tr1)))(tr1);
	
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11682, "left", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	RTNHOOK(3,1);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11666, "accept", tr1))(tr1, ur1x);
	
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11683, "right", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	RTNHOOK(4,1);
	ur1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11666, "accept", tr1))(tr1, ur1x);
	
	RTHOOK(5);
	RTDBGAA(Current, dtype, 10999, 0x04000000, 1); /* boolean_value */
	
	ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(10998, "integer_value", loc1));
	
	ti4_2 = *(EIF_INTEGER_32 *)(loc2 + RTVA(10998, "integer_value", loc2));
	
	*(EIF_BOOLEAN *)(Current + RTWA(10999, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 < ti4_2);
	RTHOOK(6);
	RTDBGAA(Current, dtype, 11000, 0xF80000DB, 0); /* text */
	
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(10999, dtype));
	tr1 = (tb1 ? makestr ("True", 4) : makestr ("False", 5));
	
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11000, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {EVALUATOR}.visit_equal */
void F1227_13276 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "visit_equal";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,ur1);
	RTLR(5,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1226, Current, 2, 1, 18757);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1226, Current, 18757);
	RTCC(arg1, 1226, l_feature_name, 1, eif_attached_type(1283));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF80004CA, 0, 0); /* loc1 */
	
	tr1 = RTLN(1226);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(10997, Dtype(tr1)))(tr1);
	
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 2, 0xF80004CA, 0, 0); /* loc2 */
	
	tr1 = RTLN(1226);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(10997, Dtype(tr1)))(tr1);
	
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11682, "left", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	RTNHOOK(3,1);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11666, "accept", tr1))(tr1, ur1x);
	
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11683, "right", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	RTNHOOK(4,1);
	ur1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11666, "accept", tr1))(tr1, ur1x);
	
	RTHOOK(5);
	RTDBGAA(Current, dtype, 10999, 0x04000000, 1); /* boolean_value */
	
	tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(10999, "boolean_value", loc1));
	
	tb2 = *(EIF_BOOLEAN *)(loc2 + RTVA(10999, "boolean_value", loc2));
	
	*(EIF_BOOLEAN *)(Current + RTWA(10999, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN)(tb1 == tb2);
	RTHOOK(6);
	RTDBGAA(Current, dtype, 11000, 0xF80000DB, 0); /* text */
	
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(10999, dtype));
	tr1 = (tb1 ? makestr ("True", 4) : makestr ("False", 5));
	
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11000, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {EVALUATOR}.visit_set_enumeration */
void F1227_13277 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "visit_set_enumeration";
	RTEX;
#define arg1 arg1x.it_r
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1226, Current, 0, 1, 18730);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1226, Current, 18730);
	RTCC(arg1, 1226, l_feature_name, 1, eif_attached_type(1260));
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {EVALUATOR}.visit_union */
void F1227_13278 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "visit_union";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1226, Current, 2, 1, 18731);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1226, Current, 18731);
	RTCC(arg1, 1226, l_feature_name, 1, eif_attached_type(1272));
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg1
}

/* {EVALUATOR}.visit_intersect */
void F1227_13279 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "visit_intersect";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1226, Current, 2, 1, 18732);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1226, Current, 18732);
	RTCC(arg1, 1226, l_feature_name, 1, eif_attached_type(1276));
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg1
}

/* {EVALUATOR}.visit_difference */
void F1227_13280 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "visit_difference";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1226, Current, 2, 1, 18733);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1226, Current, 18733);
	RTCC(arg1, 1226, l_feature_name, 1, eif_attached_type(1279));
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg1
}

/* {EVALUATOR}.visit_negative */
void F1227_13281 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "visit_negative";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1226, Current, 1, 1, 18734);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1226, Current, 18734);
	RTCC(arg1, 1226, l_feature_name, 1, eif_attached_type(1267));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF80004CA, 0, 0); /* loc1 */
	
	tr1 = RTLN(1226);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(10997, Dtype(tr1)))(tr1);
	
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11673, "right", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	RTNHOOK(2,1);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11666, "accept", tr1))(tr1, ur1x);
	
	RTHOOK(3);
	RTDBGAA(Current, dtype, 10998, 0x10000000, 1); /* integer_value */
	
	ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(10998, "integer_value", loc1));
	
	*(EIF_INTEGER_32 *)(Current + RTWA(10998, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 0L) - ti4_1);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 11000, 0xF80000DB, 0); /* text */
	
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(10998, dtype));
	tr1 = c_outi(ti4_1);
	
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11000, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {EVALUATOR}.visit_negation */
void F1227_13282 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "visit_negation";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1226, Current, 1, 1, 18735);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1226, Current, 18735);
	RTCC(arg1, 1226, l_feature_name, 1, eif_attached_type(1268));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF80004CA, 0, 0); /* loc1 */
	
	tr1 = RTLN(1226);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(10997, Dtype(tr1)))(tr1);
	
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(11673, "right", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	RTNHOOK(2,1);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11666, "accept", tr1))(tr1, ur1x);
	
	RTHOOK(3);
	RTDBGAA(Current, dtype, 10999, 0x04000000, 1); /* boolean_value */
	
	tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(10999, "boolean_value", loc1));
	
	*(EIF_BOOLEAN *)(Current + RTWA(10999, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) !tb1;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 11000, 0xF80000DB, 0); /* text */
	
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(10999, dtype));
	tr1 = (tb1 ? makestr ("True", 4) : makestr ("False", 5));
	
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(11000, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {EVALUATOR}.visit_sum */
void F1227_13283 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "visit_sum";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 1226, Current, 3, 1, 18736);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1226, Current, 18736);
	RTCC(arg1, 1226, l_feature_name, 1, eif_attached_type(1266));
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg1
}

/* {EVALUATOR}.visit_exists */
void F1227_13284 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "visit_exists";
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 1226, Current, 3, 1, 18737);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1226, Current, 18737);
	RTCC(arg1, 1226, l_feature_name, 1, eif_attached_type(1270));
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg1
}

/* {EVALUATOR}.visit_forall */
void F1227_13285 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "visit_forall";
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 1226, Current, 3, 1, 18738);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1226, Current, 18738);
	RTCC(arg1, 1226, l_feature_name, 1, eif_attached_type(1269));
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg1
}

/* {EVALUATOR}.integer_value */
EIF_TYPED_VALUE F1227_13286 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(10998,Dtype(Current)));
	return r;
}


/* {EVALUATOR}.boolean_value */
EIF_TYPED_VALUE F1227_13287 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(10999,Dtype(Current)));
	return r;
}


/* {EVALUATOR}.text */
EIF_TYPED_VALUE F1227_13288 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(11000,Dtype(Current)));
	return r;
}


/* {EVALUATOR}.set */
EIF_TYPED_VALUE F1227_13289 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(11001,Dtype(Current)));
	return r;
}


void EIF_Minit1227 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
