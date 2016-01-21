/*
 * Code for class EV_PIXMAP_IMP_STATE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1152_12509(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1152_12512(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1152_12513(EIF_REFERENCE);
extern void F1152_12514(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1152_12515(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1152_12516(EIF_REFERENCE);
extern void F1152_12517(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1152_12520(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1152_12521(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1152_12522(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1152_12523(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1152_12524(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1152_12525(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F1152_12526(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
static EIF_TYPED_VALUE F1152_12527_body(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1152_12527(EIF_REFERENCE);
extern void EIF_Minit1152(void);

#ifdef __cplusplus
}
#endif

#include "load_pixmap.h"
#include <windows.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EV_PIXMAP_IMP_STATE}.save_to_named_path */
void F1152_12509 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "save_to_named_path";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc8 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_POINTER loc11 = (EIF_POINTER) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE ui4_5x = {{0}, SK_INT32};
#define ui4_5 ui4_5x.it_i4
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(15);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLR(4,loc9);
	RTLR(5,Current);
	RTLR(6,loc3);
	RTLR(7,tr1);
	RTLR(8,loc4);
	RTLR(9,ur1);
	RTLR(10,ur2);
	RTLR(11,loc5);
	RTLR(12,loc10);
	RTLR(13,loc6);
	RTLR(14,ur3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_INT32, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_POINTER, &loc11);
	
	RTEAA(l_feature_name, 1151, Current, 11, 2, 18057);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1151, Current, 18057);
	RTCC(arg1, 1151, l_feature_name, 1, eif_attached_type(1154));
	RTCC(arg2, 1151, l_feature_name, 2, eif_attached_type(172));
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_format_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_filename_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(Current, 1, 0xF8000484, 0, 0); /* loc1 */
	
	loc1 = RTCCL(arg1);
	loc1 = RTRV(eif_non_attached_type(1156), loc1);
	RTHOOK(4);
	RTDBGAL(Current, 2, 0xF8000483, 0, 0); /* loc2 */
	
	loc2 = RTCCL(arg1);
	loc2 = RTRV(eif_non_attached_type(1155), loc2);
	RTHOOK(5);
	RTDBGAL(Current, 9, 0xF8000514, 0, 0); /* loc9 */
	
	loc9 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10369, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(6);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(7);
		RTDBGAL(Current, 3, 0xF80005FB, 0, 0); /* loc3 */
		
		tr1 = RTLN(1531);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(14739, Dtype(tr1)))(tr1);
		
		RTNHOOK(7,1);
		loc3 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(8);
		RTDBGAL(Current, 4, 0xF8000545, 0, 0); /* loc4 */
		
		loc4 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10359, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(9);
		ur1 = RTCCL(loc4);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14592, "select_bitmap", loc3))(loc3, ur1x);
		
		RTHOOK(10);
		ur1 = RTCCL(loc4);
		ur2 = RTCCL(arg2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14646, "save_bitmap_into", loc3))(loc3, ur1x, ur2x);
		
		RTHOOK(11);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14598, "unselect_bitmap", loc3))(loc3);
		
		RTHOOK(12);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11713, "delete", loc3))(loc3);
		
		RTHOOK(13);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11710, "decrement_reference", loc4))(loc4);
		
	} else {
		RTHOOK(14);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTHOOK(15);
			RTDBGAL(Current, 5, 0xF8000516, 0, 0); /* loc5 */
			
			tr1 = RTLN(1302);
			ur1 = RTCCL(arg2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(11858, Dtype(tr1)))(tr1, ur1x);
			
			RTNHOOK(15,1);
			loc5 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(16);
			ti4_1 = *(EIF_INTEGER_32 *)(loc2 + RTVA(10397, "scale_height", loc2));
			
			if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
				RTHOOK(17);
				RTDBGAL(Current, 8, 0x10000000, 1, 0); /* loc8 */
				
				ti4_1 = *(EIF_INTEGER_32 *)(loc2 + RTVA(10397, "scale_height", loc2));
				
				loc8 = (EIF_INTEGER_32) ti4_1;
			} else {
				RTHOOK(18);
				RTDBGAL(Current, 8, 0x10000000, 1, 0); /* loc8 */
				
				ti4_1 = *(EIF_INTEGER_32 *)(loc9 + RTVA(11829, "height", loc9));
				
				loc8 = (EIF_INTEGER_32) ti4_1;
			}
			RTHOOK(19);
			ti4_1 = *(EIF_INTEGER_32 *)(loc2 + RTVA(10396, "scale_width", loc2));
			
			if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
				RTHOOK(20);
				RTDBGAL(Current, 7, 0x10000000, 1, 0); /* loc7 */
				
				ti4_1 = *(EIF_INTEGER_32 *)(loc2 + RTVA(10396, "scale_width", loc2));
				
				loc7 = (EIF_INTEGER_32) ti4_1;
			} else {
				RTHOOK(21);
				RTDBGAL(Current, 7, 0x10000000, 1, 0); /* loc7 */
				
				ti4_1 = *(EIF_INTEGER_32 *)(loc9 + RTVA(11830, "width", loc9));
				
				loc7 = (EIF_INTEGER_32) ti4_1;
			}
			RTHOOK(22);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1572, 121))(Current)).it_b);
			if (tb1) {
				RTHOOK(23);
				RTDBGAL(Current, 10, 0xF8000096, 0, 0); /* loc10 */
				
				tr1 = RTLN(150);
				ur1 = RTCCL(loc9);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2664, Dtype(tr1)))(tr1, ur1x);
				
				RTNHOOK(23,1);
				loc10 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(24);
				RTDBGAL(Current, 11, 0x40000000, 1, 0); /* loc11 */
				
				tp1 = *(EIF_POINTER *)(loc10 + RTVA(2669, "item", loc10));
				
				loc11 = (EIF_POINTER) tp1;
			} else {
				RTHOOK(25);
				RTDBGAL(Current, 6, 0xF8000000, 0, 0); /* loc6 */
				
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2637, "to_c", loc9))(loc9)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				
				loc6 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(26);
				RTDBGAL(Current, 11, 0x40000000, 1, 0); /* loc11 */
				
				loc11 = (EIF_POINTER) loc6;
			}
			RTHOOK(27);
			up1 = loc11;
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2920, "item", loc5))(loc5)).it_p);
			
			up2 = tp1;
			ti4_1 = *(EIF_INTEGER_32 *)(loc9 + RTVA(11830, "width", loc9));
			
			ui4_1 = ti4_1;
			ti4_2 = *(EIF_INTEGER_32 *)(loc9 + RTVA(11829, "height", loc9));
			
			ui4_2 = ti4_2;
			ui4_3 = loc7;
			ui4_4 = loc8;
			ti4_3 = *(EIF_INTEGER_32 *)(loc2 + RTVA(10398, "color_mode", loc2));
			
			ui4_5 = ti4_3;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(10382, dtype))(Current, up1x, up2x, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x);
		}
	}
	RTHOOK(28);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg2);
	ur3 = RTCCL(loc9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(10367, dtype))(Current, ur1x, ur2x, ur3x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(29);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(15);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ur3
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ui4_5
#undef arg2
#undef arg1
}

