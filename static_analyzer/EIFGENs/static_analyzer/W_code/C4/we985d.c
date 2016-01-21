/*
 * Class WEL_SCF_CONSTANTS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_985 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_985 [] = {0xFF11,236,0xFF12,984,0xFFFF};
static EIF_TYPE_INDEX gen_type2_985 [] = {0xFF11,984,0xFFFF};
static EIF_TYPE_INDEX gen_type3_985 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_985 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_985 [] = {0xFF11,984,0xFFFF};
static EIF_TYPE_INDEX gen_type6_985 [] = {0xFF11,984,0xFFFF};
static EIF_TYPE_INDEX gen_type7_985 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_985 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_985 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_985 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_985 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_985 [] = {0xFF11,984,0xFFFF};


static struct desc_info desc_985[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_985},
	{1, (BODY_INDEX)-1, 236, gen_type1_985},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 984, gen_type2_985},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_985},
	{14, (BODY_INDEX)-1, 0, gen_type4_985},
	{15, (BODY_INDEX)-1, 984, gen_type5_985},
	{16, (BODY_INDEX)-1, 984, gen_type6_985},
	{17, (BODY_INDEX)-1, 0, gen_type7_985},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_985},
	{21, (BODY_INDEX)-1, 219, gen_type9_985},
	{22, (BODY_INDEX)-1, 219, gen_type10_985},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_985},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 984, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 984, gen_type12_985},
	{15909, (BODY_INDEX)-1, 205, NULL},
	{15910, (BODY_INDEX)-1, 205, NULL},
	{15911, (BODY_INDEX)-1, 205, NULL},
};

extern void Init985(void);
void Init985(void)
{
	IDSC(desc_985, 0, 984);
	IDSC(desc_985 + 1, 1, 984);
	IDSC(desc_985 + 32, 1121, 984);
}


#ifdef __cplusplus
}
#endif
