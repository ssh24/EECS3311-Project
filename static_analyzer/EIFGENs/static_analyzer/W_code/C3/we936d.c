/*
 * Class WEL_TBN_CONSTANTS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_936 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_936 [] = {0xFF11,236,0xFF12,935,0xFFFF};
static EIF_TYPE_INDEX gen_type2_936 [] = {0xFF11,935,0xFFFF};
static EIF_TYPE_INDEX gen_type3_936 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_936 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_936 [] = {0xFF11,935,0xFFFF};
static EIF_TYPE_INDEX gen_type6_936 [] = {0xFF11,935,0xFFFF};
static EIF_TYPE_INDEX gen_type7_936 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_936 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_936 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_936 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_936 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_936 [] = {0xFF11,935,0xFFFF};


static struct desc_info desc_936[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_936},
	{1, (BODY_INDEX)-1, 236, gen_type1_936},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 935, gen_type2_936},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_936},
	{14, (BODY_INDEX)-1, 0, gen_type4_936},
	{15, (BODY_INDEX)-1, 935, gen_type5_936},
	{16, (BODY_INDEX)-1, 935, gen_type6_936},
	{17, (BODY_INDEX)-1, 0, gen_type7_936},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_936},
	{21, (BODY_INDEX)-1, 219, gen_type9_936},
	{22, (BODY_INDEX)-1, 219, gen_type10_936},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_936},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 935, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 935, gen_type12_936},
	{15387, (BODY_INDEX)-1, 205, NULL},
	{15388, (BODY_INDEX)-1, 205, NULL},
	{15389, (BODY_INDEX)-1, 205, NULL},
	{15390, (BODY_INDEX)-1, 205, NULL},
	{15391, (BODY_INDEX)-1, 205, NULL},
	{15392, (BODY_INDEX)-1, 205, NULL},
	{15393, (BODY_INDEX)-1, 205, NULL},
	{15394, (BODY_INDEX)-1, 205, NULL},
	{15395, (BODY_INDEX)-1, 205, NULL},
	{15396, (BODY_INDEX)-1, 205, NULL},
	{15397, (BODY_INDEX)-1, 205, NULL},
};

extern void Init936(void);
void Init936(void)
{
	IDSC(desc_936, 0, 935);
	IDSC(desc_936 + 1, 1, 935);
	IDSC(desc_936 + 32, 1455, 935);
}


#ifdef __cplusplus
}
#endif
