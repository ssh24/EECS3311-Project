/*
 * Class KL_STANDARD_FILES
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_923 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_923 [] = {0xFF11,236,0xFF12,922,0xFFFF};
static EIF_TYPE_INDEX gen_type2_923 [] = {0xFF11,922,0xFFFF};
static EIF_TYPE_INDEX gen_type3_923 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_923 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_923 [] = {0xFF11,922,0xFFFF};
static EIF_TYPE_INDEX gen_type6_923 [] = {0xFF11,922,0xFFFF};
static EIF_TYPE_INDEX gen_type7_923 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_923 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_923 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_923 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_923 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_923 [] = {0xFF11,922,0xFFFF};
static EIF_TYPE_INDEX gen_type13_923 [] = {0xFF11,1790,0xFFFF};
static EIF_TYPE_INDEX gen_type14_923 [] = {0xFF11,1792,0xFFFF};
static EIF_TYPE_INDEX gen_type15_923 [] = {0xFF11,1791,0xFFFF};


static struct desc_info desc_923[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_923},
	{1, (BODY_INDEX)-1, 236, gen_type1_923},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 922, gen_type2_923},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_923},
	{14, (BODY_INDEX)-1, 0, gen_type4_923},
	{15, (BODY_INDEX)-1, 922, gen_type5_923},
	{16, (BODY_INDEX)-1, 922, gen_type6_923},
	{17, (BODY_INDEX)-1, 0, gen_type7_923},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_923},
	{21, (BODY_INDEX)-1, 219, gen_type9_923},
	{22, (BODY_INDEX)-1, 219, gen_type10_923},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_923},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 922, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 922, gen_type12_923},
	{15163, (BODY_INDEX)-1, 1790, gen_type13_923},
	{15164, (BODY_INDEX)-1, 1792, gen_type14_923},
	{15165, (BODY_INDEX)-1, 1791, gen_type15_923},
};

extern void Init923(void);
void Init923(void)
{
	IDSC(desc_923, 0, 922);
	IDSC(desc_923 + 1, 1, 922);
	IDSC(desc_923 + 32, 613, 922);
}


#ifdef __cplusplus
}
#endif
