/*
 * Code for class ES_TESTABLE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1201_12947(EIF_REFERENCE);
extern void F1201_12948(EIF_REFERENCE);
extern void F1201_12949(EIF_REFERENCE);
extern void F1201_12950(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1201_12951(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1201_12953(EIF_REFERENCE);
extern void F1201_12954(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1201_12955(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1201_12956(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1201_12957(EIF_REFERENCE);
extern void F1201_12960(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1201_12961(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1201_12962(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1201_12963(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1201_12964(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1201_12965(EIF_REFERENCE);
extern void EIF_Minit1201(void);

#ifdef __cplusplus
}
#endif

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

/* {ES_TESTABLE}.run_espec */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
void F1201_12947 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "run_espec";
	RTEX;
	RTED;
	EIF_BOOLEAN EIF_VOLATILE loc1 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTDT;
	RTXD;
	RTLXD;
	
	RTXI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,saved_except);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTLXL;
	
	RTEAA(l_feature_name, 1200, Current, 1, 0, 18448);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1200, Current, 18448);
	RTIV(Current, RTAL);
	RTE_T
	RTHOOK(1);
	if ((EIF_BOOLEAN) !loc1) {
		RTHOOK(2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(10731, dtype))(Current);
		RTHOOK(3);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(10739, dtype))(Current);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTLXE;
	RTXS(4);
	RTHOOK(4);
	RTDBGAL(Current, 1, 0x04000000, 1, 0); /* loc1 */
	
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(5);
	tr1 = RTMS_EX_H("Error: No test cases found, Please add ES_TEST classes to the class that inherits from ES_SUITE\012",96,1749911306);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10733, dtype))(Current, ur1x);
	RTHOOK(6);
	RTTS;
	RTPS;
	RTER;
	RTMD(0);
	/* NOTREACHED */
	RTE_EE
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTEOK;
	RTXE;
	RTLO(3);
#undef ur1
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {ES_TESTABLE}.show_errors */
void F1201_12948 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "show_errors";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1200, Current, 0, 0, 18449);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1200, Current, 18449);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 10743, 0x04000000, 1); /* show_err */
	
	*(EIF_BOOLEAN *)(Current + RTWA(10743, Dtype(Current))) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {ES_TESTABLE}.show_browser */
void F1201_12949 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "show_browser";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1200, Current, 0, 0, 18450);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1200, Current, 18450);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 10744, 0x04000000, 1); /* browser */
	
	*(EIF_BOOLEAN *)(Current + RTWA(10744, Dtype(Current))) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {ES_TESTABLE}.set_html_name */
void F1201_12950 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_html_name";
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
	
	RTEAA(l_feature_name, 1200, Current, 0, 1, 18451);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1200, Current, 18451);
	RTCC(arg1, 1200, l_feature_name, 1, eif_attached_type(219));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 10740, 0xF80000DB, 0); /* default_html_name */
	
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + RTWA(10740, Dtype(Current))) = (EIF_REFERENCE) RTCCL(arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {ES_TESTABLE}.set_error_report */
void F1201_12951 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_error_report";
	RTEX;
#define arg1 arg1x.it_b
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1200, Current, 0, 1, 18452);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1200, Current, 18452);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 10743, 0x04000000, 1); /* show_err */
	
	*(EIF_BOOLEAN *)(Current + RTWA(10743, Dtype(Current))) = (EIF_BOOLEAN) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {ES_TESTABLE}.curr_os_dir_separator */
EIF_TYPED_VALUE F1201_12953 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "curr_os_dir_separator";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLU (SK_CHAR8, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1200, Current, 0, 0, 18453);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1200, Current, 18453);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x08000000, 1,0); /* Result */
	
	tr1 = RTLN(14);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	
	RTNHOOK(1,1);
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(193, "directory_separator", tr1))(tr1)).it_c1);
	
	Result = (EIF_CHARACTER_8) tc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("separator_is_a_slash", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(Result == (EIF_CHARACTER_8) '/') || (EIF_BOOLEAN)(Result == (EIF_CHARACTER_8) '\\'))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR8; r.it_c1 = Result; return r; }
}

/* {ES_TESTABLE}.print_to_screen */
void F1201_12954 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "print_to_screen";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1200, Current, 0, 1, 18454);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1200, Current, 18454);
	RTCC(arg1, 1200, l_feature_name, 1, eif_attached_type(219));
	RTIV(Current, RTAL);
	RTHOOK(1);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10734, Dtype(Current)))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef arg1
}

