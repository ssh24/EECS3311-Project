/*
 * Class WEL_PFA_CONSTANTS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1131 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1131 [] = {0xFF11,236,0xFF12,1130,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1131 [] = {0xFF11,1130,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1131 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1131 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1131 [] = {0xFF11,1130,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1131 [] = {0xFF11,1130,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1131 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1131 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1131 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1131 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1131 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1131 [] = {0xFF11,1130,0xFFFF};


static struct desc_info desc_1131[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1131},
	{1, (BODY_INDEX)-1, 236, gen_type1_1131},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1130, gen_type2_1131},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1131},
	{14, (BODY_INDEX)-1, 0, gen_type4_1131},
	{15, (BODY_INDEX)-1, 1130, gen_type5_1131},
	{16, (BODY_INDEX)-1, 1130, gen_type6_1131},
	{17, (BODY_INDEX)-1, 0, gen_type7_1131},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_1131},
	{21, (BODY_INDEX)-1, 219, gen_type9_1131},
	{22, (BODY_INDEX)-1, 219, gen_type10_1131},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_1131},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1130, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1130, gen_type12_1131},
	{17824, (BODY_INDEX)-1, 205, NULL},
	{17825, (BODY_INDEX)-1, 205, NULL},
	{17826, (BODY_INDEX)-1, 205, NULL},
	{17827, (BODY_INDEX)-1, 205, NULL},
	{17828, (BODY_INDEX)-1, 205, NULL},
};

extern void Init1131(void);
void Init1131(void)
{
	IDSC(desc_1131, 0, 1130);
	IDSC(desc_1131 + 1, 1, 1130);
	IDSC(desc_1131 + 32, 836, 1130);
}


#ifdef __cplusplus
}
#endif
