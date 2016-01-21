/*
 * Class WEL_LOCK
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1008 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1008 [] = {0xFF11,236,0xFF12,1007,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1008 [] = {0xFF11,1007,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1008 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1008 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1008 [] = {0xFF11,1007,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1008 [] = {0xFF11,1007,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1008 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1008 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1008 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1008 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1008 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1008 [] = {0xFF11,1007,0xFFFF};


static struct desc_info desc_1008[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1008},
	{1, (BODY_INDEX)-1, 236, gen_type1_1008},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1007, gen_type2_1008},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1008},
	{14, (BODY_INDEX)-1, 0, gen_type4_1008},
	{15, (BODY_INDEX)-1, 1007, gen_type5_1008},
	{16, (BODY_INDEX)-1, 1007, gen_type6_1008},
	{17, (BODY_INDEX)-1, 0, gen_type7_1008},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_1008},
	{21, (BODY_INDEX)-1, 219, gen_type9_1008},
	{22, (BODY_INDEX)-1, 219, gen_type10_1008},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_1008},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1007, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1007, gen_type12_1008},
	{16312, (BODY_INDEX)-1, 214, NULL},
	{16313, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init1008(void);
void Init1008(void)
{
	IDSC(desc_1008, 0, 1007);
	IDSC(desc_1008 + 1, 1, 1007);
	IDSC(desc_1008 + 32, 1025, 1007);
}


#ifdef __cplusplus
}
#endif
