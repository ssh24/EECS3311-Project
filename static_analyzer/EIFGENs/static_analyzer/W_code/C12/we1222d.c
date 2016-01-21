/*
 * Class WEL_BM_CONSTANTS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1222 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1222 [] = {0xFF11,236,0xFF12,1221,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1222 [] = {0xFF11,1221,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1222 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1222 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1222 [] = {0xFF11,1221,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1222 [] = {0xFF11,1221,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1222 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1222 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1222 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1222 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1222 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1222 [] = {0xFF11,1221,0xFFFF};


static struct desc_info desc_1222[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1222},
	{1, (BODY_INDEX)-1, 236, gen_type1_1222},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1221, gen_type2_1222},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1222},
	{14, (BODY_INDEX)-1, 0, gen_type4_1222},
	{15, (BODY_INDEX)-1, 1221, gen_type5_1222},
	{16, (BODY_INDEX)-1, 1221, gen_type6_1222},
	{17, (BODY_INDEX)-1, 0, gen_type7_1222},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_1222},
	{21, (BODY_INDEX)-1, 219, gen_type9_1222},
	{22, (BODY_INDEX)-1, 219, gen_type10_1222},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_1222},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1221, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1221, gen_type12_1222},
	{18666, (BODY_INDEX)-1, 205, NULL},
	{18667, (BODY_INDEX)-1, 205, NULL},
	{18668, (BODY_INDEX)-1, 205, NULL},
	{18669, (BODY_INDEX)-1, 205, NULL},
	{18670, (BODY_INDEX)-1, 205, NULL},
	{18671, (BODY_INDEX)-1, 205, NULL},
	{18672, (BODY_INDEX)-1, 205, NULL},
	{18673, (BODY_INDEX)-1, 205, NULL},
};

extern void Init1222(void);
void Init1222(void)
{
	IDSC(desc_1222, 0, 1221);
	IDSC(desc_1222 + 1, 1, 1221);
	IDSC(desc_1222 + 32, 810, 1221);
}


#ifdef __cplusplus
}
#endif
