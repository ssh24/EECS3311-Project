/*
 * Class WEL_BI_COMPRESSION_CONSTANTS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_912 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_912 [] = {0xFF11,236,0xFF12,911,0xFFFF};
static EIF_TYPE_INDEX gen_type2_912 [] = {0xFF11,911,0xFFFF};
static EIF_TYPE_INDEX gen_type3_912 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_912 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_912 [] = {0xFF11,911,0xFFFF};
static EIF_TYPE_INDEX gen_type6_912 [] = {0xFF11,911,0xFFFF};
static EIF_TYPE_INDEX gen_type7_912 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_912 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_912 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_912 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_912 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_912 [] = {0xFF11,911,0xFFFF};


static struct desc_info desc_912[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_912},
	{1, (BODY_INDEX)-1, 236, gen_type1_912},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 911, gen_type2_912},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_912},
	{14, (BODY_INDEX)-1, 0, gen_type4_912},
	{15, (BODY_INDEX)-1, 911, gen_type5_912},
	{16, (BODY_INDEX)-1, 911, gen_type6_912},
	{17, (BODY_INDEX)-1, 0, gen_type7_912},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_912},
	{21, (BODY_INDEX)-1, 219, gen_type9_912},
	{22, (BODY_INDEX)-1, 219, gen_type10_912},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_912},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 911, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 911, gen_type12_912},
	{14988, (BODY_INDEX)-1, 205, NULL},
	{14989, (BODY_INDEX)-1, 205, NULL},
	{14990, (BODY_INDEX)-1, 205, NULL},
	{14991, (BODY_INDEX)-1, 205, NULL},
	{14992, (BODY_INDEX)-1, 205, NULL},
	{14993, (BODY_INDEX)-1, 205, NULL},
	{14994, (BODY_INDEX)-1, 190, NULL},
};

extern void Init912(void);
void Init912(void)
{
	IDSC(desc_912, 0, 911);
	IDSC(desc_912 + 1, 1, 911);
	IDSC(desc_912 + 32, 855, 911);
}


#ifdef __cplusplus
}
#endif
