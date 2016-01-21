/*
 * Class EV_GAUGE_ACTION_SEQUENCES
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_955 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_955 [] = {0xFF11,236,0xFF12,954,0xFFFF};
static EIF_TYPE_INDEX gen_type2_955 [] = {0xFF11,954,0xFFFF};
static EIF_TYPE_INDEX gen_type3_955 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_955 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_955 [] = {0xFF11,954,0xFFFF};
static EIF_TYPE_INDEX gen_type6_955 [] = {0xFF11,954,0xFFFF};
static EIF_TYPE_INDEX gen_type7_955 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_955 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_955 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_955 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_955 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_955 [] = {0xFF11,954,0xFFFF};
static EIF_TYPE_INDEX gen_type13_955 [] = {0xFF11,1073,0xFFFF};
static EIF_TYPE_INDEX gen_type14_955 [] = {0xFF11,1306,0xFFFF};


static struct desc_info desc_955[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_955},
	{1, (BODY_INDEX)-1, 236, gen_type1_955},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 954, gen_type2_955},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_955},
	{14, (BODY_INDEX)-1, 0, gen_type4_955},
	{15, (BODY_INDEX)-1, 954, gen_type5_955},
	{16, (BODY_INDEX)-1, 954, gen_type6_955},
	{17, (BODY_INDEX)-1, 0, gen_type7_955},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_955},
	{21, (BODY_INDEX)-1, 219, gen_type9_955},
	{22, (BODY_INDEX)-1, 219, gen_type10_955},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_955},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 954, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 954, gen_type12_955},
	{15551, 0, 1073, gen_type13_955},
	{15552, (BODY_INDEX)-1, 1306, gen_type14_955},
};

extern void Init955(void);
void Init955(void)
{
	IDSC(desc_955, 0, 954);
	IDSC(desc_955 + 1, 1, 954);
	IDSC(desc_955 + 32, 1392, 954);
}


#ifdef __cplusplus
}
#endif
