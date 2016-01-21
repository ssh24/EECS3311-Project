/*
 * Class WEL_TCN_CONSTANTS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_947 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_947 [] = {0xFF11,236,0xFF12,946,0xFFFF};
static EIF_TYPE_INDEX gen_type2_947 [] = {0xFF11,946,0xFFFF};
static EIF_TYPE_INDEX gen_type3_947 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_947 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_947 [] = {0xFF11,946,0xFFFF};
static EIF_TYPE_INDEX gen_type6_947 [] = {0xFF11,946,0xFFFF};
static EIF_TYPE_INDEX gen_type7_947 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_947 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_947 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_947 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_947 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_947 [] = {0xFF11,946,0xFFFF};


static struct desc_info desc_947[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_947},
	{1, (BODY_INDEX)-1, 236, gen_type1_947},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 946, gen_type2_947},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_947},
	{14, (BODY_INDEX)-1, 0, gen_type4_947},
	{15, (BODY_INDEX)-1, 946, gen_type5_947},
	{16, (BODY_INDEX)-1, 946, gen_type6_947},
	{17, (BODY_INDEX)-1, 0, gen_type7_947},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_947},
	{21, (BODY_INDEX)-1, 219, gen_type9_947},
	{22, (BODY_INDEX)-1, 219, gen_type10_947},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_947},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 946, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 946, gen_type12_947},
	{15489, (BODY_INDEX)-1, 205, NULL},
	{15490, (BODY_INDEX)-1, 205, NULL},
	{15491, (BODY_INDEX)-1, 205, NULL},
};

extern void Init947(void);
void Init947(void)
{
	IDSC(desc_947, 0, 946);
	IDSC(desc_947 + 1, 1, 946);
	IDSC(desc_947 + 32, 1434, 946);
}


#ifdef __cplusplus
}
#endif
