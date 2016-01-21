/*
 * Class ETF_INPUT_HANDLER_INTERFACE
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1185 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1185 [] = {0xFF11,236,0xFF12,1184,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1185 [] = {0xFF11,1184,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1185 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1185 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1185 [] = {0xFF11,1184,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1185 [] = {0xFF11,1184,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1185 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1185 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1185 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1185 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1185 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1185 [] = {0xFF11,1184,0xFFFF};
static EIF_TYPE_INDEX gen_type13_1185 [] = {0xFF11,849,205,0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type14_1185 [] = {0xFF11,366,0xFF11,219,205,0xFFFF};
static EIF_TYPE_INDEX gen_type15_1185 [] = {0xFF11,318,0xFF11,318,0xFF11,1171,0xFF11,219,0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type16_1185 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type17_1185 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type18_1185 [] = {0xFF11,1059,0xFFFF};
static EIF_TYPE_INDEX gen_type19_1185 [] = {0xFF11,1963,0xFF11,0xFFF9,1,173,0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type20_1185 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type21_1185 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type22_1185 [] = {0xFF11,1465,0xFFFF};
static EIF_TYPE_INDEX gen_type23_1185 [] = {0xFF11,219,0xFFFF};


static struct desc_info desc_1185[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1185},
	{1, (BODY_INDEX)-1, 236, gen_type1_1185},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1184, gen_type2_1185},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1185},
	{14, (BODY_INDEX)-1, 0, gen_type4_1185},
	{15, (BODY_INDEX)-1, 1184, gen_type5_1185},
	{16, (BODY_INDEX)-1, 1184, gen_type6_1185},
	{17, (BODY_INDEX)-1, 0, gen_type7_1185},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_1185},
	{21, (BODY_INDEX)-1, 219, gen_type9_1185},
	{22, (BODY_INDEX)-1, 219, gen_type10_1185},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_1185},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1184, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1184, gen_type12_1185},
	{18379, (BODY_INDEX)-1, 849, gen_type13_1185},
	{18380, (BODY_INDEX)-1, 366, gen_type14_1185},
	{18381, (BODY_INDEX)-1, 318, gen_type15_1185},
	{18382, (BODY_INDEX)-1, 190, NULL},
	{18386, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{18387, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{18388, (BODY_INDEX)-1, 219, gen_type16_1185},
	{18389, 24, 190, NULL},
	{18390, 0, 219, gen_type17_1185},
	{18391, 8, 1059, gen_type18_1185},
	{18392, 16, 1963, gen_type19_1185},
	{18393, (BODY_INDEX)-1, 219, gen_type20_1185},
	{18394, (BODY_INDEX)-1, 219, gen_type21_1185},
	{18383, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{18384, (BODY_INDEX)-1, 1465, gen_type22_1185},
	{18385, (BODY_INDEX)-1, 219, gen_type23_1185},
};

extern void Init1185(void);
void Init1185(void)
{
	IDSC(desc_1185, 0, 1184);
	IDSC(desc_1185 + 1, 1, 1184);
	IDSC(desc_1185 + 32, 434, 1184);
	IDSC(desc_1185 + 36, 377, 1184);
}


#ifdef __cplusplus
}
#endif
