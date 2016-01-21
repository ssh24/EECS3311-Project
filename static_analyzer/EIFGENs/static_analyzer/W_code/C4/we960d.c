/*
 * Class WEL_TVS_CONSTANTS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_960 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_960 [] = {0xFF11,236,0xFF12,959,0xFFFF};
static EIF_TYPE_INDEX gen_type2_960 [] = {0xFF11,959,0xFFFF};
static EIF_TYPE_INDEX gen_type3_960 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_960 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_960 [] = {0xFF11,959,0xFFFF};
static EIF_TYPE_INDEX gen_type6_960 [] = {0xFF11,959,0xFFFF};
static EIF_TYPE_INDEX gen_type7_960 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_960 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_960 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_960 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_960 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_960 [] = {0xFF11,959,0xFFFF};


static struct desc_info desc_960[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_960},
	{1, (BODY_INDEX)-1, 236, gen_type1_960},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 959, gen_type2_960},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_960},
	{14, (BODY_INDEX)-1, 0, gen_type4_960},
	{15, (BODY_INDEX)-1, 959, gen_type5_960},
	{16, (BODY_INDEX)-1, 959, gen_type6_960},
	{17, (BODY_INDEX)-1, 0, gen_type7_960},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_960},
	{21, (BODY_INDEX)-1, 219, gen_type9_960},
	{22, (BODY_INDEX)-1, 219, gen_type10_960},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_960},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 959, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 959, gen_type12_960},
	{15574, (BODY_INDEX)-1, 205, NULL},
	{15575, (BODY_INDEX)-1, 205, NULL},
	{15576, (BODY_INDEX)-1, 205, NULL},
	{15577, (BODY_INDEX)-1, 205, NULL},
	{15578, (BODY_INDEX)-1, 205, NULL},
	{15579, (BODY_INDEX)-1, 205, NULL},
	{15580, (BODY_INDEX)-1, 205, NULL},
	{15581, (BODY_INDEX)-1, 205, NULL},
};

extern void Init960(void);
void Init960(void)
{
	IDSC(desc_960, 0, 959);
	IDSC(desc_960 + 1, 1, 959);
	IDSC(desc_960 + 32, 1374, 959);
}


#ifdef __cplusplus
}
#endif
