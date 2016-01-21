/*
 * Class WEL_ESB_CONSTANTS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1022 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1022 [] = {0xFF11,236,0xFF12,1021,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1022 [] = {0xFF11,1021,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1022 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1022 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1022 [] = {0xFF11,1021,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1022 [] = {0xFF11,1021,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1022 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1022 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1022 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1022 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1022 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1022 [] = {0xFF11,1021,0xFFFF};


static struct desc_info desc_1022[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1022},
	{1, (BODY_INDEX)-1, 236, gen_type1_1022},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1021, gen_type2_1022},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1022},
	{14, (BODY_INDEX)-1, 0, gen_type4_1022},
	{15, (BODY_INDEX)-1, 1021, gen_type5_1022},
	{16, (BODY_INDEX)-1, 1021, gen_type6_1022},
	{17, (BODY_INDEX)-1, 0, gen_type7_1022},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_1022},
	{21, (BODY_INDEX)-1, 219, gen_type9_1022},
	{22, (BODY_INDEX)-1, 219, gen_type10_1022},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_1022},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1021, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1021, gen_type12_1022},
	{16693, (BODY_INDEX)-1, 205, NULL},
	{16694, (BODY_INDEX)-1, 205, NULL},
	{16688, (BODY_INDEX)-1, 205, NULL},
	{16689, (BODY_INDEX)-1, 205, NULL},
	{16690, (BODY_INDEX)-1, 205, NULL},
	{16691, (BODY_INDEX)-1, 205, NULL},
	{16692, (BODY_INDEX)-1, 205, NULL},
};

extern void Init1022(void);
void Init1022(void)
{
	IDSC(desc_1022, 0, 1021);
	IDSC(desc_1022 + 1, 1, 1021);
	IDSC(desc_1022 + 32, 919, 1021);
}


#ifdef __cplusplus
}
#endif
