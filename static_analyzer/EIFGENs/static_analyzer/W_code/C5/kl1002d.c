/*
 * Class KL_IMPORTED_CHARACTER_ROUTINES
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1002 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1002 [] = {0xFF11,236,0xFF12,1001,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1002 [] = {0xFF11,1001,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1002 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1002 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1002 [] = {0xFF11,1001,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1002 [] = {0xFF11,1001,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1002 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1002 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1002 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1002 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1002 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1002 [] = {0xFF11,1001,0xFFFF};
static EIF_TYPE_INDEX gen_type13_1002 [] = {0xFF11,1033,0xFFFF};


static struct desc_info desc_1002[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1002},
	{1, (BODY_INDEX)-1, 236, gen_type1_1002},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1001, gen_type2_1002},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1002},
	{14, (BODY_INDEX)-1, 0, gen_type4_1002},
	{15, (BODY_INDEX)-1, 1001, gen_type5_1002},
	{16, (BODY_INDEX)-1, 1001, gen_type6_1002},
	{17, (BODY_INDEX)-1, 0, gen_type7_1002},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_1002},
	{21, (BODY_INDEX)-1, 219, gen_type9_1002},
	{22, (BODY_INDEX)-1, 219, gen_type10_1002},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_1002},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1001, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1001, gen_type12_1002},
	{16078, (BODY_INDEX)-1, 1033, gen_type13_1002},
};

extern void Init1002(void);
void Init1002(void)
{
	IDSC(desc_1002, 0, 1001);
	IDSC(desc_1002 + 1, 1, 1001);
	IDSC(desc_1002 + 32, 1042, 1001);
}


#ifdef __cplusplus
}
#endif
