/*
 * Class WEL_TTN_CONSTANTS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_953 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_953 [] = {0xFF11,236,0xFF12,952,0xFFFF};
static EIF_TYPE_INDEX gen_type2_953 [] = {0xFF11,952,0xFFFF};
static EIF_TYPE_INDEX gen_type3_953 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_953 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_953 [] = {0xFF11,952,0xFFFF};
static EIF_TYPE_INDEX gen_type6_953 [] = {0xFF11,952,0xFFFF};
static EIF_TYPE_INDEX gen_type7_953 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_953 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_953 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_953 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_953 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_953 [] = {0xFF11,952,0xFFFF};


static struct desc_info desc_953[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_953},
	{1, (BODY_INDEX)-1, 236, gen_type1_953},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 952, gen_type2_953},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_953},
	{14, (BODY_INDEX)-1, 0, gen_type4_953},
	{15, (BODY_INDEX)-1, 952, gen_type5_953},
	{16, (BODY_INDEX)-1, 952, gen_type6_953},
	{17, (BODY_INDEX)-1, 0, gen_type7_953},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_953},
	{21, (BODY_INDEX)-1, 219, gen_type9_953},
	{22, (BODY_INDEX)-1, 219, gen_type10_953},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_953},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 952, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 952, gen_type12_953},
	{15544, (BODY_INDEX)-1, 205, NULL},
	{15545, (BODY_INDEX)-1, 205, NULL},
	{15546, (BODY_INDEX)-1, 205, NULL},
};

extern void Init953(void);
void Init953(void)
{
	IDSC(desc_953, 0, 952);
	IDSC(desc_953 + 1, 1, 952);
	IDSC(desc_953 + 32, 1403, 952);
}


#ifdef __cplusplus
}
#endif
