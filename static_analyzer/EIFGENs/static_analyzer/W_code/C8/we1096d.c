/*
 * Class WEL_BN_CONSTANTS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1096 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1096 [] = {0xFF11,236,0xFF12,1095,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1096 [] = {0xFF11,1095,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1096 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1096 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1096 [] = {0xFF11,1095,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1096 [] = {0xFF11,1095,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1096 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1096 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1096 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1096 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1096 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1096 [] = {0xFF11,1095,0xFFFF};


static struct desc_info desc_1096[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1096},
	{1, (BODY_INDEX)-1, 236, gen_type1_1096},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1095, gen_type2_1096},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1096},
	{14, (BODY_INDEX)-1, 0, gen_type4_1096},
	{15, (BODY_INDEX)-1, 1095, gen_type5_1096},
	{16, (BODY_INDEX)-1, 1095, gen_type6_1096},
	{17, (BODY_INDEX)-1, 0, gen_type7_1096},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_1096},
	{21, (BODY_INDEX)-1, 219, gen_type9_1096},
	{22, (BODY_INDEX)-1, 219, gen_type10_1096},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_1096},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1095, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1095, gen_type12_1096},
	{17346, (BODY_INDEX)-1, 205, NULL},
	{17347, (BODY_INDEX)-1, 205, NULL},
	{17348, (BODY_INDEX)-1, 205, NULL},
	{17349, (BODY_INDEX)-1, 205, NULL},
	{17350, (BODY_INDEX)-1, 205, NULL},
	{17351, (BODY_INDEX)-1, 205, NULL},
	{17352, (BODY_INDEX)-1, 205, NULL},
	{17353, (BODY_INDEX)-1, 205, NULL},
};

extern void Init1096(void);
void Init1096(void)
{
	IDSC(desc_1096, 0, 1095);
	IDSC(desc_1096 + 1, 1, 1095);
	IDSC(desc_1096 + 32, 1239, 1095);
}


#ifdef __cplusplus
}
#endif
