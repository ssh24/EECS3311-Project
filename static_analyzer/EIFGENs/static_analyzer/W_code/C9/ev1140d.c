/*
 * Class EV_BUTTON_ACTION_SEQUENCES_IMP
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1140 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1140 [] = {0xFF11,236,0xFF12,1139,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1140 [] = {0xFF11,1139,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1140 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1140 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1140 [] = {0xFF11,1139,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1140 [] = {0xFF11,1139,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1140 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1140 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1140 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1140 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1140 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1140 [] = {0xFF11,1139,0xFFFF};
static EIF_TYPE_INDEX gen_type13_1140 [] = {0xFF11,1322,0xFFFF};
static EIF_TYPE_INDEX gen_type14_1140 [] = {0xFF11,1322,0xFFFF};


static struct desc_info desc_1140[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1140},
	{1, (BODY_INDEX)-1, 236, gen_type1_1140},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1139, gen_type2_1140},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1140},
	{14, (BODY_INDEX)-1, 0, gen_type4_1140},
	{15, (BODY_INDEX)-1, 1139, gen_type5_1140},
	{16, (BODY_INDEX)-1, 1139, gen_type6_1140},
	{17, (BODY_INDEX)-1, 0, gen_type7_1140},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_1140},
	{21, (BODY_INDEX)-1, 219, gen_type9_1140},
	{22, (BODY_INDEX)-1, 219, gen_type10_1140},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_1140},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1139, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1139, gen_type12_1140},
	{17931, (BODY_INDEX)-1, 1322, gen_type13_1140},
	{17933, (BODY_INDEX)-1, 1322, gen_type14_1140},
	{17932, 0, 1322, NULL},
};

extern void Init1140(void);
void Init1140(void)
{
	IDSC(desc_1140, 0, 1139);
	IDSC(desc_1140 + 1, 1, 1139);
	IDSC(desc_1140 + 32, 801, 1139);
}


#ifdef __cplusplus
}
#endif
