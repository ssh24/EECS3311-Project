/*
 * Class WEL_DT_CONSTANTS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1256 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1256 [] = {0xFF11,236,0xFF12,1255,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1256 [] = {0xFF11,1255,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1256 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1256 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1256 [] = {0xFF11,1255,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1256 [] = {0xFF11,1255,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1256 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1256 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1256 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1256 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1256 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1256 [] = {0xFF11,1255,0xFFFF};


static struct desc_info desc_1256[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1256},
	{1, (BODY_INDEX)-1, 236, gen_type1_1256},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1255, gen_type2_1256},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1256},
	{14, (BODY_INDEX)-1, 0, gen_type4_1256},
	{15, (BODY_INDEX)-1, 1255, gen_type5_1256},
	{16, (BODY_INDEX)-1, 1255, gen_type6_1256},
	{17, (BODY_INDEX)-1, 0, gen_type7_1256},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_1256},
	{21, (BODY_INDEX)-1, 219, gen_type9_1256},
	{22, (BODY_INDEX)-1, 219, gen_type10_1256},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_1256},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1255, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1255, gen_type12_1256},
	{19624, (BODY_INDEX)-1, 205, NULL},
	{19625, (BODY_INDEX)-1, 205, NULL},
	{19626, (BODY_INDEX)-1, 205, NULL},
	{19627, (BODY_INDEX)-1, 205, NULL},
	{19628, (BODY_INDEX)-1, 205, NULL},
	{19612, (BODY_INDEX)-1, 205, NULL},
	{19613, (BODY_INDEX)-1, 205, NULL},
	{19614, (BODY_INDEX)-1, 205, NULL},
	{19615, (BODY_INDEX)-1, 205, NULL},
	{19616, (BODY_INDEX)-1, 205, NULL},
	{19617, (BODY_INDEX)-1, 205, NULL},
	{19618, (BODY_INDEX)-1, 205, NULL},
	{19619, (BODY_INDEX)-1, 205, NULL},
	{19620, (BODY_INDEX)-1, 205, NULL},
	{19621, (BODY_INDEX)-1, 205, NULL},
	{19622, (BODY_INDEX)-1, 205, NULL},
	{19623, (BODY_INDEX)-1, 205, NULL},
};

extern void Init1256(void);
void Init1256(void)
{
	IDSC(desc_1256, 0, 1255);
	IDSC(desc_1256 + 1, 1, 1255);
	IDSC(desc_1256 + 32, 787, 1255);
}


#ifdef __cplusplus
}
#endif
