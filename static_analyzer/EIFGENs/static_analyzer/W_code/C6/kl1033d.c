/*
 * Class KL_SHARED_PLATFORM
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1033 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1033 [] = {0xFF11,236,0xFF12,1032,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1033 [] = {0xFF11,1032,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1033 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1033 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1033 [] = {0xFF11,1032,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1033 [] = {0xFF11,1032,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1033 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1033 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1033 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1033 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1033 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1033 [] = {0xFF11,1032,0xFFFF};
static EIF_TYPE_INDEX gen_type13_1033 [] = {0xFF11,1241,0xFFFF};


static struct desc_info desc_1033[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1033},
	{1, (BODY_INDEX)-1, 236, gen_type1_1033},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1032, gen_type2_1033},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1033},
	{14, (BODY_INDEX)-1, 0, gen_type4_1033},
	{15, (BODY_INDEX)-1, 1032, gen_type5_1033},
	{16, (BODY_INDEX)-1, 1032, gen_type6_1033},
	{17, (BODY_INDEX)-1, 0, gen_type7_1033},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_1033},
	{21, (BODY_INDEX)-1, 219, gen_type9_1033},
	{22, (BODY_INDEX)-1, 219, gen_type10_1033},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_1033},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1032, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1032, gen_type12_1033},
	{16760, (BODY_INDEX)-1, 1241, gen_type13_1033},
};

extern void Init1033(void);
void Init1033(void)
{
	IDSC(desc_1033, 0, 1032);
	IDSC(desc_1033 + 1, 1, 1032);
	IDSC(desc_1033 + 32, 611, 1032);
}


#ifdef __cplusplus
}
#endif
