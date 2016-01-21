/*
 * Class KL_SHARED_OPERATING_SYSTEM
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1003 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1003 [] = {0xFF11,236,0xFF12,1002,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1003 [] = {0xFF11,1002,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1003 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1003 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1003 [] = {0xFF11,1002,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1003 [] = {0xFF11,1002,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1003 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1003 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1003 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1003 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1003 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1003 [] = {0xFF11,1002,0xFFFF};
static EIF_TYPE_INDEX gen_type13_1003 [] = {0xFF11,1209,0xFFFF};


static struct desc_info desc_1003[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1003},
	{1, (BODY_INDEX)-1, 236, gen_type1_1003},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1002, gen_type2_1003},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1003},
	{14, (BODY_INDEX)-1, 0, gen_type4_1003},
	{15, (BODY_INDEX)-1, 1002, gen_type5_1003},
	{16, (BODY_INDEX)-1, 1002, gen_type6_1003},
	{17, (BODY_INDEX)-1, 0, gen_type7_1003},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_1003},
	{21, (BODY_INDEX)-1, 219, gen_type9_1003},
	{22, (BODY_INDEX)-1, 219, gen_type10_1003},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_1003},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1002, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1002, gen_type12_1003},
	{16079, (BODY_INDEX)-1, 1209, gen_type13_1003},
};

extern void Init1003(void);
void Init1003(void)
{
	IDSC(desc_1003, 0, 1002);
	IDSC(desc_1003 + 1, 1, 1002);
	IDSC(desc_1003 + 32, 1040, 1002);
}


#ifdef __cplusplus
}
#endif