/* {EV_PIXMAP_IMP_STATE}.copy_events_from_other */
void F1152_12512 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "copy_events_from_other";
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
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(20);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,loc2);
	RTLR(5,loc3);
	RTLR(6,loc4);
	RTLR(7,loc5);
	RTLR(8,loc6);
	RTLR(9,loc7);
	RTLR(10,loc8);
	RTLR(11,loc9);
	RTLR(12,loc10);
	RTLR(13,loc11);
	RTLR(14,loc12);
	RTLR(15,loc13);
	RTLR(16,loc14);
	RTLR(17,loc15);
	RTLR(18,loc16);
	RTLR(19,loc17);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
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
	
	RTEAA(l_feature_name, 1151, Current, 17, 1, 18058);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1151, Current, 18058);
	RTCC(arg1, 1151, l_feature_name, 1, eif_attached_type(1151));
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10108, "expose_actions_internal", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	loc1 = RTCCL(tr1);
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		RTDBGAA(Current, dtype, 10108, 0xF8000528, 0); /* expose_actions_internal */
		
		RTAR(Current, loc1);
		*(EIF_REFERENCE *)(Current + RTWA(10108, dtype)) = (EIF_REFERENCE) RTCCL(loc1);
	}
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10352, "focus_in_actions_internal", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	loc2 = RTCCL(tr1);
	if (EIF_TEST(loc2)) {
		RTHOOK(4);
		RTDBGAA(Current, dtype, 10352, 0xF800052A, 0); /* focus_in_actions_internal */
		
		RTAR(Current, loc2);
		*(EIF_REFERENCE *)(Current + RTWA(10352, dtype)) = (EIF_REFERENCE) RTCCL(loc2);
	}
	RTHOOK(5);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10355, "focus_out_actions_internal", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	loc3 = RTCCL(tr1);
	if (EIF_TEST(loc3)) {
		RTHOOK(6);
		RTDBGAA(Current, dtype, 10355, 0xF800052A, 0); /* focus_out_actions_internal */
		
		RTAR(Current, loc3);
		*(EIF_REFERENCE *)(Current + RTWA(10355, dtype)) = (EIF_REFERENCE) RTCCL(loc3);
	}
	RTHOOK(7);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10343, "key_press_actions_internal", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	loc4 = RTCCL(tr1);
	if (EIF_TEST(loc4)) {
		RTHOOK(8);
		RTDBGAA(Current, dtype, 10343, 0xF8000524, 0); /* key_press_actions_internal */
		
		RTAR(Current, loc4);
		*(EIF_REFERENCE *)(Current + RTWA(10343, dtype)) = (EIF_REFERENCE) RTCCL(loc4);
	}
	RTHOOK(9);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10346, "key_press_string_actions_internal", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	loc5 = RTCCL(tr1);
	if (EIF_TEST(loc5)) {
		RTHOOK(10);
		RTDBGAA(Current, dtype, 10346, 0xF8000523, 0); /* key_press_string_actions_internal */
		
		RTAR(Current, loc5);
		*(EIF_REFERENCE *)(Current + RTWA(10346, dtype)) = (EIF_REFERENCE) RTCCL(loc5);
	}
	RTHOOK(11);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10349, "key_release_actions_internal", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	loc6 = RTCCL(tr1);
	if (EIF_TEST(loc6)) {
		RTHOOK(12);
		RTDBGAA(Current, dtype, 10349, 0xF8000524, 0); /* key_release_actions_internal */
		
		RTAR(Current, loc6);
		*(EIF_REFERENCE *)(Current + RTWA(10349, dtype)) = (EIF_REFERENCE) RTCCL(loc6);
	}
	RTHOOK(13);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10325, "pointer_button_press_actions_internal", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	loc7 = RTCCL(tr1);
	if (EIF_TEST(loc7)) {
		RTHOOK(14);
		RTDBGAA(Current, dtype, 10325, 0xF800052B, 0); /* pointer_button_press_actions_internal */
		
		RTAR(Current, loc7);
		*(EIF_REFERENCE *)(Current + RTWA(10325, dtype)) = (EIF_REFERENCE) RTCCL(loc7);
	}
	RTHOOK(15);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10331, "pointer_button_release_actions_internal", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	loc8 = RTCCL(tr1);
	if (EIF_TEST(loc8)) {
		RTHOOK(16);
		RTDBGAA(Current, dtype, 10331, 0xF800052B, 0); /* pointer_button_release_actions_internal */
		
		RTAR(Current, loc8);
		*(EIF_REFERENCE *)(Current + RTWA(10331, dtype)) = (EIF_REFERENCE) RTCCL(loc8);
	}
	RTHOOK(17);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10328, "pointer_double_press_actions_internal", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	loc9 = RTCCL(tr1);
	if (EIF_TEST(loc9)) {
		RTHOOK(18);
		RTDBGAA(Current, dtype, 10328, 0xF800052B, 0); /* pointer_double_press_actions_internal */
		
		RTAR(Current, loc9);
		*(EIF_REFERENCE *)(Current + RTWA(10328, dtype)) = (EIF_REFERENCE) RTCCL(loc9);
	}
	RTHOOK(19);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10334, "pointer_enter_actions_internal", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	loc10 = RTCCL(tr1);
	if (EIF_TEST(loc10)) {
		RTHOOK(20);
		RTDBGAA(Current, dtype, 10334, 0xF800052A, 0); /* pointer_enter_actions_internal */
		
		RTAR(Current, loc10);
		*(EIF_REFERENCE *)(Current + RTWA(10334, dtype)) = (EIF_REFERENCE) RTCCL(loc10);
	}
	RTHOOK(21);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10340, "pointer_leave_actions_internal", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	loc11 = RTCCL(tr1);
	if (EIF_TEST(loc11)) {
		RTHOOK(22);
		RTDBGAA(Current, dtype, 10340, 0xF800052A, 0); /* pointer_leave_actions_internal */
		
		RTAR(Current, loc11);
		*(EIF_REFERENCE *)(Current + RTWA(10340, dtype)) = (EIF_REFERENCE) RTCCL(loc11);
	}
	RTHOOK(23);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10322, "pointer_motion_actions_internal", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	loc12 = RTCCL(tr1);
	if (EIF_TEST(loc12)) {
		RTHOOK(24);
		RTDBGAA(Current, dtype, 10322, 0xF8000527, 0); /* pointer_motion_actions_internal */
		
		RTAR(Current, loc12);
		*(EIF_REFERENCE *)(Current + RTWA(10322, dtype)) = (EIF_REFERENCE) RTCCL(loc12);
	}
	RTHOOK(25);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10358, "resize_actions_internal", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	loc13 = RTCCL(tr1);
	if (EIF_TEST(loc13)) {
		RTHOOK(26);
		RTDBGAA(Current, dtype, 10358, 0xF8000528, 0); /* resize_actions_internal */
		
		RTAR(Current, loc13);
		*(EIF_REFERENCE *)(Current + RTWA(10358, dtype)) = (EIF_REFERENCE) RTCCL(loc13);
	}
	RTHOOK(27);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10288, "conforming_pick_actions_internal", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	loc14 = RTCCL(tr1);
	if (EIF_TEST(loc14)) {
		RTHOOK(28);
		RTDBGAA(Current, dtype, 10288, 0xF800052A, 0); /* conforming_pick_actions_internal */
		
		RTAR(Current, loc14);
		*(EIF_REFERENCE *)(Current + RTWA(10288, dtype)) = (EIF_REFERENCE) RTCCL(loc14);
	}
	RTHOOK(29);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10291, "drop_actions_internal", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	loc15 = RTCCL(tr1);
	if (EIF_TEST(loc15)) {
		RTHOOK(30);
		RTDBGAA(Current, dtype, 10291, 0xF8000519, 0); /* drop_actions_internal */
		
		RTAR(Current, loc15);
		*(EIF_REFERENCE *)(Current + RTWA(10291, dtype)) = (EIF_REFERENCE) RTCCL(loc15);
	}
	RTHOOK(31);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10282, "pick_actions_internal", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	loc16 = RTCCL(tr1);
	if (EIF_TEST(loc16)) {
		RTHOOK(32);
		RTDBGAA(Current, dtype, 10282, 0xF8000526, 0); /* pick_actions_internal */
		
		RTAR(Current, loc16);
		*(EIF_REFERENCE *)(Current + RTWA(10282, dtype)) = (EIF_REFERENCE) RTCCL(loc16);
	}
	RTHOOK(33);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(10285, "pick_ended_actions_internal", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	loc17 = RTCCL(tr1);
	if (EIF_TEST(loc17)) {
		RTHOOK(34);
		RTDBGAA(Current, dtype, 10285, 0xF8000521, 0); /* pick_ended_actions_internal */
		
		RTAR(Current, loc17);
		*(EIF_REFERENCE *)(Current + RTWA(10285, dtype)) = (EIF_REFERENCE) RTCCL(loc17);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(35);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(20);
	RTEE;
#undef up1
#undef arg1
}

/* {EV_PIXMAP_IMP_STATE}.raw_image_data */
EIF_TYPED_VALUE F1152_12513 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "raw_image_data";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 loc7 = (EIF_NATURAL_32) 0;
	EIF_POINTER loc8 = (EIF_POINTER) 0;
	EIF_POINTER loc9 = (EIF_POINTER) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc12 = (EIF_BOOLEAN) 0;
	EIF_INTEGER_32 loc13 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc14 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc15 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_TYPED_VALUE uu1_1x = {{0}, SK_UINT8};
#define uu1_1 uu1_1x.it_n1
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(10);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLR(3,loc2);
	RTLR(4,loc11);
	RTLR(5,ur1);
	RTLR(6,loc1);
	RTLR(7,loc10);
	RTLR(8,loc15);
	RTLR(9,loc6);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_INT32, &loc4);
	RTLU(SK_INT32, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_UINT32, &loc7);
	RTLU(SK_POINTER, &loc8);
	RTLU(SK_POINTER, &loc9);
	RTLU(SK_REF, &loc10);
	RTLU(SK_REF, &loc11);
	RTLU(SK_BOOL, &loc12);
	RTLU(SK_INT32, &loc13);
	RTLU(SK_INT32, &loc14);
	RTLU(SK_REF, &loc15);
	
	RTEAA(l_feature_name, 1151, Current, 15, 0, 18059);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1151, Current, 18059);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000514, 0,0); /* Result */
	
	tr1 = RTLN(1300);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10374, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10375, dtype))(Current)).it_i4);
	ui4_2 = ti4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(11827, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
	
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 2, 0xF80005FB, 0, 0); /* loc2 */
	
	tr1 = RTLN(1531);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(14739, Dtype(tr1)))(tr1);
	
	RTNHOOK(2,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(Current, 11, 0xF8000545, 0, 0); /* loc11 */
	
	loc11 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10359, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(4);
	ur1 = RTCCL(loc11);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14592, "select_bitmap", loc2))(loc2, ur1x);
	
	RTHOOK(5);
	RTDBGAL(Current, 12, 0x04000000, 1, 0); /* loc12 */
	
	loc12 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10363, dtype))(Current)).it_b);
	RTHOOK(6);
	if (loc12) {
		RTHOOK(7);
		RTDBGAL(Current, 1, 0xF80005FB, 0, 0); /* loc1 */
		
		tr1 = RTLN(1531);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(14739, Dtype(tr1)))(tr1);
		
		RTNHOOK(7,1);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(8);
		RTDBGAL(Current, 10, 0xF8000545, 0, 0); /* loc10 */
		
		loc10 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10360, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(9);
		RTCT0(NULL, EX_CHECK);
		if ((EIF_BOOLEAN)(loc10 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(10);
		ur1 = RTCCL(loc10);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14592, "select_bitmap", loc1))(loc1, ur1x);
		
		RTHOOK(11);
		RTDBGAL(Current, 8, 0x40000000, 1, 0); /* loc8 */
		
		tp1 = *(EIF_POINTER *)(loc1 + RTVA(12052, "item", loc1));
		
		loc8 = (EIF_POINTER) tp1;
	}
	RTHOOK(12);
	RTDBGAL(Current, 15, 0xF8000645, 0, 0); /* loc15 */
	
	loc15 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10383, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(13);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc15 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(14);
	ur1 = RTCCL(loc15);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(11844, "set_originating_pixmap", Result))(Result, ur1x);
	
	RTHOOK(15);
	RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
	
	loc3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10374, dtype))(Current)).it_i4);
	loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 * ((EIF_INTEGER_32) 4L));
	RTHOOK(16);
	RTDBGAL(Current, 5, 0x10000000, 1, 0); /* loc5 */
	
	loc5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10375, dtype))(Current)).it_i4);
	loc5 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc3 * loc5);
	RTHOOK(17);
	RTDBGAL(Current, 6, 0xF80002C2, 0, 0); /* loc6 */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2595, "area", Result))(Result)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	loc6 = (EIF_REFERENCE) tr1;
	RTHOOK(18);
	RTDBGAL(Current, 9, 0x40000000, 1, 0); /* loc9 */
	
	tp1 = *(EIF_POINTER *)(loc2 + RTVA(12052, "item", loc2));
	
	loc9 = (EIF_POINTER) tp1;
	for (;;) {
		RTHOOK(19);
		if ((EIF_BOOLEAN)(loc4 == loc5)) break;
		RTHOOK(20);
		RTDBGAL(Current, 13, 0x10000000, 1, 0); /* loc13 */
		
		loc13 = (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 % loc3) / ((EIF_INTEGER_32) 4L)));
		RTHOOK(21);
		RTDBGAL(Current, 14, 0x10000000, 1, 0); /* loc14 */
		
		loc14 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (loc4 / loc3));
		RTHOOK(22);
		RTDBGAL(Current, 7, 0x38000000, 1, 0); /* loc7 */
		
		up1 = loc9;
		ui4_1 = loc13;
		ui4_2 = loc14;
		loc7 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(10381, dtype))(Current, up1x, ui4_1x, ui4_2x)).it_n4);
		RTHOOK(23);
		uu4_1 = loc7;
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10378, dtype))(Current, uu4_1x)).it_n1);
		uu1_1 = tu1_1;
		ui4_1 = loc4;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2402, "put", loc6))(loc6, uu1_1x, ui4_1x);
		
		RTHOOK(24);
		uu4_1 = loc7;
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10379, dtype))(Current, uu4_1x)).it_n1);
		uu1_1 = tu1_1;
		ui4_1 = (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 1L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2402, "put", loc6))(loc6, uu1_1x, ui4_1x);
		
		RTHOOK(25);
		uu4_1 = loc7;
		tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10380, dtype))(Current, uu4_1x)).it_n1);
		uu1_1 = tu1_1;
		ui4_1 = (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 2L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2402, "put", loc6))(loc6, uu1_1x, ui4_1x);
		
		RTHOOK(26);
		if (loc12) {
			RTHOOK(27);
			RTDBGAL(Current, 7, 0x38000000, 1, 0); /* loc7 */
			
			up1 = loc8;
			ui4_1 = loc13;
			ui4_2 = loc14;
			loc7 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(10381, dtype))(Current, up1x, ui4_1x, ui4_2x)).it_n4);
			RTHOOK(28);
			uu4_1 = loc7;
			tu1_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10378, dtype))(Current, uu4_1x)).it_n1);
			tu1_2 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
			
			if ((EIF_BOOLEAN)(tu1_1 != tu1_2)) {
				RTHOOK(29);
				tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L);
				
				uu1_1 = tu1_1;
				ui4_1 = (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 3L));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2402, "put", loc6))(loc6, uu1_1x, ui4_1x);
				
			} else {
				RTHOOK(30);
				tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L);
				
				uu1_1 = tu1_1;
				ui4_1 = (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 3L));
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2402, "put", loc6))(loc6, uu1_1x, ui4_1x);
				
			}
		} else {
			RTHOOK(31);
			tu1_1 = (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L);
			
			uu1_1 = tu1_1;
			ui4_1 = (EIF_INTEGER_32) (loc4 + ((EIF_INTEGER_32) 3L));
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2402, "put", loc6))(loc6, uu1_1x, ui4_1x);
			
		}
		RTHOOK(32);
		RTDBGAL(Current, 4, 0x10000000, 1, 0); /* loc4 */
		
		loc4 += ((EIF_INTEGER_32) 4L);
	}
	RTHOOK(33);
	if (loc12) {
		RTHOOK(34);
		RTCT0(NULL, EX_CHECK);
		if ((EIF_BOOLEAN)(loc1 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(35);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14598, "unselect_bitmap", loc1))(loc1);
		
		RTHOOK(36);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11713, "delete", loc1))(loc1);
		
		RTHOOK(37);
		RTCT0(NULL, EX_CHECK);
		if ((EIF_BOOLEAN)(loc10 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(38);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11710, "decrement_reference", loc10))(loc10);
		
		RTHOOK(39);
		RTDBGAL(Current, 10, 0xF8000545, 0, 0); /* loc10 */
		
		loc10 = (EIF_REFERENCE) NULL;
	}
	RTHOOK(40);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14598, "unselect_bitmap", loc2))(loc2);
	
	RTHOOK(41);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11713, "delete", loc2))(loc2);
	
	RTHOOK(42);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11710, "decrement_reference", loc11))(loc11);
	
	RTHOOK(43);
	RTDBGAL(Current, 11, 0xF8000545, 0, 0); /* loc11 */
	
	loc11 = (EIF_REFERENCE) NULL;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(44);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(17);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef uu4_1
