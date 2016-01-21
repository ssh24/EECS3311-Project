/*
 * Class WEL_ID_CONSTANTS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1213 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1213 [] = {0xFF11,236,0xFF12,1212,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1213 [] = {0xFF11,1212,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1213 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1213 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1213 [] = {0xFF11,1212,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1213 [] = {0xFF11,1212,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1213 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1213 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1213 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1213 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1213 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1213 [] = {0xFF11,1212,0xFFFF};


static struct desc_info desc_1213[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1213},
	{1, (BODY_INDEX)-1, 236, gen_type1_1213},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1212, gen_type2_1213},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1213},
	{14, (BODY_INDEX)-1, 0, gen_type4_1213},
	{15, (BODY_INDEX)-1, 1212, gen_type5_1213},
	{16, (BODY_INDEX)-1, 1212, gen_type6_1213},
	{17, (BODY_INDEX)-1, 0, gen_type7_1213},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_1213},
	{21, (BODY_INDEX)-1, 219, gen_type9_1213},
	{22, (BODY_INDEX)-1, 219, gen_type10_1213},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_1213},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1212, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1212, gen_type12_1213},
	{18542, (BODY_INDEX)-1, 205, NULL},
	{18543, (BODY_INDEX)-1, 205, NULL},
	{18544, (BODY_INDEX)-1, 205, NULL},
	{18538, (BODY_INDEX)-1, 205, NULL},
	{18539, (BODY_INDEX)-1, 205, NULL},
	{18540, (BODY_INDEX)-1, 205, NULL},
	{18541, (BODY_INDEX)-1, 205, NULL},
};

extern void Init1213(void);
void Init1213(void)
{
	IDSC(desc_1213, 0, 1212);
	IDSC(desc_1213 + 1, 1, 1212);
	IDSC(desc_1213 + 32, 918, 1212);
}


#ifdef __cplusplus
}
#endif
