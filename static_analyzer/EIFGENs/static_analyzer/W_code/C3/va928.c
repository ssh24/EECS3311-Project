/*
 * Code for class VALUE_SINGLETON
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F928_9591(EIF_REFERENCE);
extern EIF_TYPED_VALUE F928_9592(EIF_REFERENCE);
extern void F928_9593(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit928(void);

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

/* {VALUE_SINGLETON}.default_create */
void F928_9591 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "default_create";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 927, Current, 0, 0, 15229);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(927, Current, 15229);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 7518, 0x800005EE, 1); /* epsilon */
	
	tr1 = RTLN(1518);
	tr2 = RTMS_EX_H("0.0",3,3157552);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(14175, Dtype(tr1)))(tr1, ur1x);
	
	RTNHOOK(1,1);
	tr1 = RTRCL(tr1);
	RTXA(tr1, (Current + RTWA(7518, Dtype(Current))));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef ur1
}

/* {VALUE_SINGLETON}.epsilon */
EIF_TYPED_VALUE F928_9592 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = (Current + RTWA(7518,Dtype(Current)));
	return r;
}


/* {VALUE_SINGLETON}.set_epsilon */
void F928_9593 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_epsilon";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 927, Current, 0, 1, 15231);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(927, Current, 15231);
	RTCC(arg1, 927, l_feature_name, 1, eif_attached_type(219));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 7518, 0x800005EE, 1); /* epsilon */
	
	tr1 = RTLN(1518);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(14175, Dtype(tr1)))(tr1, ur1x);
	
	RTNHOOK(1,1);
	tr1 = RTRCL(tr1);
	RTXA(tr1, (Current + RTWA(7518, Dtype(Current))));
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

void EIF_Minit928 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