#undef uu1_1
}

/* {EV_PIXMAP_IMP_STATE}.gdi_compact */
void F1152_12514 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "gdi_compact";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1151, Current, 0, 0, 18060);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1151, Current, 18060);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {EV_PIXMAP_IMP_STATE}.build_icon */
EIF_TYPED_VALUE F1152_12515 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "build_icon";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1151, Current, 1, 0, 18061);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1151, Current, 18061);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF8000548, 0, 0); /* loc1 */
	
	ub1 = (EIF_BOOLEAN) 1;
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10376, dtype))(Current, ub1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTRV(eif_non_attached_type(1352), loc1);
	RTHOOK(2);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(3);
	RTDBGAL(Current, 0, 0xF8000548, 0,0); /* Result */
	
	Result = (EIF_REFERENCE) RTCCL(loc1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
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
#undef ub1
}

/* {EV_PIXMAP_IMP_STATE}.build_cursor */
EIF_TYPED_VALUE F1152_12516 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "build_cursor";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,Result);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1151, Current, 1, 0, 18062);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1151, Current, 18062);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF80006FC, 0, 0); /* loc1 */
	
	ub1 = (EIF_BOOLEAN) 0;
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(10376, dtype))(Current, ub1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = RTRV(eif_non_attached_type(1788), loc1);
	RTHOOK(2);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(3);
	RTDBGAL(Current, 0, 0xF80006FC, 0,0); /* Result */
	
	Result = (EIF_REFERENCE) RTCCL(loc1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
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
#undef ub1
}

/* {EV_PIXMAP_IMP_STATE}.init_from_pixel_buffer */
void F1152_12517 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "init_from_pixel_buffer";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,ur1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	
	RTEAA(l_feature_name, 1151, Current, 2, 1, 18063);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1151, Current, 18063);
	RTCC(arg1, 1151, l_feature_name, 1, eif_attached_type(1546));
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 2, 0xF8000645, 0, 0); /* loc2 */
	
	loc2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10383, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(2);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc2 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(3);
	RTDBGAL(Current, 1, 0xF8000671, 0, 0); /* loc1 */
	
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(14815, "implementation", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	
	loc1 = RTCCL(tr1);
	loc1 = RTRV(eif_non_attached_type(1649), loc1);
	RTHOOK(4);
	RTCT0(NULL, EX_CHECK);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(5);
	ur1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(15756, "draw_to_drawable", loc1))(loc1, ur1x);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {EV_PIXMAP_IMP_STATE}.build_graphical_resource */
