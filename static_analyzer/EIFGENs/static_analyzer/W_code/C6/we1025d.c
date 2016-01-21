/*
 * Class WEL_ICON_CONSTANTS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1025 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1025 [] = {0xFF11,236,0xFF12,1024,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1025 [] = {0xFF11,1024,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1025 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1025 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1025 [] = {0xFF11,1024,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1025 [] = {0xFF11,1024,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1025 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1025 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1025 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1025 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1025 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1025 [] = {0xFF11,1024,0xFFFF};


static struct desc_info desc_1025[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1025},
	{1, (BODY_INDEX)-1, 236, gen_type1_1025},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1024, gen_type2_1025},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1025},
	{14, (BODY_INDEX)-1, 0, gen_type4_1025},
	{15, (BODY_INDEX)-1, 1024, gen_type5_1025},
	{16, (BODY_INDEX)-1, 1024, gen_type6_1025},
	{17, (BODY_INDEX)-1, 0, gen_type7_1025},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_1025},
	{21, (BODY_INDEX)-1, 219, gen_type9_1025},
	{22, (BODY_INDEX)-1, 219, gen_type10_1025},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_1025},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1024, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1024, gen_type12_1025},
	{16707, (BODY_INDEX)-1, 205, NULL},
	{16708, (BODY_INDEX)-1, 205, NULL},
};

extern void Init1025(void);
void Init1025(void)
{
	IDSC(desc_1025, 0, 1024);
	IDSC(desc_1025 + 1, 1, 1024);
	IDSC(desc_1025 + 32, 876, 1024);
}


#ifdef __cplusplus
}
#endif
