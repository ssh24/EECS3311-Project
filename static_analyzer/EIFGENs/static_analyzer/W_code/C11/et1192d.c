/*
 * Class ETF_STR_ARG
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1192 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1192 [] = {0xFF11,236,0xFF12,1191,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1192 [] = {0xFF11,1191,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1192 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1192 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1192 [] = {0xFF11,1191,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1192 [] = {0xFF11,1191,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1192 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1192 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1192 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1192 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1192 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1192 [] = {0xFF11,1191,0xFFFF};
static EIF_TYPE_INDEX gen_type13_1192 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type14_1192 [] = {0xFF11,219,0xFFFF};


static struct desc_info desc_1192[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1192},
	{1, (BODY_INDEX)-1, 236, gen_type1_1192},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1191, gen_type2_1192},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1192},
	{14, (BODY_INDEX)-1, 0, gen_type4_1192},
	{15, (BODY_INDEX)-1, 1191, gen_type5_1192},
	{16, (BODY_INDEX)-1, 1191, gen_type6_1192},
	{17, (BODY_INDEX)-1, 0, gen_type7_1192},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_1192},
	{18410, (BODY_INDEX)-1, 219, gen_type9_1192},
	{22, (BODY_INDEX)-1, 219, gen_type10_1192},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_1192},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1191, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1191, gen_type12_1192},
	{18395, 0, 219, gen_type13_1192},
	{18396, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{18408, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{18409, 8, 219, gen_type14_1192},
};

extern void Init1192(void);
void Init1192(void)
{
	IDSC(desc_1192, 0, 1191);
	IDSC(desc_1192 + 1, 1, 1191);
	IDSC(desc_1192 + 32, 432, 1191);
	IDSC(desc_1192 + 34, 489, 1191);
}


#ifdef __cplusplus
}
#endif
