/*
 * Class KL_SPECIAL_ROUTINES [REAL_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_2005 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_2005 [] = {0xFF11,236,0xFF12,2004,178,0xFFFF};
static EIF_TYPE_INDEX gen_type2_2005 [] = {0xFF11,2004,178,0xFFFF};
static EIF_TYPE_INDEX gen_type3_2005 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_2005 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_2005 [] = {0xFF11,2004,178,0xFFFF};
static EIF_TYPE_INDEX gen_type6_2005 [] = {0xFF11,2004,178,0xFFFF};
static EIF_TYPE_INDEX gen_type7_2005 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_2005 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_2005 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_2005 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_2005 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_2005 [] = {2004,178,0xFFFF};
static EIF_TYPE_INDEX gen_type13_2005 [] = {0xFF11,2004,178,0xFFFF};
static EIF_TYPE_INDEX gen_type14_2005 [] = {0xFF11,588,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_2005 [] = {0xFF11,588,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type16_2005 [] = {0xFF11,588,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type17_2005 [] = {0xFF11,588,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type18_2005 [] = {0xFF11,588,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type19_2005 [] = {0xFF11,588,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type20_2005 [] = {0xFF11,588,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type21_2005 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_2005[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_2005},
	{1, (BODY_INDEX)-1, 236, gen_type1_2005},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 2004, gen_type2_2005},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_2005},
	{14, (BODY_INDEX)-1, 0, gen_type4_2005},
	{15, (BODY_INDEX)-1, 2004, gen_type5_2005},
	{16, (BODY_INDEX)-1, 2004, gen_type6_2005},
	{17, (BODY_INDEX)-1, 0, gen_type7_2005},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_2005},
	{21, (BODY_INDEX)-1, 219, gen_type9_2005},
	{22, (BODY_INDEX)-1, 219, gen_type10_2005},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_2005},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 2004, gen_type12_2005},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 2004, gen_type13_2005},
	{15263, (BODY_INDEX)-1, 588, gen_type14_2005},
	{15264, (BODY_INDEX)-1, 588, gen_type15_2005},
	{15265, (BODY_INDEX)-1, 588, gen_type16_2005},
	{15256, (BODY_INDEX)-1, 588, gen_type17_2005},
	{15257, (BODY_INDEX)-1, 190, NULL},
	{15258, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{15259, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{15260, (BODY_INDEX)-1, 588, gen_type18_2005},
	{15261, (BODY_INDEX)-1, 588, gen_type19_2005},
	{15262, (BODY_INDEX)-1, 588, gen_type20_2005},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type21_2005},
};

extern void Init2005(void);
void Init2005(void)
{
	IDSC(desc_2005, 0, 2004);
	IDSC(desc_2005 + 1, 1, 2004);
	IDSC(desc_2005 + 32, 482, 2004);
}


#ifdef __cplusplus
}
#endif
