/*
 * Class DIFFERENCE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1280 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1280 [] = {0xFF11,236,0xFF12,1279,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1280 [] = {0xFF11,1279,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1280 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1280 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1280 [] = {0xFF11,1279,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1280 [] = {0xFF11,1279,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1280 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1280 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1280 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1280 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1280 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1280 [] = {0xFF11,1279,0xFFFF};
static EIF_TYPE_INDEX gen_type13_1280 [] = {0xFF11,1259,0xFFFF};
static EIF_TYPE_INDEX gen_type14_1280 [] = {0xFF11,1259,0xFFFF};
static EIF_TYPE_INDEX gen_type15_1280 [] = {0xFF11,1259,0xFFFF};
static EIF_TYPE_INDEX gen_type16_1280 [] = {0xFF11,219,0xFFFF};


static struct desc_info desc_1280[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1280},
	{1, (BODY_INDEX)-1, 236, gen_type1_1280},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1279, gen_type2_1280},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1280},
	{14, (BODY_INDEX)-1, 0, gen_type4_1280},
	{15, (BODY_INDEX)-1, 1279, gen_type5_1280},
	{16, (BODY_INDEX)-1, 1279, gen_type6_1280},
	{17, (BODY_INDEX)-1, 0, gen_type7_1280},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_1280},
	{21, (BODY_INDEX)-1, 219, gen_type9_1280},
	{22, (BODY_INDEX)-1, 219, gen_type10_1280},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_1280},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1279, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1279, gen_type12_1280},
	{19691, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19692, 0, 1259, gen_type13_1280},
	{19693, 8, 1259, gen_type14_1280},
	{19694, 16, 1259, gen_type15_1280},
	{19695, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19696, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19720, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19722, (BODY_INDEX)-1, 219, gen_type16_1280},
	{19721, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init1280(void);
void Init1280(void)
{
	IDSC(desc_1280, 0, 1279);
	IDSC(desc_1280 + 1, 1, 1279);
	IDSC(desc_1280 + 32, 360, 1279);
	IDSC(desc_1280 + 38, 385, 1279);
	IDSC(desc_1280 + 39, 368, 1279);
}


#ifdef __cplusplus
}
#endif
