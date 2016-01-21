/*
 * Code for class WEL_TPM_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1016_10820(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1016_10821(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1016_10822(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1016_10823(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1016_10824(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1016_10825(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1016_10826(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1016_10827(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1016_10828(EIF_REFERENCE);
extern void EIF_Minit1016(void);

#ifdef __cplusplus
}
#endif

#include "wel.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {WEL_TPM_CONSTANTS}.tpm_leftbutton */
EIF_TYPED_VALUE F1016_10820 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tpm_leftbutton";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1015, Current, 0, 0, 16474);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1015, Current, 16474);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TPM_LEFTBUTTON;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_TPM_CONSTANTS}.tpm_rightbutton */
EIF_TYPED_VALUE F1016_10821 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tpm_rightbutton";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1015, Current, 0, 0, 16475);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1015, Current, 16475);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TPM_RIGHTBUTTON;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_TPM_CONSTANTS}.tpm_leftalign */
EIF_TYPED_VALUE F1016_10822 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tpm_leftalign";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1015, Current, 0, 0, 16476);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1015, Current, 16476);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TPM_LEFTALIGN;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_TPM_CONSTANTS}.tpm_centeralign */
EIF_TYPED_VALUE F1016_10823 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tpm_centeralign";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1015, Current, 0, 0, 16477);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1015, Current, 16477);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TPM_CENTERALIGN;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_TPM_CONSTANTS}.tpm_rightalign */
EIF_TYPED_VALUE F1016_10824 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tpm_rightalign";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1015, Current, 0, 0, 16478);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1015, Current, 16478);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TPM_RIGHTALIGN;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_TPM_CONSTANTS}.tpm_bottomalign */
EIF_TYPED_VALUE F1016_10825 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tpm_bottomalign";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1015, Current, 0, 0, 16479);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1015, Current, 16479);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TPM_BOTTOMALIGN;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_TPM_CONSTANTS}.tpm_topalign */
EIF_TYPED_VALUE F1016_10826 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tpm_topalign";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1015, Current, 0, 0, 16480);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1015, Current, 16480);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TPM_TOPALIGN;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_TPM_CONSTANTS}.tpm_vcenteralign */
EIF_TYPED_VALUE F1016_10827 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tpm_vcenteralign";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1015, Current, 0, 0, 16481);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1015, Current, 16481);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TPM_VCENTERALIGN;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {WEL_TPM_CONSTANTS}.tpm_returncmd */
EIF_TYPED_VALUE F1016_10828 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tpm_returncmd";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1015, Current, 0, 0, 16482);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1015, Current, 16482);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TPM_RETURNCMD;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

void EIF_Minit1016 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
