/*
 * Class WEL_TMPF_CONSTANTS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1000 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1000 [] = {0xFF11,236,0xFF12,999,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1000 [] = {0xFF11,999,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1000 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1000 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1000 [] = {0xFF11,999,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1000 [] = {0xFF11,999,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1000 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1000 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1000 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1000 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1000 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1000 [] = {0xFF11,999,0xFFFF};


static struct desc_info desc_1000[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1000},
	{1, (BODY_INDEX)-1, 236, gen_type1_1000},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 999, gen_type2_1000},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1000},
	{14, (BODY_INDEX)-1, 0, gen_type4_1000},
	{15, (BODY_INDEX)-1, 999, gen_type5_1000},
	{16, (BODY_INDEX)-1, 999, gen_type6_1000},
	{17, (BODY_INDEX)-1, 0, gen_type7_1000},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_1000},
	{21, (BODY_INDEX)-1, 219, gen_type9_1000},
	{22, (BODY_INDEX)-1, 219, gen_type10_1000},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_1000},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 999, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 999, gen_type12_1000},
	{16070, (BODY_INDEX)-1, 205, NULL},
	{16071, (BODY_INDEX)-1, 205, NULL},
	{16072, (BODY_INDEX)-1, 205, NULL},
	{16073, (BODY_INDEX)-1, 205, NULL},
};

extern void Init1000(void);
void Init1000(void)
{
	IDSC(desc_1000, 0, 999);
	IDSC(desc_1000 + 1, 1, 999);
	IDSC(desc_1000 + 32, 1063, 999);
}


#ifdef __cplusplus
}
#endif