/* {ES_TESTABLE}.safe_put_string */
void F1201_12955 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "safe_put_string";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1200, Current, 0, 1, 18455);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1200, Current, 18455);
	RTCC(arg1, 1200, l_feature_name, 1, eif_attached_type(219));
	RTIV(Current, RTAL);
	RTHOOK(1);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(30, Dtype(Current)))(Current, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef ur1
#undef arg1
}

/* {ES_TESTABLE}.check_browser */
void F1201_12956 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "check_browser";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,loc2);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,ur1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1200, Current, 2, 0, 18456);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1200, Current, 18456);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF80000A0, 0, 0); /* loc1 */
	
	tr1 = RTLN(160);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	if (RTAL & CK_CHECK) {
		RTHOOK(2);
		RTCT(NULL, EX_CHECK);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10736, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if ((EIF_BOOLEAN)(tr1 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTHOOK(3);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(10744, dtype));
	if (tb1) {
		RTHOOK(4);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1573, 121))(Current)).it_b);
		if (tb1) {
			RTHOOK(5);
			RTDBGAL(Current, 2, 0xF80000DB, 0, 0); /* loc2 */
			
			tr1 = RTMS_EX_H("\"explorer\" ",11,1679325984);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10736, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(5,1);
			tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", tr2))(tr2)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			
			ur1 = RTCCL(tr3);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4408, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			
			tr1 = RTMS_EX_H("\"",1,34);
			ur1 = tr1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4408, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			
			loc2 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(6);
			ur1 = RTCCL(loc2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3010, "launch", loc1))(loc1, ur1x);
			
		} else {
			RTHOOK(7);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1576, 121))(Current)).it_b);
			if (tb1) {
				RTHOOK(8);
				RTDBGAL(Current, 2, 0xF80000DB, 0, 0); /* loc2 */
				
				tr1 = RTMS_EX_H("open",4,1869636974);
				tr2 = RTMS_EX_H(" \'",2,8231);
				ur1 = tr2;
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4408, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10736, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(8,1);
				tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				
				ur1 = RTCCL(tr3);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4408, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				
				tr2 = RTMS_EX_H("\'",1,39);
				ur1 = tr2;
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4408, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				
				loc2 = (EIF_REFERENCE) RTCCL(tr2);
				RTHOOK(9);
				ur1 = RTCCL(loc2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3010, "launch", loc1))(loc1, ur1x);
				
			} else {
				if (RTAL & CK_CHECK) {
					RTHOOK(10);
					RTCT(NULL, EX_CHECK);
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1574, 121))(Current)).it_b);
					if (tb1) {
						RTCK;
					} else {
						RTCF;
					}
				}
				RTHOOK(11);
				RTDBGAL(Current, 2, 0xF80000DB, 0, 0); /* loc2 */
				
				tr1 = RTMS_EX_H("xdg-open",8,892269422);
				tr2 = RTMS_EX_H(" \'",2,8231);
				ur1 = tr2;
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4408, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10736, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(11,1);
				tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
				
				ur1 = RTCCL(tr3);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4408, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				
				tr2 = RTMS_EX_H("\'",1,39);
				ur1 = tr2;
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4408, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				
				loc2 = (EIF_REFERENCE) RTCCL(tr2);
				RTHOOK(12);
				ur1 = RTCCL(loc2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3010, "launch", loc1))(loc1, ur1x);
				
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef up2
#undef ur1
}

