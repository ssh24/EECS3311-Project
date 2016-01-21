/*
 * Class ETF_INT_ARG
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1196 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1196 [] = {0xFF11,236,0xFF12,1195,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1196 [] = {0xFF11,1195,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1196 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1196 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1196 [] = {0xFF11,1195,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1196 [] = {0xFF11,1195,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1196 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1196 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1196 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1196 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1196 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1196 [] = {0xFF11,1195,0xFFFF};
static EIF_TYPE_INDEX gen_type13_1196 [] = {0xFF11,219,0xFFFF};


static struct desc_info desc_1196[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1196},
	{1, (BODY_INDEX)-1, 236, gen_type1_1196},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1195, gen_type2_1196},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1196},
	{14, (BODY_INDEX)-1, 0, gen_type4_1196},
	{15, (BODY_INDEX)-1, 1195, gen_type5_1196},
	{16, (BODY_INDEX)-1, 1195, gen_type6_1196},
	{17, (BODY_INDEX)-1, 0, gen_type7_1196},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_1196},
	{18422, (BODY_INDEX)-1, 219, gen_type9_1196},
	{22, (BODY_INDEX)-1, 219, gen_type10_1196},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_1196},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1195, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1195, gen_type12_1196},
	{18395, 0, 219, gen_type13_1196},
	{18396, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{18420, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{18421, 8, 205, NULL},
};

extern void Init1196(void);
void Init1196(void)
{
	IDSC(desc_1196, 0, 1195);
	IDSC(desc_1196 + 1, 1, 1195);
	IDSC(desc_1196 + 32, 432, 1195);
	IDSC(desc_1196 + 34, 410, 1195);
}


#ifdef __cplusplus
}
#endif
