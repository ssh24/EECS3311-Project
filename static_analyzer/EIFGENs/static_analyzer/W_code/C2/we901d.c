/*
 * Class WEL_CDDS_CONSTANTS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_901 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_901 [] = {0xFF11,236,0xFF12,900,0xFFFF};
static EIF_TYPE_INDEX gen_type2_901 [] = {0xFF11,900,0xFFFF};
static EIF_TYPE_INDEX gen_type3_901 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_901 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_901 [] = {0xFF11,900,0xFFFF};
static EIF_TYPE_INDEX gen_type6_901 [] = {0xFF11,900,0xFFFF};
static EIF_TYPE_INDEX gen_type7_901 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_901 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_901 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_901 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_901 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_901 [] = {0xFF11,900,0xFFFF};


static struct desc_info desc_901[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_901},
	{1, (BODY_INDEX)-1, 236, gen_type1_901},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 900, gen_type2_901},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_901},
	{14, (BODY_INDEX)-1, 0, gen_type4_901},
	{15, (BODY_INDEX)-1, 900, gen_type5_901},
	{16, (BODY_INDEX)-1, 900, gen_type6_901},
	{17, (BODY_INDEX)-1, 0, gen_type7_901},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_901},
	{21, (BODY_INDEX)-1, 219, gen_type9_901},
	{22, (BODY_INDEX)-1, 219, gen_type10_901},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_901},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 900, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 900, gen_type12_901},
	{14573, (BODY_INDEX)-1, 205, NULL},
	{14574, (BODY_INDEX)-1, 205, NULL},
	{14565, (BODY_INDEX)-1, 205, NULL},
	{14566, (BODY_INDEX)-1, 205, NULL},
	{14567, (BODY_INDEX)-1, 205, NULL},
	{14568, (BODY_INDEX)-1, 205, NULL},
	{14569, (BODY_INDEX)-1, 205, NULL},
	{14570, (BODY_INDEX)-1, 205, NULL},
	{14571, (BODY_INDEX)-1, 205, NULL},
	{14572, (BODY_INDEX)-1, 205, NULL},
};

extern void Init901(void);
void Init901(void)
{
	IDSC(desc_901, 0, 900);
	IDSC(desc_901 + 1, 1, 900);
	IDSC(desc_901 + 32, 942, 900);
}


#ifdef __cplusplus
}
#endif
