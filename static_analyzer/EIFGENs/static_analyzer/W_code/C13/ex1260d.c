/*
 * Class EXPRESSION
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1260 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1260 [] = {0xFF11,236,0xFF12,1259,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1260 [] = {0xFF11,1259,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1260 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1260 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1260 [] = {0xFF11,1259,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1260 [] = {0xFF11,1259,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1260 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1260 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1260 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1260 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1260 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1260 [] = {0xFF11,1259,0xFFFF};
static EIF_TYPE_INDEX gen_type13_1260 [] = {0xFF11,219,0xFFFF};


static struct desc_info desc_1260[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1260},
	{1, (BODY_INDEX)-1, 236, gen_type1_1260},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1259, gen_type2_1260},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1260},
	{14, (BODY_INDEX)-1, 0, gen_type4_1260},
	{15, (BODY_INDEX)-1, 1259, gen_type5_1260},
	{16, (BODY_INDEX)-1, 1259, gen_type6_1260},
	{17, (BODY_INDEX)-1, 0, gen_type7_1260},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_1260},
	{21, (BODY_INDEX)-1, 219, gen_type9_1260},
	{22, (BODY_INDEX)-1, 219, gen_type10_1260},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_1260},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1259, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1259, gen_type12_1260},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 219, gen_type13_1260},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init1260(void);
void Init1260(void)
{
	IDSC(desc_1260, 0, 1259);
	IDSC(desc_1260 + 1, 1, 1259);
	IDSC(desc_1260 + 32, 368, 1259);
}


#ifdef __cplusplus
}
#endif
