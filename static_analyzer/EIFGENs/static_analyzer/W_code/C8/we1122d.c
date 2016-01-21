/*
 * Class WEL_SW_CONSTANTS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1122 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1122 [] = {0xFF11,236,0xFF12,1121,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1122 [] = {0xFF11,1121,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1122 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1122 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1122 [] = {0xFF11,1121,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1122 [] = {0xFF11,1121,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1122 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1122 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1122 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1122 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1122 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1122 [] = {0xFF11,1121,0xFFFF};


static struct desc_info desc_1122[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1122},
	{1, (BODY_INDEX)-1, 236, gen_type1_1122},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1121, gen_type2_1122},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1122},
	{14, (BODY_INDEX)-1, 0, gen_type4_1122},
	{15, (BODY_INDEX)-1, 1121, gen_type5_1122},
	{16, (BODY_INDEX)-1, 1121, gen_type6_1122},
	{17, (BODY_INDEX)-1, 0, gen_type7_1122},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_1122},
	{21, (BODY_INDEX)-1, 219, gen_type9_1122},
	{22, (BODY_INDEX)-1, 219, gen_type10_1122},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_1122},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1121, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1121, gen_type12_1122},
	{17724, (BODY_INDEX)-1, 205, NULL},
	{17725, (BODY_INDEX)-1, 205, NULL},
	{17726, (BODY_INDEX)-1, 205, NULL},
	{17727, (BODY_INDEX)-1, 205, NULL},
	{17728, (BODY_INDEX)-1, 205, NULL},
	{17729, (BODY_INDEX)-1, 205, NULL},
	{17730, (BODY_INDEX)-1, 205, NULL},
	{17731, (BODY_INDEX)-1, 205, NULL},
	{17732, (BODY_INDEX)-1, 205, NULL},
	{17733, (BODY_INDEX)-1, 205, NULL},
	{17734, (BODY_INDEX)-1, 205, NULL},
	{17735, (BODY_INDEX)-1, 205, NULL},
	{17736, (BODY_INDEX)-1, 205, NULL},
	{17737, (BODY_INDEX)-1, 205, NULL},
};

extern void Init1122(void);
void Init1122(void)
{
	IDSC(desc_1122, 0, 1121);
	IDSC(desc_1122 + 1, 1, 1121);
	IDSC(desc_1122 + 32, 916, 1121);
}


#ifdef __cplusplus
}
#endif
