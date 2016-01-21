/*
 * Class EV_GAUGE_ACTION_SEQUENCES_IMP
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1075 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1075 [] = {0xFF11,236,0xFF12,1074,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1075 [] = {0xFF11,1074,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1075 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1075 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1075 [] = {0xFF11,1074,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1075 [] = {0xFF11,1074,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1075 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1075 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1075 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1075 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1075 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1075 [] = {0xFF11,1074,0xFFFF};
static EIF_TYPE_INDEX gen_type13_1075 [] = {0xFF11,1306,0xFFFF};
static EIF_TYPE_INDEX gen_type14_1075 [] = {0xFF11,1306,0xFFFF};


static struct desc_info desc_1075[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1075},
	{1, (BODY_INDEX)-1, 236, gen_type1_1075},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1074, gen_type2_1075},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1075},
	{14, (BODY_INDEX)-1, 0, gen_type4_1075},
	{15, (BODY_INDEX)-1, 1074, gen_type5_1075},
	{16, (BODY_INDEX)-1, 1074, gen_type6_1075},
	{17, (BODY_INDEX)-1, 0, gen_type7_1075},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_1075},
	{21, (BODY_INDEX)-1, 219, gen_type9_1075},
	{22, (BODY_INDEX)-1, 219, gen_type10_1075},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_1075},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1074, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1074, gen_type12_1075},
	{17142, (BODY_INDEX)-1, 1306, gen_type13_1075},
	{17144, (BODY_INDEX)-1, 1306, gen_type14_1075},
	{17143, 0, 1306, NULL},
};

extern void Init1075(void);
void Init1075(void)
{
	IDSC(desc_1075, 0, 1074);
	IDSC(desc_1075 + 1, 1, 1074);
	IDSC(desc_1075 + 32, 1393, 1074);
}


#ifdef __cplusplus
}
#endif
