/*
 * Class WEL_TVIF_CONSTANTS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1080 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1080 [] = {0xFF11,236,0xFF12,1079,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1080 [] = {0xFF11,1079,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1080 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1080 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1080 [] = {0xFF11,1079,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1080 [] = {0xFF11,1079,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1080 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1080 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1080 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1080 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1080 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1080 [] = {0xFF11,1079,0xFFFF};


static struct desc_info desc_1080[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1080},
	{1, (BODY_INDEX)-1, 236, gen_type1_1080},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1079, gen_type2_1080},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1080},
	{14, (BODY_INDEX)-1, 0, gen_type4_1080},
	{15, (BODY_INDEX)-1, 1079, gen_type5_1080},
	{16, (BODY_INDEX)-1, 1079, gen_type6_1080},
	{17, (BODY_INDEX)-1, 0, gen_type7_1080},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_1080},
	{21, (BODY_INDEX)-1, 219, gen_type9_1080},
	{22, (BODY_INDEX)-1, 219, gen_type10_1080},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_1080},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1079, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1079, gen_type12_1080},
	{17163, (BODY_INDEX)-1, 205, NULL},
	{17164, (BODY_INDEX)-1, 205, NULL},
	{17165, (BODY_INDEX)-1, 205, NULL},
	{17166, (BODY_INDEX)-1, 205, NULL},
	{17167, (BODY_INDEX)-1, 205, NULL},
	{17168, (BODY_INDEX)-1, 205, NULL},
	{17169, (BODY_INDEX)-1, 205, NULL},
};

extern void Init1080(void);
void Init1080(void)
{
	IDSC(desc_1080, 0, 1079);
	IDSC(desc_1080 + 1, 1, 1079);
	IDSC(desc_1080 + 32, 1365, 1079);
}


#ifdef __cplusplus
}
#endif
