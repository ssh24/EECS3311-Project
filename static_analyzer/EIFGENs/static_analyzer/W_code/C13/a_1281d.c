/*
 * Class A_N_D
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1281 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1281 [] = {0xFF11,236,0xFF12,1280,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1281 [] = {0xFF11,1280,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1281 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1281 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1281 [] = {0xFF11,1280,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1281 [] = {0xFF11,1280,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1281 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1281 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1281 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1281 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1281 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1281 [] = {0xFF11,1280,0xFFFF};
static EIF_TYPE_INDEX gen_type13_1281 [] = {0xFF11,1259,0xFFFF};
static EIF_TYPE_INDEX gen_type14_1281 [] = {0xFF11,1259,0xFFFF};
static EIF_TYPE_INDEX gen_type15_1281 [] = {0xFF11,1259,0xFFFF};
static EIF_TYPE_INDEX gen_type16_1281 [] = {0xFF11,219,0xFFFF};


static struct desc_info desc_1281[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1281},
	{1, (BODY_INDEX)-1, 236, gen_type1_1281},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1280, gen_type2_1281},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1281},
	{14, (BODY_INDEX)-1, 0, gen_type4_1281},
	{15, (BODY_INDEX)-1, 1280, gen_type5_1281},
	{16, (BODY_INDEX)-1, 1280, gen_type6_1281},
	{17, (BODY_INDEX)-1, 0, gen_type7_1281},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_1281},
	{21, (BODY_INDEX)-1, 219, gen_type9_1281},
	{22, (BODY_INDEX)-1, 219, gen_type10_1281},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_1281},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1280, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1280, gen_type12_1281},
	{19691, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19692, 0, 1259, gen_type13_1281},
	{19693, 8, 1259, gen_type14_1281},
	{19694, 16, 1259, gen_type15_1281},
	{19695, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19696, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19723, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19725, (BODY_INDEX)-1, 219, gen_type16_1281},
	{19724, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init1281(void);
void Init1281(void)
{
	IDSC(desc_1281, 0, 1280);
	IDSC(desc_1281 + 1, 1, 1280);
	IDSC(desc_1281 + 32, 360, 1280);
	IDSC(desc_1281 + 38, 384, 1280);
	IDSC(desc_1281 + 39, 368, 1280);
}


#ifdef __cplusplus
}
#endif
