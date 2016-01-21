/*
 * Code for class WEL_TMPF_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1000_10392(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1000_10393(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1000_10394(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1000_10395(EIF_REFERENCE);
extern void EIF_Minit1000(void);

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

/* {WEL_TMPF_CONSTANTS}.tmpf_fixed_pitch */
EIF_TYPED_VALUE F1000_10392 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tmpf_fixed_pitch";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 999, Current, 0, 0, 16070);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(999, Current, 16070);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TMPF_FIXED_PITCH;
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

/* {WEL_TMPF_CONSTANTS}.tmpf_vector */
EIF_TYPED_VALUE F1000_10393 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tmpf_vector";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 999, Current, 0, 0, 16071);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(999, Current, 16071);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TMPF_VECTOR;
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

/* {WEL_TMPF_CONSTANTS}.tmpf_device */
EIF_TYPED_VALUE F1000_10394 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tmpf_device";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 999, Current, 0, 0, 16072);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(999, Current, 16072);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TMPF_DEVICE;
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

/* {WEL_TMPF_CONSTANTS}.tmpf_truetype */
EIF_TYPED_VALUE F1000_10395 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "tmpf_truetype";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 999, Current, 0, 0, 16073);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(999, Current, 16073);
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) TMPF_TRUETYPE;
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

void EIF_Minit1000 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
