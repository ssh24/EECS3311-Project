/*
 * Class ETF_MODEL_ACCESS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_931 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_931 [] = {0xFF11,1964,930,0xFFFF};
static EIF_TYPE_INDEX gen_type2_931 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_931 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_931 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_931 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type6_931 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type7_931 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type8_931 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type9_931 [] = {0xFF11,933,0xFFFF};


static struct desc_info desc_931[] = {
	{(BODY_INDEX) 15329, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_931},
	{1, (BODY_INDEX)-1, 1964, gen_type1_931},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 930, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_931},
	{14, (BODY_INDEX)-1, 0, gen_type3_931},
	{15, (BODY_INDEX)-1, 930, NULL},
	{16, (BODY_INDEX)-1, 930, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type4_931},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type5_931},
	{21, (BODY_INDEX)-1, 219, gen_type6_931},
	{22, (BODY_INDEX)-1, 219, gen_type7_931},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type8_931},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 930, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 930, NULL},
	{15328, (BODY_INDEX)-1, 933, gen_type9_931},
};

extern void Init931(void);
void Init931(void)
{
	IDSC(desc_931, 0, 930);
	IDSC(desc_931 + 1, 1, 930);
	IDSC(desc_931 + 32, 378, 930);
}


#ifdef __cplusplus
}
#endif
