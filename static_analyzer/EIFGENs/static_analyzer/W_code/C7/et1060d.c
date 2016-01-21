/*
 * Class ETF_ABSTRACT_UI_INTERFACE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1060 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1060 [] = {0xFF11,236,0xFF12,1059,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1060 [] = {0xFF11,1059,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1060 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1060 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1060 [] = {0xFF11,1059,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1060 [] = {0xFF11,1059,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1060 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1060 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1060 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1060 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1060 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1060 [] = {0xFF11,1059,0xFFFF};
static EIF_TYPE_INDEX gen_type13_1060 [] = {0xFF11,249,0xFF11,1465,0xFFFF};
static EIF_TYPE_INDEX gen_type14_1060 [] = {0xFF11,1963,0xFF11,0xFFF9,1,173,0xFF11,1465,0xFFFF};


static struct desc_info desc_1060[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1060},
	{1, (BODY_INDEX)-1, 236, gen_type1_1060},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1059, gen_type2_1060},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1060},
	{14, (BODY_INDEX)-1, 0, gen_type4_1060},
	{15, (BODY_INDEX)-1, 1059, gen_type5_1060},
	{16, (BODY_INDEX)-1, 1059, gen_type6_1060},
	{17, (BODY_INDEX)-1, 0, gen_type7_1060},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_1060},
	{21, (BODY_INDEX)-1, 219, gen_type9_1060},
	{22, (BODY_INDEX)-1, 219, gen_type10_1060},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_1060},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1059, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1059, gen_type12_1060},
	{17001, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{17002, 0, 249, gen_type13_1060},
	{17003, 8, 1963, gen_type14_1060},
	{17004, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{17005, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init1060(void);
void Init1060(void)
{
	IDSC(desc_1060, 0, 1059);
	IDSC(desc_1060 + 1, 1, 1059);
	IDSC(desc_1060 + 32, 375, 1059);
}


#ifdef __cplusplus
}
#endif
