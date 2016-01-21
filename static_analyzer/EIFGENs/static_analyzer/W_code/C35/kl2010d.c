/*
 * Class KL_ARRAY_ROUTINES [INTEGER_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_2010 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_2010 [] = {0xFF11,236,0xFF12,2009,205,0xFFFF};
static EIF_TYPE_INDEX gen_type2_2010 [] = {0xFF11,2009,205,0xFFFF};
static EIF_TYPE_INDEX gen_type3_2010 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_2010 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_2010 [] = {0xFF11,2009,205,0xFFFF};
static EIF_TYPE_INDEX gen_type6_2010 [] = {0xFF11,2009,205,0xFFFF};
static EIF_TYPE_INDEX gen_type7_2010 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_2010 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_2010 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_2010 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_2010 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_2010 [] = {2009,205,0xFFFF};
static EIF_TYPE_INDEX gen_type13_2010 [] = {0xFF11,2009,205,0xFFFF};
static EIF_TYPE_INDEX gen_type14_2010 [] = {0xFF11,917,0xFFFF};
static EIF_TYPE_INDEX gen_type15_2010 [] = {0xFF11,296,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type16_2010 [] = {0xFF11,296,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type17_2010 [] = {0xFF11,296,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type18_2010 [] = {0xFF11,296,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type19_2010 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_2010[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_2010},
	{1, (BODY_INDEX)-1, 236, gen_type1_2010},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 2009, gen_type2_2010},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_2010},
	{14, (BODY_INDEX)-1, 0, gen_type4_2010},
	{15, (BODY_INDEX)-1, 2009, gen_type5_2010},
	{16, (BODY_INDEX)-1, 2009, gen_type6_2010},
	{17, (BODY_INDEX)-1, 0, gen_type7_2010},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_2010},
	{21, (BODY_INDEX)-1, 219, gen_type9_2010},
	{22, (BODY_INDEX)-1, 219, gen_type10_2010},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_2010},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 2009, gen_type12_2010},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 2009, gen_type13_2010},
	{22211, (BODY_INDEX)-1, 917, gen_type14_2010},
	{22373, (BODY_INDEX)-1, 296, gen_type15_2010},
	{22374, (BODY_INDEX)-1, 296, gen_type16_2010},
	{22375, (BODY_INDEX)-1, 190, NULL},
	{22376, (BODY_INDEX)-1, 190, NULL},
	{22377, (BODY_INDEX)-1, 296, gen_type17_2010},
	{22378, (BODY_INDEX)-1, 296, gen_type18_2010},
	{22371, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{22372, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type19_2010},
};

extern void Init2010(void);
void Init2010(void)
{
	IDSC(desc_2010, 0, 2009);
	IDSC(desc_2010 + 1, 1, 2009);
	IDSC(desc_2010 + 32, 603, 2009);
	IDSC(desc_2010 + 33, 524, 2009);
}


#ifdef __cplusplus
}
#endif
