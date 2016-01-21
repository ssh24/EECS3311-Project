/*
 * Class EV_ID_IMP
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1216 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1216 [] = {0xFF11,236,0xFF12,1215,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1216 [] = {0xFF11,1215,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1216 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1216 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1216 [] = {0xFF11,1215,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1216 [] = {0xFF11,1215,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1216 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1216 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1216 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1216 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1216 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1216 [] = {0xFF11,1215,0xFFFF};
static EIF_TYPE_INDEX gen_type13_1216 [] = {0xFF11,314,205,0xFFFF};


static struct desc_info desc_1216[] = {
	{(BODY_INDEX) 18611, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1216},
	{1, (BODY_INDEX)-1, 236, gen_type1_1216},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1215, gen_type2_1216},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1216},
	{14, (BODY_INDEX)-1, 0, gen_type4_1216},
	{15, (BODY_INDEX)-1, 1215, gen_type5_1216},
	{16, (BODY_INDEX)-1, 1215, gen_type6_1216},
	{17, (BODY_INDEX)-1, 0, gen_type7_1216},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_1216},
	{21, (BODY_INDEX)-1, 219, gen_type9_1216},
	{22, (BODY_INDEX)-1, 219, gen_type10_1216},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_1216},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1215, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1215, gen_type12_1216},
	{18608, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{18609, 0, 205, NULL},
	{18610, (BODY_INDEX)-1, 314, gen_type13_1216},
};

extern void Init1216(void);
void Init1216(void)
{
	IDSC(desc_1216, 0, 1215);
	IDSC(desc_1216 + 1, 1, 1215);
	IDSC(desc_1216 + 32, 878, 1215);
}


#ifdef __cplusplus
}
#endif
