/*
 * Class WEL_IDI_CONSTANTS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1026 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1026 [] = {0xFF11,236,0xFF12,1025,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1026 [] = {0xFF11,1025,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1026 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1026 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1026 [] = {0xFF11,1025,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1026 [] = {0xFF11,1025,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1026 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1026 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1026 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1026 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1026 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1026 [] = {0xFF11,1025,0xFFFF};


static struct desc_info desc_1026[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1026},
	{1, (BODY_INDEX)-1, 236, gen_type1_1026},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1025, gen_type2_1026},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1026},
	{14, (BODY_INDEX)-1, 0, gen_type4_1026},
	{15, (BODY_INDEX)-1, 1025, gen_type5_1026},
	{16, (BODY_INDEX)-1, 1025, gen_type6_1026},
	{17, (BODY_INDEX)-1, 0, gen_type7_1026},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_1026},
	{21, (BODY_INDEX)-1, 219, gen_type9_1026},
	{22, (BODY_INDEX)-1, 219, gen_type10_1026},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_1026},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1025, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1025, gen_type12_1026},
	{16709, (BODY_INDEX)-1, 214, NULL},
	{16710, (BODY_INDEX)-1, 214, NULL},
	{16711, (BODY_INDEX)-1, 214, NULL},
	{16712, (BODY_INDEX)-1, 214, NULL},
	{16713, (BODY_INDEX)-1, 214, NULL},
	{16714, (BODY_INDEX)-1, 214, NULL},
	{16715, (BODY_INDEX)-1, 214, NULL},
	{16716, (BODY_INDEX)-1, 214, NULL},
};

extern void Init1026(void);
void Init1026(void)
{
	IDSC(desc_1026, 0, 1025);
	IDSC(desc_1026 + 1, 1, 1025);
	IDSC(desc_1026 + 32, 860, 1025);
}


#ifdef __cplusplus
}
#endif
