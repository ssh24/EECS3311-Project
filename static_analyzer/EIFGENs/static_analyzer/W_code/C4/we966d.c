/*
 * Class WEL_LVIF_CONSTANTS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_966 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_966 [] = {0xFF11,236,0xFF12,965,0xFFFF};
static EIF_TYPE_INDEX gen_type2_966 [] = {0xFF11,965,0xFFFF};
static EIF_TYPE_INDEX gen_type3_966 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_966 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_966 [] = {0xFF11,965,0xFFFF};
static EIF_TYPE_INDEX gen_type6_966 [] = {0xFF11,965,0xFFFF};
static EIF_TYPE_INDEX gen_type7_966 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_966 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_966 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_966 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_966 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_966 [] = {0xFF11,965,0xFFFF};


static struct desc_info desc_966[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_966},
	{1, (BODY_INDEX)-1, 236, gen_type1_966},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 965, gen_type2_966},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_966},
	{14, (BODY_INDEX)-1, 0, gen_type4_966},
	{15, (BODY_INDEX)-1, 965, gen_type5_966},
	{16, (BODY_INDEX)-1, 965, gen_type6_966},
	{17, (BODY_INDEX)-1, 0, gen_type7_966},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_966},
	{21, (BODY_INDEX)-1, 219, gen_type9_966},
	{22, (BODY_INDEX)-1, 219, gen_type10_966},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_966},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 965, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 965, gen_type12_966},
	{15602, (BODY_INDEX)-1, 205, NULL},
	{15603, (BODY_INDEX)-1, 205, NULL},
	{15604, (BODY_INDEX)-1, 205, NULL},
	{15605, (BODY_INDEX)-1, 205, NULL},
};

extern void Init966(void);
void Init966(void)
{
	IDSC(desc_966, 0, 965);
	IDSC(desc_966 + 1, 1, 965);
	IDSC(desc_966 + 32, 1351, 965);
}


#ifdef __cplusplus
}
#endif
