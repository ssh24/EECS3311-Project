/*
 * Class ETF_CMD_LINE_OUTPUT_HANDLER
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1200 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1200 [] = {0xFF11,236,0xFF12,1199,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1200 [] = {0xFF11,1199,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1200 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1200 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1200 [] = {0xFF11,1199,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1200 [] = {0xFF11,1199,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1200 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1200 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1200 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1200 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1200 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1200 [] = {0xFF11,1199,0xFFFF};
static EIF_TYPE_INDEX gen_type13_1200 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type14_1200 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type15_1200 [] = {0xFF11,933,0xFFFF};
static EIF_TYPE_INDEX gen_type16_1200 [] = {0xFF11,219,0xFFFF};


static struct desc_info desc_1200[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1200},
	{1, (BODY_INDEX)-1, 236, gen_type1_1200},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1199, gen_type2_1200},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1200},
	{14, (BODY_INDEX)-1, 0, gen_type4_1200},
	{15, (BODY_INDEX)-1, 1199, gen_type5_1200},
	{16, (BODY_INDEX)-1, 1199, gen_type6_1200},
	{17, (BODY_INDEX)-1, 0, gen_type7_1200},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_1200},
	{21, (BODY_INDEX)-1, 219, gen_type9_1200},
	{22, (BODY_INDEX)-1, 219, gen_type10_1200},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_1200},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1199, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1199, gen_type12_1200},
	{18437, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{18427, 0, 219, gen_type13_1200},
	{18428, 8, 219, gen_type14_1200},
	{18440, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{18429, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{18441, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{18431, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{18438, 16, 933, gen_type15_1200},
	{18439, (BODY_INDEX)-1, 219, gen_type16_1200},
};

extern void Init1200(void);
void Init1200(void)
{
	IDSC(desc_1200, 0, 1199);
	IDSC(desc_1200 + 1, 1, 1199);
	IDSC(desc_1200 + 32, 380, 1199);
	IDSC(desc_1200 + 39, 357, 1199);
}


#ifdef __cplusplus
}
#endif