EIF_TYPED_VALUE F1152_12520 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "build_graphical_resource";
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
#define arg1 arg1x.it_b
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ui4_4x = {{0}, SK_INT32};
#define ui4_4 ui4_4x.it_i4
	EIF_TYPED_VALUE ui4_5x = {{0}, SK_INT32};
#define ui4_5 ui4_5x.it_i4
	EIF_TYPED_VALUE ui4_6x = {{0}, SK_INT32};
#define ui4_6 ui4_6x.it_i4
	EIF_TYPED_VALUE ui4_7x = {{0}, SK_INT32};
#define ui4_7 ui4_7x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(14);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,loc6);
	RTLR(3,Current);
	RTLR(4,loc7);
	RTLR(5,ur1);
	RTLR(6,loc5);
	RTLR(7,loc2);
	RTLR(8,loc3);
	RTLR(9,loc4);
	RTLR(10,loc8);
	RTLR(11,loc9);
	RTLR(12,loc10);
	RTLR(13,Result);
	RTLU (SK_REF, &Result);
	RTLU(SK_BOOL,&arg1);
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
	
	RTEAA(l_feature_name, 1151, Current, 10, 1, 18064);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1151, Current, 18064);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF8000595, 0, 0); /* loc1 */
	
	tr1 = RTLN(1429);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(12410, Dtype(tr1)))(tr1);
	
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(12057, "set_unshared", loc1))(loc1);
	
	RTHOOK(3);
	ub1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(13557, "set_is_icon", loc1))(loc1, ub1x);
	
	RTHOOK(4);
	RTDBGAL(Current, 6, 0xF8000545, 0, 0); /* loc6 */
	
	loc6 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10359, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(5);
	RTDBGAL(Current, 7, 0xF8000545, 0, 0); /* loc7 */
	
	tr1 = RTLN(1349);
	ur1 = RTCCL(loc6);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(12195, Dtype(tr1)))(tr1, ur1x);
	
	RTNHOOK(5,1);
	loc7 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(6);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11709, "enable_reference_tracking", loc7))(loc7);
	
	RTHOOK(7);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11710, "decrement_reference", loc6))(loc6);
	
	RTHOOK(8);
	if ((EIF_BOOLEAN) !arg1) {
		RTHOOK(9);
		RTDBGAL(Current, 5, 0xF8000646, 0, 0); /* loc5 */
		
		loc5 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10383, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc5 = RTRV(eif_non_attached_type(1606), loc5);
		RTHOOK(10);
		if ((EIF_BOOLEAN)(loc5 != NULL)) {
			RTHOOK(11);
			ti4_1 = *(EIF_INTEGER_32 *)(loc5 + RTVA(15499, "x_hotspot", loc5));
			
			ui4_1 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(13553, "set_x_hotspot", loc1))(loc1, ui4_1x);
			
			RTHOOK(12);
			ti4_1 = *(EIF_INTEGER_32 *)(loc5 + RTVA(15500, "y_hotspot", loc5));
			
			ui4_1 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(13554, "set_y_hotspot", loc1))(loc1, ui4_1x);
			
		}
	}
	RTHOOK(13);
	RTDBGAL(Current, 2, 0xF80005FB, 0, 0); /* loc2 */
	
	tr1 = RTLN(1531);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(14739, Dtype(tr1)))(tr1);
	
	RTNHOOK(13,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(14);
	RTDBGAL(Current, 3, 0xF8000545, 0, 0); /* loc3 */
	
	tr1 = RTLN(1349);
	ur1 = RTCCL(loc2);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10374, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10375, dtype))(Current)).it_i4);
	ui4_2 = ti4_2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(12193, Dtype(tr1)))(tr1, ur1x, ui4_1x, ui4_2x);
	
	RTNHOOK(14,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(15);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11709, "enable_reference_tracking", loc3))(loc3);
	
	RTHOOK(16);
	ur1 = RTCCL(loc3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14592, "select_bitmap", loc2))(loc2, ur1x);
	
	RTHOOK(17);
	RTDBGAL(Current, 4, 0xF8000406, 0, 0); /* loc4 */
	
	tr1 = RTLN(1030);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	
	RTNHOOK(17,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(18);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10363, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(19);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		ui4_2 = ((EIF_INTEGER_32) 0L);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10374, dtype))(Current)).it_i4);
		ui4_3 = ti4_1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10375, dtype))(Current)).it_i4);
		ui4_4 = ti4_2;
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9019, "whiteness", loc4))(loc4)).it_i4);
		
		ui4_5 = ti4_3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14644, "pat_blt", loc2))(loc2, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x);
		
		RTHOOK(20);
		RTDBGAL(Current, 8, 0xF8000545, 0, 0); /* loc8 */
		
		loc8 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10360, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(21);
		RTCT0(NULL, EX_CHECK);
		if ((EIF_BOOLEAN)(loc8 != NULL)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(22);
		RTDBGAL(Current, 9, 0xF80005FB, 0, 0); /* loc9 */
		
		tr1 = RTLN(1531);
		ur1 = RTCCL(loc2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(14740, Dtype(tr1)))(tr1, ur1x);
		
		RTNHOOK(22,1);
		loc9 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(23);
		ur1 = RTCCL(loc8);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14592, "select_bitmap", loc9))(loc9, ur1x);
		
		RTHOOK(24);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		ui4_2 = ((EIF_INTEGER_32) 0L);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10374, dtype))(Current)).it_i4);
		ui4_3 = ti4_1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10375, dtype))(Current)).it_i4);
		ui4_4 = ti4_2;
		ur1 = RTCCL(loc9);
		ui4_5 = ((EIF_INTEGER_32) 0L);
		ui4_6 = ((EIF_INTEGER_32) 0L);
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9008, "srcinvert", loc4))(loc4)).it_i4);
		
		ui4_7 = ti4_3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14638, "bit_blt", loc2))(loc2, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ur1x, ui4_5x, ui4_6x, ui4_7x);
		
		RTHOOK(25);
		RTDBGAL(Current, 10, 0xF80005FB, 0, 0); /* loc10 */
		
		tr1 = RTLN(1531);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(14739, Dtype(tr1)))(tr1);
		
		RTNHOOK(25,1);
		loc10 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(26);
		ur1 = RTCCL(loc7);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(14592, "select_bitmap", loc10))(loc10, ur1x);
		
		RTHOOK(27);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		ui4_2 = ((EIF_INTEGER_32) 0L);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10374, dtype))(Current)).it_i4);
		ui4_3 = ti4_1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10375, dtype))(Current)).it_i4);
		ui4_4 = ti4_2;
		ur1 = RTCCL(loc2);
		ui4_5 = ((EIF_INTEGER_32) 0L);
		ui4_6 = ((EIF_INTEGER_32) 0L);
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9020, "maskpaint", loc4))(loc4)).it_i4);
		
		ui4_7 = ti4_3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14638, "bit_blt", loc10))(loc10, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ur1x, ui4_5x, ui4_6x, ui4_7x);
		
		RTHOOK(28);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14598, "unselect_bitmap", loc10))(loc10);
		
		RTHOOK(29);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11713, "delete", loc10))(loc10);
		
		RTHOOK(30);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14598, "unselect_bitmap", loc9))(loc9);
		
		RTHOOK(31);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11713, "delete", loc9))(loc9);
		
	} else {
		RTHOOK(32);
		ui4_1 = ((EIF_INTEGER_32) 0L);
		ui4_2 = ((EIF_INTEGER_32) 0L);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10374, dtype))(Current)).it_i4);
		ui4_3 = ti4_1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(10375, dtype))(Current)).it_i4);
		ui4_4 = ti4_2;
		ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(9018, "blackness", loc4))(loc4)).it_i4);
		
		ui4_5 = ti4_3;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(14644, "pat_blt", loc2))(loc2, ui4_1x, ui4_2x, ui4_3x, ui4_4x, ui4_5x);
		
	}
	RTHOOK(33);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(14598, "unselect_bitmap", loc2))(loc2);
	
	RTHOOK(34);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11713, "delete", loc2))(loc2);
	
	RTHOOK(35);
	ur1 = RTCCL(loc7);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(13556, "set_color_bitmap", loc1))(loc1, ur1x);
	
	RTHOOK(36);
	ur1 = RTCCL(loc3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(13555, "set_mask_bitmap", loc1))(loc1, ur1x);
	
	RTHOOK(37);
	if (arg1) {
		RTHOOK(38);
		RTDBGAL(Current, 0, 0xF8000547, 0,0); /* Result */
		
		tr1 = RTLN(1352);
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(12244, Dtype(tr1)))(tr1, ur1x);
		
		RTNHOOK(38,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(39);
		RTDBGAL(Current, 0, 0xF8000547, 0,0); /* Result */
		
		tr1 = RTLN(1788);
		ur1 = RTCCL(loc1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(12244, Dtype(tr1)))(tr1, ur1x);
		
		RTNHOOK(39,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTHOOK(40);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11710, "decrement_reference", loc3))(loc3);
	
	RTHOOK(41);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(13564, "delete", loc1))(loc1);
	
	RTHOOK(42);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11710, "decrement_reference", loc7))(loc7);
	
	RTHOOK(43);
	if ((EIF_BOOLEAN)(loc8 != NULL)) {
		RTHOOK(44);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(11710, "decrement_reference", loc8))(loc8);
		
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(45);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(13);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ui4_4
#undef ui4_5
#undef ui4_6
#undef ui4_7
#undef ub1
#undef arg1
}

