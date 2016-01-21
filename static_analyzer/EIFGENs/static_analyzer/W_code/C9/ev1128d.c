/*
 * Class EV_PIXMAP_ACTION_SEQUENCES_I
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1128 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1128 [] = {0xFF11,236,0xFF12,1127,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1128 [] = {0xFF11,1127,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1128 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1128 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1128 [] = {0xFF11,1127,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1128 [] = {0xFF11,1127,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1128 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1128 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1128 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1128 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1128 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1128 [] = {0xFF11,1127,0xFFFF};
static EIF_TYPE_INDEX gen_type13_1128 [] = {0xFF11,1320,0xFFFF};
static EIF_TYPE_INDEX gen_type14_1128 [] = {0xFF11,1320,0xFFFF};


static struct desc_info desc_1128[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1128},
	{1, (BODY_INDEX)-1, 236, gen_type1_1128},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1127, gen_type2_1128},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1128},
	{14, (BODY_INDEX)-1, 0, gen_type4_1128},
	{15, (BODY_INDEX)-1, 1127, gen_type5_1128},
	{16, (BODY_INDEX)-1, 1127, gen_type6_1128},
	{17, (BODY_INDEX)-1, 0, gen_type7_1128},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_1128},
	{21, (BODY_INDEX)-1, 219, gen_type9_1128},
	{22, (BODY_INDEX)-1, 219, gen_type10_1128},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_1128},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1127, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1127, gen_type12_1128},
	{17814, (BODY_INDEX)-1, 1320, gen_type13_1128},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 1320, gen_type14_1128},
	{17815, 0, 1320, NULL},
};

extern void Init1128(void);
void Init1128(void)
{
	IDSC(desc_1128, 0, 1127);
	IDSC(desc_1128 + 1, 1, 1127);
	IDSC(desc_1128 + 32, 845, 1127);
}


#ifdef __cplusplus
}
#endif