/* {ES_TESTABLE}.get_html_name */
EIF_TYPED_VALUE F1201_12957 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "get_html_name";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,Result);
	RTLR(4,tr2);
	RTLR(5,ur1);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1200, Current, 1, 0, 18457);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1200, Current, 18457);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10740, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTHOOK(2);
		RTCT0(NULL, EX_CHECK);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10740, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = RTCCL(tr1);
		if (EIF_TEST(loc1)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(3);
		RTDBGAL(Current, 0, 0xF80000DB, 0,0); /* Result */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(17, "twin", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(4);
		RTDBGAL(Current, 0, 0xF80000DB, 0,0); /* Result */
		
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(8, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3531, "name", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		
		tr1 = RTMS_EX_H(".html",5,1752813932);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4408, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4385, "as_string_8", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		
		Result = (EIF_REFERENCE) RTCCL(tr2);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
}

/* {ES_TESTABLE}.print_console_report */
void F1201_12960 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "print_console_report";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uc1x = {{0}, SK_CHAR8};
#define uc1 uc1x.it_c1
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,loc5);
	RTLR(4,tr1);
	RTLR(5,ur1);
	RTLR(6,loc6);
	RTLR(7,tr2);
	RTLR(8,loc7);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	
	RTEAA(l_feature_name, 1200, Current, 7, 0, 18442);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1200, Current, 18442);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF8000106, 0, 0); /* loc1 */
	
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10738, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(2);
	RTDBGAL(Current, 2, 0xF8000106, 0, 0); /* loc2 */
	
	loc2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10737, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(3);
	RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1752, "count", loc2))(loc2)).it_i4);
	
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
	
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1752, "count", loc2))(loc2)).it_i4);
	
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1752, "count", loc1))(loc1)).it_i4);
	
	loc4 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ti4_2);
	RTHOOK(5);
	RTDBGAL(Current, 5, 0xF80000DB, 0, 0); /* loc5 */
	
	tr1 = RTLN(219);
	uc1 = (EIF_CHARACTER_8) '=';
	ui4_1 = ((EIF_INTEGER_32) 60L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(4424, Dtype(tr1)))(tr1, uc1x, ui4_1x);
	
	RTNHOOK(5,1);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(6,1);
	ur1 = RTCCL(loc5);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(147, "put_string", tr1))(tr1, ur1x);
	
	RTHOOK(7);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(7,1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(166, "put_new_line", tr1))(tr1);
	
	RTHOOK(8);
	tr1 = RTMS_EX_H("passing tests\012",14,1588283658);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10734, dtype))(Current, ur1x);
	RTHOOK(9);
	RTDBGAL(Current, 1, 0xF80000F3, 0, 0); /* loc6 */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2312, "new_cursor", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	loc6 = (EIF_REFERENCE) RTCCL(tr1);
	for (;;) {
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1671, "after", loc6))(loc6)).it_b);
		
		if (tb1) break;
		RTHOOK(10);
		tr1 = RTMS_EX_H("> ",2,15904);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1670, "item", loc6))(loc6)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4408, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		
		tr1 = RTMS_EX_H("\012",1,10);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4408, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10734, dtype))(Current, ur1x);
		RTHOOK(11);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1672, "forth", loc6))(loc6);
		
	}
	RTHOOK(12);
	tr1 = RTMS_EX_H("failing tests\012",14,1098897930);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10734, dtype))(Current, ur1x);
	RTHOOK(13);
	RTDBGAL(Current, 2, 0xF80000F3, 0, 0); /* loc7 */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2312, "new_cursor", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	loc7 = (EIF_REFERENCE) RTCCL(tr1);
	for (;;) {
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1671, "after", loc7))(loc7)).it_b);
		
		if (tb2) break;
		RTHOOK(14);
		tr1 = RTMS_EX_H("> ",2,15904);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1670, "item", loc7))(loc7)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		
		ur1 = RTCCL(tr2);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4408, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		
		tr1 = RTMS_EX_H("\012",1,10);
		ur1 = tr1;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4408, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10734, dtype))(Current, ur1x);
		RTHOOK(15);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1672, "forth", loc7))(loc7);
		
	}
	RTHOOK(16);
	tr1 = c_outi(loc3);
	
	tr2 = RTMS_EX_H("/",1,47);
	ur1 = tr2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4408, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	tr1 = c_outi(loc4);
	
	ur1 = RTCCL(tr1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4408, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	tr2 = RTMS_EX_H(" passed\012",8,524481290);
	ur1 = tr2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4408, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10734, dtype))(Current, ur1x);
	RTHOOK(17);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(10741, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(10742, dtype));
	if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
		RTHOOK(18);
		tr1 = RTMS_EX_H("passed\012",7,517108490);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10734, dtype))(Current, ur1x);
	} else {
		RTHOOK(19);
		tr1 = RTMS_EX_H("failed\012",7,1808865802);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10734, dtype))(Current, ur1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(20);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(9);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef uc1
}

/* {ES_TESTABLE}.default_html_name */
EIF_TYPED_VALUE F1201_12961 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(10740,Dtype(Current)));
	return r;
}


/* {ES_TESTABLE}.number_of_tests */
EIF_TYPED_VALUE F1201_12962 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(10741,Dtype(Current)));
	return r;
}


/* {ES_TESTABLE}.number_passed_tests */
EIF_TYPED_VALUE F1201_12963 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(10742,Dtype(Current)));
	return r;
}


/* {ES_TESTABLE}.show_err */
EIF_TYPED_VALUE F1201_12964 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(10743,Dtype(Current)));
	return r;
}


/* {ES_TESTABLE}.browser */
EIF_TYPED_VALUE F1201_12965 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(10744,Dtype(Current)));
	return r;
}


void EIF_Minit1201 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
