/*
 * Class WEL_TIMER_MESSAGE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1802 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1802 [] = {0xFF11,236,0xFF12,1801,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1802 [] = {0xFF11,1801,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1802 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1802 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1802 [] = {0xFF11,1801,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1802 [] = {0xFF11,1801,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1802 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1802 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1802 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1802 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1802 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1802 [] = {0xFF11,1801,0xFFFF};
static EIF_TYPE_INDEX gen_type13_1802 [] = {0xFF11,1854,0xFFFF};


static struct desc_info desc_1802[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1802},
	{1, (BODY_INDEX)-1, 236, gen_type1_1802},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1801, gen_type2_1802},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1802},
	{14, (BODY_INDEX)-1, 0, gen_type4_1802},
	{15, (BODY_INDEX)-1, 1801, gen_type5_1802},
	{16, (BODY_INDEX)-1, 1801, gen_type6_1802},
	{17, (BODY_INDEX)-1, 0, gen_type7_1802},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_1802},
	{21, (BODY_INDEX)-1, 219, gen_type9_1802},
	{22, (BODY_INDEX)-1, 219, gen_type10_1802},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_1802},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1801, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1801, gen_type12_1802},
	{18848, (BODY_INDEX)-1, 214, NULL},
	{18849, (BODY_INDEX)-1, 214, NULL},
	{18850, (BODY_INDEX)-1, 214, NULL},
	{18851, (BODY_INDEX)-1, 205, NULL},
	{18852, (BODY_INDEX)-1, 205, NULL},
	{18853, (BODY_INDEX)-1, 214, NULL},
	{18854, (BODY_INDEX)-1, 214, NULL},
	{26064, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26065, 0, 1854, gen_type13_1802},
	{26066, 8, 205, NULL},
	{26067, 16, 214, NULL},
	{26068, 24, 214, NULL},
	{26069, (BODY_INDEX)-1, 205, NULL},
	{26070, (BODY_INDEX)-1, 205, NULL},
	{26105, (BODY_INDEX)-1, 214, NULL},
};

extern void Init1802(void);
void Init1802(void)
{
	IDSC(desc_1802, 0, 1801);
	IDSC(desc_1802 + 1, 1, 1801);
	IDSC(desc_1802 + 32, 906, 1801);
	IDSC(desc_1802 + 35, 893, 1801);
	IDSC(desc_1802 + 39, 1157, 1801);
	IDSC(desc_1802 + 46, 1334, 1801);
}


#ifdef __cplusplus
}
#endif
