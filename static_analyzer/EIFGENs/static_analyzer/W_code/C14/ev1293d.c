/*
 * Class EV_ANY_HANDLER
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1293 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1293 [] = {0xFF11,236,0xFF12,1292,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1293 [] = {0xFF11,1292,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1293 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1293 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1293 [] = {0xFF11,1292,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1293 [] = {0xFF11,1292,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1293 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1293 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1293 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1293 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1293 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1293 [] = {0xFF11,1292,0xFFFF};


static struct desc_info desc_1293[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1293},
	{1, (BODY_INDEX)-1, 236, gen_type1_1293},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1292, gen_type2_1293},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1293},
	{14, (BODY_INDEX)-1, 0, gen_type4_1293},
	{15, (BODY_INDEX)-1, 1292, gen_type5_1293},
	{16, (BODY_INDEX)-1, 1292, gen_type6_1293},
	{17, (BODY_INDEX)-1, 0, gen_type7_1293},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_1293},
	{21, (BODY_INDEX)-1, 219, gen_type9_1293},
	{22, (BODY_INDEX)-1, 219, gen_type10_1293},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_1293},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1292, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1292, gen_type12_1293},
};

extern void Init1293(void);
void Init1293(void)
{
	IDSC(desc_1293, 0, 1292);
	IDSC(desc_1293 + 1, 1, 1292);
}


#ifdef __cplusplus
}
#endif
