/*
 * Class EQUAL
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1284 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1284 [] = {0xFF11,236,0xFF12,1283,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1284 [] = {0xFF11,1283,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1284 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1284 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1284 [] = {0xFF11,1283,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1284 [] = {0xFF11,1283,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1284 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1284 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1284 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1284 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1284 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1284 [] = {0xFF11,1283,0xFFFF};
static EIF_TYPE_INDEX gen_type13_1284 [] = {0xFF11,1259,0xFFFF};
static EIF_TYPE_INDEX gen_type14_1284 [] = {0xFF11,1259,0xFFFF};
static EIF_TYPE_INDEX gen_type15_1284 [] = {0xFF11,1259,0xFFFF};
static EIF_TYPE_INDEX gen_type16_1284 [] = {0xFF11,219,0xFFFF};


static struct desc_info desc_1284[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1284},
	{1, (BODY_INDEX)-1, 236, gen_type1_1284},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1283, gen_type2_1284},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1284},
	{14, (BODY_INDEX)-1, 0, gen_type4_1284},
	{15, (BODY_INDEX)-1, 1283, gen_type5_1284},
	{16, (BODY_INDEX)-1, 1283, gen_type6_1284},
	{17, (BODY_INDEX)-1, 0, gen_type7_1284},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_1284},
	{21, (BODY_INDEX)-1, 219, gen_type9_1284},
	{22, (BODY_INDEX)-1, 219, gen_type10_1284},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_1284},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1283, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1283, gen_type12_1284},
	{19691, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19692, 0, 1259, gen_type13_1284},
	{19693, 8, 1259, gen_type14_1284},
	{19694, 16, 1259, gen_type15_1284},
	{19695, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19696, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19732, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19734, (BODY_INDEX)-1, 219, gen_type16_1284},
	{19733, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init1284(void);
void Init1284(void)
{
	IDSC(desc_1284, 0, 1283);
	IDSC(desc_1284 + 1, 1, 1283);
	IDSC(desc_1284 + 32, 360, 1283);
	IDSC(desc_1284 + 38, 346, 1283);
	IDSC(desc_1284 + 39, 368, 1283);
}


#ifdef __cplusplus
}
#endif
