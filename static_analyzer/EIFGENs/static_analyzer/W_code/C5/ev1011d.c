/*
 * Class EV_DOCKABLE_TARGET_ACTION_SEQUENCES_I
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1011 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1011 [] = {0xFF11,236,0xFF12,1010,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1011 [] = {0xFF11,1010,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1011 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1011 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1011 [] = {0xFF11,1010,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1011 [] = {0xFF11,1010,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1011 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1011 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1011 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1011 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1011 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1011 [] = {0xFF11,1010,0xFFFF};
static EIF_TYPE_INDEX gen_type13_1011 [] = {0xFF11,1314,0xFFFF};


static struct desc_info desc_1011[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1011},
	{1, (BODY_INDEX)-1, 236, gen_type1_1011},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1010, gen_type2_1011},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1011},
	{14, (BODY_INDEX)-1, 0, gen_type4_1011},
	{15, (BODY_INDEX)-1, 1010, gen_type5_1011},
	{16, (BODY_INDEX)-1, 1010, gen_type6_1011},
	{17, (BODY_INDEX)-1, 0, gen_type7_1011},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_1011},
	{21, (BODY_INDEX)-1, 219, gen_type9_1011},
	{22, (BODY_INDEX)-1, 219, gen_type10_1011},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_1011},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1010, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1010, gen_type12_1011},
	{16319, (BODY_INDEX)-1, 1314, gen_type13_1011},
	{16320, 0, 1314, NULL},
};

extern void Init1011(void);
void Init1011(void)
{
	IDSC(desc_1011, 0, 1010);
	IDSC(desc_1011 + 1, 1, 1010);
	IDSC(desc_1011 + 32, 1003, 1010);
}


#ifdef __cplusplus
}
#endif
