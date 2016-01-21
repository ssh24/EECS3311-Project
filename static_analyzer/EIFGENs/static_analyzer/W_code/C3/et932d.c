/*
 * Class reference ETF_MODEL_ACCESS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_932 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_932 [] = {0xFF11,236,931,0xFFFF};
static EIF_TYPE_INDEX gen_type2_932 [] = {0xFF11,931,0xFFFF};
static EIF_TYPE_INDEX gen_type3_932 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_932 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_932 [] = {0xFF11,931,0xFFFF};
static EIF_TYPE_INDEX gen_type6_932 [] = {0xFF11,931,0xFFFF};
static EIF_TYPE_INDEX gen_type7_932 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_932 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_932 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_932 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_932 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_932 [] = {0xFF11,931,0xFFFF};
static EIF_TYPE_INDEX gen_type13_932 [] = {0xFF11,931,0xFFFF};
static EIF_TYPE_INDEX gen_type14_932 [] = {0xFF11,933,0xFFFF};


static struct desc_info desc_932[] = {
	{(BODY_INDEX) 15331, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_932},
	{1, (BODY_INDEX)-1, 236, gen_type1_932},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 931, gen_type2_932},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_932},
	{14, (BODY_INDEX)-1, 0, gen_type4_932},
	{15, (BODY_INDEX)-1, 931, gen_type5_932},
	{16, (BODY_INDEX)-1, 931, gen_type6_932},
	{17, (BODY_INDEX)-1, 0, gen_type7_932},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_932},
	{21, (BODY_INDEX)-1, 219, gen_type9_932},
	{22, (BODY_INDEX)-1, 219, gen_type10_932},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_932},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 931, gen_type12_932},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 931, gen_type13_932},
	{15330, (BODY_INDEX)-1, 933, gen_type14_932},
};

extern void Init932(void);
void Init932(void)
{
	IDSC(desc_932, 0, 931);
	IDSC(desc_932 + 1, 1, 931);
	IDSC(desc_932 + 32, 378, 931);
}


#ifdef __cplusplus
}
#endif
