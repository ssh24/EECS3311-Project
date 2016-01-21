/*
 * Class WEL_TVIS_CONSTANTS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1101 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1101 [] = {0xFF11,236,0xFF12,1100,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1101 [] = {0xFF11,1100,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1101 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1101 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1101 [] = {0xFF11,1100,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1101 [] = {0xFF11,1100,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1101 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1101 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1101 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1101 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1101 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1101 [] = {0xFF11,1100,0xFFFF};


static struct desc_info desc_1101[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1101},
	{1, (BODY_INDEX)-1, 236, gen_type1_1101},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1100, gen_type2_1101},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1101},
	{14, (BODY_INDEX)-1, 0, gen_type4_1101},
	{15, (BODY_INDEX)-1, 1100, gen_type5_1101},
	{16, (BODY_INDEX)-1, 1100, gen_type6_1101},
	{17, (BODY_INDEX)-1, 0, gen_type7_1101},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_1101},
	{21, (BODY_INDEX)-1, 219, gen_type9_1101},
	{22, (BODY_INDEX)-1, 219, gen_type10_1101},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_1101},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1100, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1100, gen_type12_1101},
	{17375, (BODY_INDEX)-1, 205, NULL},
	{17376, (BODY_INDEX)-1, 205, NULL},
	{17377, (BODY_INDEX)-1, 205, NULL},
	{17378, (BODY_INDEX)-1, 205, NULL},
	{17379, (BODY_INDEX)-1, 205, NULL},
	{17380, (BODY_INDEX)-1, 205, NULL},
	{17381, (BODY_INDEX)-1, 205, NULL},
	{17382, (BODY_INDEX)-1, 205, NULL},
	{17383, (BODY_INDEX)-1, 205, NULL},
	{17384, (BODY_INDEX)-1, 190, NULL},
};

extern void Init1101(void);
void Init1101(void)
{
	IDSC(desc_1101, 0, 1100);
	IDSC(desc_1101 + 1, 1, 1100);
	IDSC(desc_1101 + 32, 1193, 1100);
}


#ifdef __cplusplus
}
#endif
