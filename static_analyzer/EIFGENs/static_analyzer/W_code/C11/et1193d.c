/*
 * Class ETF_CHAR_ARG
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1193 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1193 [] = {0xFF11,236,0xFF12,1192,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1193 [] = {0xFF11,1192,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1193 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1193 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1193 [] = {0xFF11,1192,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1193 [] = {0xFF11,1192,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1193 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1193 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1193 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1193 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1193 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1193 [] = {0xFF11,1192,0xFFFF};
static EIF_TYPE_INDEX gen_type13_1193 [] = {0xFF11,219,0xFFFF};


static struct desc_info desc_1193[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1193},
	{1, (BODY_INDEX)-1, 236, gen_type1_1193},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1192, gen_type2_1193},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1193},
	{14, (BODY_INDEX)-1, 0, gen_type4_1193},
	{15, (BODY_INDEX)-1, 1192, gen_type5_1193},
	{16, (BODY_INDEX)-1, 1192, gen_type6_1193},
	{17, (BODY_INDEX)-1, 0, gen_type7_1193},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_1193},
	{18413, (BODY_INDEX)-1, 219, gen_type9_1193},
	{22, (BODY_INDEX)-1, 219, gen_type10_1193},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_1193},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1192, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1192, gen_type12_1193},
	{18395, 0, 219, gen_type13_1193},
	{18396, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{18411, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{18412, 8, 184, NULL},
};

extern void Init1193(void);
void Init1193(void)
{
	IDSC(desc_1193, 0, 1192);
	IDSC(desc_1193 + 1, 1, 1192);
	IDSC(desc_1193 + 32, 432, 1192);
	IDSC(desc_1193 + 34, 488, 1192);
}


#ifdef __cplusplus
}
#endif