/* {EV_PIXMAP_IMP_STATE}.update_for_pick_and_drop */
void F1152_12521 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "update_for_pick_and_drop";
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
	
	RTEAA(l_feature_name, 1151, Current, 0, 1, 18065);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1151, Current, 18065);
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

/* {EV_PIXMAP_IMP_STATE}.get_rvalue */
EIF_TYPED_VALUE F1152_12522 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_rvalue";
	RTEX;
#define arg1 arg1x.it_n4
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_UINT8, &Result);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1151, Current, 0, 1, 18066);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1151, Current, 18066);
	RTIV(Current, RTAL);
	Result = (EIF_NATURAL_8) GetRValue(((DWORD) arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT8; r.it_n1 = Result; return r; }
#undef arg1
}

/* {EV_PIXMAP_IMP_STATE}.get_gvalue */
EIF_TYPED_VALUE F1152_12523 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_gvalue";
	RTEX;
#define arg1 arg1x.it_n4
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_UINT8, &Result);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1151, Current, 0, 1, 18067);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1151, Current, 18067);
	RTIV(Current, RTAL);
	Result = (EIF_NATURAL_8) GetGValue(((DWORD) arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT8; r.it_n1 = Result; return r; }
#undef arg1
}

/* {EV_PIXMAP_IMP_STATE}.get_bvalue */
EIF_TYPED_VALUE F1152_12524 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_bvalue";
	RTEX;
