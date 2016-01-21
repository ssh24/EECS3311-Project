/*
 * Class WEL_RGN_CONSTANTS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1208 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1208 [] = {0xFF11,236,0xFF12,1207,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1208 [] = {0xFF11,1207,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1208 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1208 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1208 [] = {0xFF11,1207,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1208 [] = {0xFF11,1207,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1208 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1208 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1208 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1208 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1208 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1208 [] = {0xFF11,1207,0xFFFF};


static struct desc_info desc_1208[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1208},
	{1, (BODY_INDEX)-1, 236, gen_type1_1208},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1207, gen_type2_1208},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1208},
	{14, (BODY_INDEX)-1, 0, gen_type4_1208},
	{15, (BODY_INDEX)-1, 1207, gen_type5_1208},
	{16, (BODY_INDEX)-1, 1207, gen_type6_1208},
	{17, (BODY_INDEX)-1, 0, gen_type7_1208},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_1208},
	{21, (BODY_INDEX)-1, 219, gen_type9_1208},
	{22, (BODY_INDEX)-1, 219, gen_type10_1208},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_1208},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1207, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1207, gen_type12_1208},
	{18515, (BODY_INDEX)-1, 205, NULL},
	{18516, (BODY_INDEX)-1, 205, NULL},
	{18517, (BODY_INDEX)-1, 205, NULL},
	{18518, (BODY_INDEX)-1, 205, NULL},
	{18506, (BODY_INDEX)-1, 205, NULL},
	{18507, (BODY_INDEX)-1, 205, NULL},
	{18508, (BODY_INDEX)-1, 205, NULL},
	{18509, (BODY_INDEX)-1, 205, NULL},
	{18510, (BODY_INDEX)-1, 205, NULL},
	{18511, (BODY_INDEX)-1, 205, NULL},
	{18512, (BODY_INDEX)-1, 205, NULL},
	{18513, (BODY_INDEX)-1, 205, NULL},
	{18514, (BODY_INDEX)-1, 190, NULL},
};

extern void Init1208(void);
void Init1208(void)
{
	IDSC(desc_1208, 0, 1207);
	IDSC(desc_1208 + 1, 1, 1207);
	IDSC(desc_1208 + 32, 1131, 1207);
}


#ifdef __cplusplus
}
#endif
