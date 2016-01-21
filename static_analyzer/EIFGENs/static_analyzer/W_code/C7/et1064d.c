/*
 * Class ETF_GUI_ROOT_INTERFACE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1064 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1064 [] = {0xFF11,236,0xFF12,1063,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1064 [] = {0xFF11,1063,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1064 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1064 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1064 [] = {0xFF11,1063,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1064 [] = {0xFF11,1063,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1064 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1064 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1064 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1064 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1064 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1064 [] = {0xFF11,1063,0xFFFF};


static struct desc_info desc_1064[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1064},
	{1, (BODY_INDEX)-1, 236, gen_type1_1064},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1063, gen_type2_1064},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1064},
	{14, (BODY_INDEX)-1, 0, gen_type4_1064},
	{15, (BODY_INDEX)-1, 1063, gen_type5_1064},
	{16, (BODY_INDEX)-1, 1063, gen_type6_1064},
	{17, (BODY_INDEX)-1, 0, gen_type7_1064},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_1064},
	{21, (BODY_INDEX)-1, 219, gen_type9_1064},
	{22, (BODY_INDEX)-1, 219, gen_type10_1064},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_1064},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1063, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1063, gen_type12_1064},
	{17037, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{17038, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{17039, 0, 1559, NULL},
	{17040, 8, 190, NULL},
	{17041, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init1064(void);
void Init1064(void)
{
	IDSC(desc_1064, 0, 1063);
	IDSC(desc_1064 + 1, 1, 1063);
	IDSC(desc_1064 + 32, 358, 1063);
}


#ifdef __cplusplus
}
#endif