#define arg1 arg1x.it_n4
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_UINT8, &Result);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1151, Current, 0, 1, 18053);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1151, Current, 18053);
	RTIV(Current, RTAL);
	Result = (EIF_NATURAL_8) GetBValue(((DWORD) arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT8; r.it_n1 = Result; return r; }
#undef arg1
}

/* {EV_PIXMAP_IMP_STATE}.cwin_get_pixel */
EIF_TYPED_VALUE F1152_12525 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "cwin_get_pixel";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1151, Current, 0, 3, 18054);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1151, Current, 18054);
	RTIV(Current, RTAL);
	Result = (EIF_NATURAL_32) GetPixel(((HDC) arg1), ((int) arg2), ((int) arg3));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef arg3
#undef arg2
#undef arg1
}

/* {EV_PIXMAP_IMP_STATE}.c_ev_save_png */
void F1152_12526 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x)
{
	GTCX
	char *l_feature_name = "c_ev_save_png";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_i4
#define arg6 arg6x.it_i4
#define arg7 arg7x.it_i4
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg7x.type & SK_HEAD) == SK_REF) arg7x.it_i4 = * (EIF_INTEGER_32 *) arg7x.it_r;
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_i4 = * (EIF_INTEGER_32 *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU(SK_INT32,&arg6);
	RTLU(SK_INT32,&arg7);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1151, Current, 0, 7, 18055);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1151, Current, 18055);
	RTIV(Current, RTAL);c_ev_save_png((char*) arg1, (EIF_FILENAME) arg2, (int) arg3, (int) arg4, (int) arg5, (int) arg6, (int) arg7);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(9);
	RTEE;
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {EV_PIXMAP_IMP_STATE}.interface */
static EIF_TYPED_VALUE F1152_12527_body (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "interface";
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1151, Current, 0, 0, 18056);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1151, Current, 18056);
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
}

EIF_TYPED_VALUE F1152_12527 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(10383,Dtype(Current)));
	if (!r.it_r) {
		if (RTAT(RTWCT(10383, Dtype(Current), Dftype(Current)))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			r.it_r = (F1152_12527_body (Current)).it_r;
			*(EIF_REFERENCE *)(Current + RTWA(10383,Dtype(Current))) = r.it_r;
			RTAR(Current, r.it_r);
			RTLE;
		}
	}
	return r;
}


void EIF_Minit1152 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
