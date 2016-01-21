/*
 * Class WEL_ICC_CONSTANTS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1125 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1125 [] = {0xFF11,236,0xFF12,1124,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1125 [] = {0xFF11,1124,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1125 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1125 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1125 [] = {0xFF11,1124,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1125 [] = {0xFF11,1124,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1125 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1125 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1125 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1125 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1125 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1125 [] = {0xFF11,1124,0xFFFF};


static struct desc_info desc_1125[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1125},
	{1, (BODY_INDEX)-1, 236, gen_type1_1125},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1124, gen_type2_1125},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1125},
	{14, (BODY_INDEX)-1, 0, gen_type4_1125},
	{15, (BODY_INDEX)-1, 1124, gen_type5_1125},
	{16, (BODY_INDEX)-1, 1124, gen_type6_1125},
	{17, (BODY_INDEX)-1, 0, gen_type7_1125},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_1125},
	{21, (BODY_INDEX)-1, 219, gen_type9_1125},
	{22, (BODY_INDEX)-1, 219, gen_type10_1125},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_1125},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1124, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1124, gen_type12_1125},
	{17793, (BODY_INDEX)-1, 205, NULL},
	{17794, (BODY_INDEX)-1, 205, NULL},
	{17795, (BODY_INDEX)-1, 205, NULL},
	{17796, (BODY_INDEX)-1, 205, NULL},
	{17797, (BODY_INDEX)-1, 205, NULL},
	{17798, (BODY_INDEX)-1, 205, NULL},
	{17799, (BODY_INDEX)-1, 205, NULL},
	{17800, (BODY_INDEX)-1, 205, NULL},
	{17801, (BODY_INDEX)-1, 205, NULL},
	{17802, (BODY_INDEX)-1, 205, NULL},
	{17803, (BODY_INDEX)-1, 205, NULL},
	{17804, (BODY_INDEX)-1, 205, NULL},
};

extern void Init1125(void);
void Init1125(void)
{
	IDSC(desc_1125, 0, 1124);
	IDSC(desc_1125 + 1, 1, 1124);
	IDSC(desc_1125 + 32, 891, 1124);
}


#ifdef __cplusplus
}
#endif
