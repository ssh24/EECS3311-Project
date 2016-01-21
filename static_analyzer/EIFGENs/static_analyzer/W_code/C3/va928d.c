/*
 * Class VALUE_SINGLETON
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_928 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_928 [] = {0xFF11,236,0xFF12,927,0xFFFF};
static EIF_TYPE_INDEX gen_type2_928 [] = {0xFF11,927,0xFFFF};
static EIF_TYPE_INDEX gen_type3_928 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_928 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_928 [] = {0xFF11,927,0xFFFF};
static EIF_TYPE_INDEX gen_type6_928 [] = {0xFF11,927,0xFFFF};
static EIF_TYPE_INDEX gen_type7_928 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_928 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_928 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_928 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_928 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_928 [] = {0xFF11,927,0xFFFF};


static struct desc_info desc_928[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_928},
	{1, (BODY_INDEX)-1, 236, gen_type1_928},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 927, gen_type2_928},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_928},
	{14, (BODY_INDEX)-1, 0, gen_type4_928},
	{15, (BODY_INDEX)-1, 927, gen_type5_928},
	{16, (BODY_INDEX)-1, 927, gen_type6_928},
	{17, (BODY_INDEX)-1, 0, gen_type7_928},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_928},
	{21, (BODY_INDEX)-1, 219, gen_type9_928},
	{22, (BODY_INDEX)-1, 219, gen_type10_928},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_928},
	{15229, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 927, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 927, gen_type12_928},
	{15230, 24, 1518, NULL},
	{15231, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init928(void);
void Init928(void)
{
	IDSC(desc_928, 0, 927);
	IDSC(desc_928 + 1, 1, 927);
	IDSC(desc_928 + 32, 521, 927);
}


#ifdef __cplusplus
}
#endif
