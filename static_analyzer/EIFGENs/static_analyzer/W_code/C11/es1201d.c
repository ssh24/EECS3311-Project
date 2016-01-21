/*
 * Class ES_TESTABLE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1201 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1201 [] = {0xFF11,236,0xFF12,1200,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1201 [] = {0xFF11,1200,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1201 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1201 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1201 [] = {0xFF11,1200,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1201 [] = {0xFF11,1200,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1201 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1201 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1201 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1201 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1201 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1201 [] = {0xFF11,1200,0xFFFF};
static EIF_TYPE_INDEX gen_type13_1201 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type14_1201 [] = {0xFF11,262,0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type15_1201 [] = {0xFF11,262,0xFF11,219,0xFFFF};


static struct desc_info desc_1201[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1201},
	{1, (BODY_INDEX)-1, 236, gen_type1_1201},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1200, gen_type2_1201},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1201},
	{14, (BODY_INDEX)-1, 0, gen_type4_1201},
	{15, (BODY_INDEX)-1, 1200, gen_type5_1201},
	{16, (BODY_INDEX)-1, 1200, gen_type6_1201},
	{17, (BODY_INDEX)-1, 0, gen_type7_1201},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_1201},
	{21, (BODY_INDEX)-1, 219, gen_type9_1201},
	{22, (BODY_INDEX)-1, 219, gen_type10_1201},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_1201},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1200, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1200, gen_type12_1201},
	{18448, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{18449, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{18450, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{18451, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{18452, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{18453, (BODY_INDEX)-1, 184, NULL},
	{18454, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{18455, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{18456, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{18457, (BODY_INDEX)-1, 219, gen_type13_1201},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 262, gen_type14_1201},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 262, gen_type15_1201},
	{18442, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{18443, 0, 219, NULL},
	{18444, 12, 205, NULL},
	{18445, 16, 205, NULL},
	{18446, 8, 190, NULL},
	{18447, 9, 190, NULL},
};

extern void Init1201(void);
void Init1201(void)
{
	IDSC(desc_1201, 0, 1200);
	IDSC(desc_1201 + 1, 1, 1200);
	IDSC(desc_1201 + 32, 352, 1200);
}


#ifdef __cplusplus
}
#endif
