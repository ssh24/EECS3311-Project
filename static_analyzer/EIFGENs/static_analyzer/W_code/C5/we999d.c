/*
 * Class WEL_FONT_QUALITY_CONSTANTS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_999 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_999 [] = {0xFF11,236,0xFF12,998,0xFFFF};
static EIF_TYPE_INDEX gen_type2_999 [] = {0xFF11,998,0xFFFF};
static EIF_TYPE_INDEX gen_type3_999 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_999 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_999 [] = {0xFF11,998,0xFFFF};
static EIF_TYPE_INDEX gen_type6_999 [] = {0xFF11,998,0xFFFF};
static EIF_TYPE_INDEX gen_type7_999 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_999 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_999 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_999 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_999 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_999 [] = {0xFF11,998,0xFFFF};


static struct desc_info desc_999[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_999},
	{1, (BODY_INDEX)-1, 236, gen_type1_999},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 998, gen_type2_999},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_999},
	{14, (BODY_INDEX)-1, 0, gen_type4_999},
	{15, (BODY_INDEX)-1, 998, gen_type5_999},
	{16, (BODY_INDEX)-1, 998, gen_type6_999},
	{17, (BODY_INDEX)-1, 0, gen_type7_999},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_999},
	{21, (BODY_INDEX)-1, 219, gen_type9_999},
	{22, (BODY_INDEX)-1, 219, gen_type10_999},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_999},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 998, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 998, gen_type12_999},
	{16064, (BODY_INDEX)-1, 205, NULL},
	{16065, (BODY_INDEX)-1, 205, NULL},
	{16066, (BODY_INDEX)-1, 205, NULL},
	{16067, (BODY_INDEX)-1, 205, NULL},
	{16068, (BODY_INDEX)-1, 205, NULL},
	{16069, (BODY_INDEX)-1, 205, NULL},
};

extern void Init999(void);
void Init999(void)
{
	IDSC(desc_999, 0, 998);
	IDSC(desc_999 + 1, 1, 998);
	IDSC(desc_999 + 32, 1066, 998);
}


#ifdef __cplusplus
}
#endif
