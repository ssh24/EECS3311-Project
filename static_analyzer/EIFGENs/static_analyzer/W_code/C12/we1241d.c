/*
 * Class WEL_SHARED_METRICS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1241 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1241 [] = {0xFF11,236,0xFF12,1240,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1241 [] = {0xFF11,1240,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1241 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1241 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1241 [] = {0xFF11,1240,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1241 [] = {0xFF11,1240,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1241 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1241 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1241 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1241 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1241 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1241 [] = {0xFF11,1240,0xFFFF};
static EIF_TYPE_INDEX gen_type13_1241 [] = {0xFF11,1787,0xFFFF};


static struct desc_info desc_1241[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1241},
	{1, (BODY_INDEX)-1, 236, gen_type1_1241},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1240, gen_type2_1241},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1241},
	{14, (BODY_INDEX)-1, 0, gen_type4_1241},
	{15, (BODY_INDEX)-1, 1240, gen_type5_1241},
	{16, (BODY_INDEX)-1, 1240, gen_type6_1241},
	{17, (BODY_INDEX)-1, 0, gen_type7_1241},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_1241},
	{21, (BODY_INDEX)-1, 219, gen_type9_1241},
	{22, (BODY_INDEX)-1, 219, gen_type10_1241},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_1241},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1240, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1240, gen_type12_1241},
	{19217, (BODY_INDEX)-1, 1787, gen_type13_1241},
};

extern void Init1241(void);
void Init1241(void)
{
	IDSC(desc_1241, 0, 1240);
	IDSC(desc_1241 + 1, 1, 1240);
	IDSC(desc_1241 + 32, 788, 1240);
}


#ifdef __cplusplus
}
#endif
