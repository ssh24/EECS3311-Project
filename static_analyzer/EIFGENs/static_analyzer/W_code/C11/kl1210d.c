/*
 * Class KL_OPERATING_SYSTEM
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1210 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1210 [] = {0xFF11,236,0xFF12,1209,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1210 [] = {0xFF11,1209,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1210 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1210 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1210 [] = {0xFF11,1209,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1210 [] = {0xFF11,1209,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1210 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1210 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1210 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1210 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1210 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1210 [] = {0xFF11,1209,0xFFFF};
static EIF_TYPE_INDEX gen_type13_1210 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type14_1210 [] = {0xFF11,160,0xFFFF};


static struct desc_info desc_1210[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1210},
	{1, (BODY_INDEX)-1, 236, gen_type1_1210},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1209, gen_type2_1210},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1210},
	{14, (BODY_INDEX)-1, 0, gen_type4_1210},
	{15, (BODY_INDEX)-1, 1209, gen_type5_1210},
	{16, (BODY_INDEX)-1, 1209, gen_type6_1210},
	{17, (BODY_INDEX)-1, 0, gen_type7_1210},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_1210},
	{21, (BODY_INDEX)-1, 219, gen_type9_1210},
	{22, (BODY_INDEX)-1, 219, gen_type10_1210},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_1210},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1209, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1209, gen_type12_1210},
	{18523, (BODY_INDEX)-1, 190, NULL},
	{18524, (BODY_INDEX)-1, 190, NULL},
	{18525, (BODY_INDEX)-1, 190, NULL},
	{18526, (BODY_INDEX)-1, 219, gen_type13_1210},
	{18527, (BODY_INDEX)-1, 219, NULL},
	{18528, (BODY_INDEX)-1, 160, gen_type14_1210},
};

extern void Init1210(void);
void Init1210(void)
{
	IDSC(desc_1210, 0, 1209);
	IDSC(desc_1210 + 1, 1, 1209);
	IDSC(desc_1210 + 32, 1048, 1209);
}


#ifdef __cplusplus
}
#endif
