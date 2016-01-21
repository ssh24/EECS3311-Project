/*
 * Class WEL_EN_CONSTANTS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1088 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1088 [] = {0xFF11,236,0xFF12,1087,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1088 [] = {0xFF11,1087,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1088 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1088 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1088 [] = {0xFF11,1087,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1088 [] = {0xFF11,1087,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1088 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1088 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1088 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1088 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1088 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1088 [] = {0xFF11,1087,0xFFFF};


static struct desc_info desc_1088[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1088},
	{1, (BODY_INDEX)-1, 236, gen_type1_1088},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1087, gen_type2_1088},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1088},
	{14, (BODY_INDEX)-1, 0, gen_type4_1088},
	{15, (BODY_INDEX)-1, 1087, gen_type5_1088},
	{16, (BODY_INDEX)-1, 1087, gen_type6_1088},
	{17, (BODY_INDEX)-1, 0, gen_type7_1088},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_1088},
	{21, (BODY_INDEX)-1, 219, gen_type9_1088},
	{22, (BODY_INDEX)-1, 219, gen_type10_1088},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_1088},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1087, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1087, gen_type12_1088},
	{17213, (BODY_INDEX)-1, 205, NULL},
	{17214, (BODY_INDEX)-1, 205, NULL},
	{17215, (BODY_INDEX)-1, 205, NULL},
	{17216, (BODY_INDEX)-1, 205, NULL},
	{17217, (BODY_INDEX)-1, 205, NULL},
	{17218, (BODY_INDEX)-1, 205, NULL},
	{17219, (BODY_INDEX)-1, 205, NULL},
	{17220, (BODY_INDEX)-1, 205, NULL},
	{17221, (BODY_INDEX)-1, 205, NULL},
	{17222, (BODY_INDEX)-1, 205, NULL},
};

extern void Init1088(void);
void Init1088(void)
{
	IDSC(desc_1088, 0, 1087);
	IDSC(desc_1088 + 1, 1, 1087);
	IDSC(desc_1088 + 32, 1296, 1087);
}


#ifdef __cplusplus
}
#endif
