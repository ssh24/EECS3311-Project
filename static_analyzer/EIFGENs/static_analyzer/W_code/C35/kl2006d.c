/*
 * Class KL_ARRAY_ROUTINES [REAL_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_2006 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_2006 [] = {0xFF11,236,0xFF12,2005,178,0xFFFF};
static EIF_TYPE_INDEX gen_type2_2006 [] = {0xFF11,2005,178,0xFFFF};
static EIF_TYPE_INDEX gen_type3_2006 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_2006 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_2006 [] = {0xFF11,2005,178,0xFFFF};
static EIF_TYPE_INDEX gen_type6_2006 [] = {0xFF11,2005,178,0xFFFF};
static EIF_TYPE_INDEX gen_type7_2006 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_2006 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_2006 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_2006 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_2006 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_2006 [] = {2005,178,0xFFFF};
static EIF_TYPE_INDEX gen_type13_2006 [] = {0xFF11,2005,178,0xFFFF};
static EIF_TYPE_INDEX gen_type14_2006 [] = {0xFF11,917,0xFFFF};
static EIF_TYPE_INDEX gen_type15_2006 [] = {0xFF11,594,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type16_2006 [] = {0xFF11,594,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type17_2006 [] = {0xFF11,594,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type18_2006 [] = {0xFF11,594,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type19_2006 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_2006[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_2006},
	{1, (BODY_INDEX)-1, 236, gen_type1_2006},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 2005, gen_type2_2006},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_2006},
	{14, (BODY_INDEX)-1, 0, gen_type4_2006},
	{15, (BODY_INDEX)-1, 2005, gen_type5_2006},
	{16, (BODY_INDEX)-1, 2005, gen_type6_2006},
	{17, (BODY_INDEX)-1, 0, gen_type7_2006},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_2006},
	{21, (BODY_INDEX)-1, 219, gen_type9_2006},
	{22, (BODY_INDEX)-1, 219, gen_type10_2006},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_2006},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 2005, gen_type12_2006},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 2005, gen_type13_2006},
	{22211, (BODY_INDEX)-1, 917, gen_type14_2006},
	{22365, (BODY_INDEX)-1, 594, gen_type15_2006},
	{22366, (BODY_INDEX)-1, 594, gen_type16_2006},
	{22367, (BODY_INDEX)-1, 190, NULL},
	{22368, (BODY_INDEX)-1, 190, NULL},
	{22369, (BODY_INDEX)-1, 594, gen_type17_2006},
	{22370, (BODY_INDEX)-1, 594, gen_type18_2006},
	{22363, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{22364, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type19_2006},
};

extern void Init2006(void);
void Init2006(void)
{
	IDSC(desc_2006, 0, 2005);
	IDSC(desc_2006 + 1, 1, 2005);
	IDSC(desc_2006 + 32, 603, 2005);
	IDSC(desc_2006 + 33, 524, 2005);
}


#ifdef __cplusplus
}
#endif
