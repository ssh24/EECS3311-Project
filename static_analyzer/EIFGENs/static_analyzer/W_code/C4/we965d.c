/*
 * Class WEL_LVIS_CONSTANTS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_965 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_965 [] = {0xFF11,236,0xFF12,964,0xFFFF};
static EIF_TYPE_INDEX gen_type2_965 [] = {0xFF11,964,0xFFFF};
static EIF_TYPE_INDEX gen_type3_965 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_965 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_965 [] = {0xFF11,964,0xFFFF};
static EIF_TYPE_INDEX gen_type6_965 [] = {0xFF11,964,0xFFFF};
static EIF_TYPE_INDEX gen_type7_965 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_965 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_965 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_965 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_965 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_965 [] = {0xFF11,964,0xFFFF};


static struct desc_info desc_965[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_965},
	{1, (BODY_INDEX)-1, 236, gen_type1_965},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 964, gen_type2_965},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_965},
	{14, (BODY_INDEX)-1, 0, gen_type4_965},
	{15, (BODY_INDEX)-1, 964, gen_type5_965},
	{16, (BODY_INDEX)-1, 964, gen_type6_965},
	{17, (BODY_INDEX)-1, 0, gen_type7_965},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_965},
	{21, (BODY_INDEX)-1, 219, gen_type9_965},
	{22, (BODY_INDEX)-1, 219, gen_type10_965},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_965},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 964, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 964, gen_type12_965},
	{15601, (BODY_INDEX)-1, 205, NULL},
	{15597, (BODY_INDEX)-1, 205, NULL},
	{15598, (BODY_INDEX)-1, 205, NULL},
	{15599, (BODY_INDEX)-1, 205, NULL},
	{15600, (BODY_INDEX)-1, 190, NULL},
};

extern void Init965(void);
void Init965(void)
{
	IDSC(desc_965, 0, 964);
	IDSC(desc_965 + 1, 1, 964);
	IDSC(desc_965 + 32, 1352, 964);
}


#ifdef __cplusplus
}
#endif
