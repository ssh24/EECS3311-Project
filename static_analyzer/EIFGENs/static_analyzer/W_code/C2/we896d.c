/*
 * Class WEL_COLOR_MATRIX
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_896 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_896 [] = {0xFF11,236,0xFF12,895,0xFFFF};
static EIF_TYPE_INDEX gen_type2_896 [] = {0xFF11,895,0xFFFF};
static EIF_TYPE_INDEX gen_type3_896 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_896 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_896 [] = {0xFF11,895,0xFFFF};
static EIF_TYPE_INDEX gen_type6_896 [] = {0xFF11,895,0xFFFF};
static EIF_TYPE_INDEX gen_type7_896 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_896 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_896 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_896 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_896 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_896 [] = {0xFF11,895,0xFFFF};
static EIF_TYPE_INDEX gen_type13_896 [] = {0xFF11,594,178,0xFFFF};
static EIF_TYPE_INDEX gen_type14_896 [] = {0xFF11,150,0xFFFF};


static struct desc_info desc_896[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_896},
	{1, (BODY_INDEX)-1, 236, gen_type1_896},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 895, gen_type2_896},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_896},
	{14, (BODY_INDEX)-1, 0, gen_type4_896},
	{15, (BODY_INDEX)-1, 895, gen_type5_896},
	{16, (BODY_INDEX)-1, 895, gen_type6_896},
	{17, (BODY_INDEX)-1, 0, gen_type7_896},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_896},
	{21, (BODY_INDEX)-1, 219, gen_type9_896},
	{22, (BODY_INDEX)-1, 219, gen_type10_896},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_896},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 895, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 895, gen_type12_896},
	{14518, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{14519, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{14520, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{14521, (BODY_INDEX)-1, 205, NULL},
	{14522, (BODY_INDEX)-1, 178, NULL},
	{14523, (BODY_INDEX)-1, 594, gen_type13_896},
	{14524, (BODY_INDEX)-1, 214, NULL},
	{14525, 0, 150, gen_type14_896},
	{14526, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{14527, (BODY_INDEX)-1, 178, NULL},
	{14528, (BODY_INDEX)-1, 205, NULL},
};

extern void Init896(void);
void Init896(void)
{
	IDSC(desc_896, 0, 895);
	IDSC(desc_896 + 1, 1, 895);
	IDSC(desc_896 + 32, 1095, 895);
}


#ifdef __cplusplus
}
#endif
