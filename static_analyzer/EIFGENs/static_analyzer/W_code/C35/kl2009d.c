/*
 * Class KL_SPECIAL_ROUTINES [INTEGER_32]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_2009 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_2009 [] = {0xFF11,236,0xFF12,2008,205,0xFFFF};
static EIF_TYPE_INDEX gen_type2_2009 [] = {0xFF11,2008,205,0xFFFF};
static EIF_TYPE_INDEX gen_type3_2009 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_2009 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_2009 [] = {0xFF11,2008,205,0xFFFF};
static EIF_TYPE_INDEX gen_type6_2009 [] = {0xFF11,2008,205,0xFFFF};
static EIF_TYPE_INDEX gen_type7_2009 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_2009 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_2009 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_2009 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_2009 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_2009 [] = {2008,205,0xFFFF};
static EIF_TYPE_INDEX gen_type13_2009 [] = {0xFF11,2008,205,0xFFFF};
static EIF_TYPE_INDEX gen_type14_2009 [] = {0xFF11,294,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_2009 [] = {0xFF11,294,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type16_2009 [] = {0xFF11,294,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type17_2009 [] = {0xFF11,294,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type18_2009 [] = {0xFF11,294,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type19_2009 [] = {0xFF11,294,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type20_2009 [] = {0xFF11,294,0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type21_2009 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_2009[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_2009},
	{1, (BODY_INDEX)-1, 236, gen_type1_2009},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 2008, gen_type2_2009},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_2009},
	{14, (BODY_INDEX)-1, 0, gen_type4_2009},
	{15, (BODY_INDEX)-1, 2008, gen_type5_2009},
	{16, (BODY_INDEX)-1, 2008, gen_type6_2009},
	{17, (BODY_INDEX)-1, 0, gen_type7_2009},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_2009},
	{21, (BODY_INDEX)-1, 219, gen_type9_2009},
	{22, (BODY_INDEX)-1, 219, gen_type10_2009},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_2009},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 2008, gen_type12_2009},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 2008, gen_type13_2009},
	{15273, (BODY_INDEX)-1, 294, gen_type14_2009},
	{15274, (BODY_INDEX)-1, 294, gen_type15_2009},
	{15275, (BODY_INDEX)-1, 294, gen_type16_2009},
	{15266, (BODY_INDEX)-1, 294, gen_type17_2009},
	{15267, (BODY_INDEX)-1, 190, NULL},
	{15268, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{15269, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{15270, (BODY_INDEX)-1, 294, gen_type18_2009},
	{15271, (BODY_INDEX)-1, 294, gen_type19_2009},
	{15272, (BODY_INDEX)-1, 294, gen_type20_2009},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type21_2009},
};

extern void Init2009(void);
void Init2009(void)
{
	IDSC(desc_2009, 0, 2008);
	IDSC(desc_2009 + 1, 1, 2008);
	IDSC(desc_2009 + 32, 482, 2008);
}


#ifdef __cplusplus
}
#endif
