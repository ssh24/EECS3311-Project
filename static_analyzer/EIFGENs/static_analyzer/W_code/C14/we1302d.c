/*
 * Class WEL_ILC_CONSTANTS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1302 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1302 [] = {0xFF11,236,0xFF12,1301,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1302 [] = {0xFF11,1301,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1302 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1302 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1302 [] = {0xFF11,1301,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1302 [] = {0xFF11,1301,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1302 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1302 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1302 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1302 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1302 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1302 [] = {0xFF11,1301,0xFFFF};


static struct desc_info desc_1302[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1302},
	{1, (BODY_INDEX)-1, 236, gen_type1_1302},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1301, gen_type2_1302},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1302},
	{14, (BODY_INDEX)-1, 0, gen_type4_1302},
	{15, (BODY_INDEX)-1, 1301, gen_type5_1302},
	{16, (BODY_INDEX)-1, 1301, gen_type6_1302},
	{17, (BODY_INDEX)-1, 0, gen_type7_1302},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_1302},
	{21, (BODY_INDEX)-1, 219, gen_type9_1302},
	{22, (BODY_INDEX)-1, 219, gen_type10_1302},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_1302},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1301, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1301, gen_type12_1302},
	{19896, (BODY_INDEX)-1, 205, NULL},
	{19897, (BODY_INDEX)-1, 205, NULL},
	{19898, (BODY_INDEX)-1, 205, NULL},
	{19899, (BODY_INDEX)-1, 205, NULL},
	{19900, (BODY_INDEX)-1, 205, NULL},
	{19901, (BODY_INDEX)-1, 205, NULL},
	{19902, (BODY_INDEX)-1, 205, NULL},
	{19903, (BODY_INDEX)-1, 205, NULL},
	{19904, (BODY_INDEX)-1, 205, NULL},
};

extern void Init1302(void);
void Init1302(void)
{
	IDSC(desc_1302, 0, 1301);
	IDSC(desc_1302 + 1, 1, 1301);
	IDSC(desc_1302 + 32, 1195, 1301);
}


#ifdef __cplusplus
}
#endif
