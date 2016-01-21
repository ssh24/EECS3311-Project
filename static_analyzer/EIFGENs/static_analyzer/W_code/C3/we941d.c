/*
 * Class WEL_MK_CONSTANTS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_941 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_941 [] = {0xFF11,236,0xFF12,940,0xFFFF};
static EIF_TYPE_INDEX gen_type2_941 [] = {0xFF11,940,0xFFFF};
static EIF_TYPE_INDEX gen_type3_941 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_941 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_941 [] = {0xFF11,940,0xFFFF};
static EIF_TYPE_INDEX gen_type6_941 [] = {0xFF11,940,0xFFFF};
static EIF_TYPE_INDEX gen_type7_941 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_941 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_941 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_941 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_941 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_941 [] = {0xFF11,940,0xFFFF};


static struct desc_info desc_941[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_941},
	{1, (BODY_INDEX)-1, 236, gen_type1_941},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 940, gen_type2_941},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_941},
	{14, (BODY_INDEX)-1, 0, gen_type4_941},
	{15, (BODY_INDEX)-1, 940, gen_type5_941},
	{16, (BODY_INDEX)-1, 940, gen_type6_941},
	{17, (BODY_INDEX)-1, 0, gen_type7_941},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_941},
	{21, (BODY_INDEX)-1, 219, gen_type9_941},
	{22, (BODY_INDEX)-1, 219, gen_type10_941},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_941},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 940, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 940, gen_type12_941},
	{15425, (BODY_INDEX)-1, 205, NULL},
	{15426, (BODY_INDEX)-1, 205, NULL},
	{15427, (BODY_INDEX)-1, 205, NULL},
	{15428, (BODY_INDEX)-1, 205, NULL},
	{15429, (BODY_INDEX)-1, 205, NULL},
};

extern void Init941(void);
void Init941(void)
{
	IDSC(desc_941, 0, 940);
	IDSC(desc_941 + 1, 1, 940);
	IDSC(desc_941 + 32, 1444, 940);
}


#ifdef __cplusplus
}
#endif
