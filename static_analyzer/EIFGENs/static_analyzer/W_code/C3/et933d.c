/*
 * Class ETF_FILE_UTILITY
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_933 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_933 [] = {0xFF11,236,0xFF12,932,0xFFFF};
static EIF_TYPE_INDEX gen_type2_933 [] = {0xFF11,932,0xFFFF};
static EIF_TYPE_INDEX gen_type3_933 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_933 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_933 [] = {0xFF11,932,0xFFFF};
static EIF_TYPE_INDEX gen_type6_933 [] = {0xFF11,932,0xFFFF};
static EIF_TYPE_INDEX gen_type7_933 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_933 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_933 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_933 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_933 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_933 [] = {0xFF11,932,0xFFFF};
static EIF_TYPE_INDEX gen_type13_933 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type14_933 [] = {0xFF11,262,0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type15_933 [] = {0xFF11,219,0xFFFF};


static struct desc_info desc_933[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_933},
	{1, (BODY_INDEX)-1, 236, gen_type1_933},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 932, gen_type2_933},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_933},
	{14, (BODY_INDEX)-1, 0, gen_type4_933},
	{15, (BODY_INDEX)-1, 932, gen_type5_933},
	{16, (BODY_INDEX)-1, 932, gen_type6_933},
	{17, (BODY_INDEX)-1, 0, gen_type7_933},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_933},
	{21, (BODY_INDEX)-1, 219, gen_type9_933},
	{22, (BODY_INDEX)-1, 219, gen_type10_933},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_933},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 932, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 932, gen_type12_933},
	{15332, 16, 190, NULL},
	{15333, 0, 219, gen_type13_933},
	{15334, 8, 262, gen_type14_933},
	{15335, (BODY_INDEX)-1, 219, gen_type15_933},
	{15336, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{15337, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init933(void);
void Init933(void)
{
	IDSC(desc_933, 0, 932);
	IDSC(desc_933 + 1, 1, 932);
	IDSC(desc_933 + 32, 354, 932);
}


#ifdef __cplusplus
}
#endif
