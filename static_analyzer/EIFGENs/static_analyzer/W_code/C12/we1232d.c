/*
 * Class WEL_TVI_CONSTANTS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1232 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1232 [] = {0xFF11,236,0xFF12,1231,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1232 [] = {0xFF11,1231,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1232 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1232 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1232 [] = {0xFF11,1231,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1232 [] = {0xFF11,1231,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1232 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1232 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1232 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1232 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1232 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1232 [] = {0xFF11,1231,0xFFFF};


static struct desc_info desc_1232[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1232},
	{1, (BODY_INDEX)-1, 236, gen_type1_1232},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1231, gen_type2_1232},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1232},
	{14, (BODY_INDEX)-1, 0, gen_type4_1232},
	{15, (BODY_INDEX)-1, 1231, gen_type5_1232},
	{16, (BODY_INDEX)-1, 1231, gen_type6_1232},
	{17, (BODY_INDEX)-1, 0, gen_type7_1232},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_1232},
	{21, (BODY_INDEX)-1, 219, gen_type9_1232},
	{22, (BODY_INDEX)-1, 219, gen_type10_1232},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_1232},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1231, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1231, gen_type12_1232},
	{18802, (BODY_INDEX)-1, 214, NULL},
	{18803, (BODY_INDEX)-1, 214, NULL},
	{18804, (BODY_INDEX)-1, 214, NULL},
	{18805, (BODY_INDEX)-1, 214, NULL},
};

extern void Init1232(void);
void Init1232(void)
{
	IDSC(desc_1232, 0, 1231);
	IDSC(desc_1232 + 1, 1, 1231);
	IDSC(desc_1232 + 32, 1194, 1231);
}


#ifdef __cplusplus
}
#endif
