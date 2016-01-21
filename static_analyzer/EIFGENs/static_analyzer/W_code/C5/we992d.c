/*
 * Class WEL_UDN_CONSTANTS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_992 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_992 [] = {0xFF11,236,0xFF12,991,0xFFFF};
static EIF_TYPE_INDEX gen_type2_992 [] = {0xFF11,991,0xFFFF};
static EIF_TYPE_INDEX gen_type3_992 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_992 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_992 [] = {0xFF11,991,0xFFFF};
static EIF_TYPE_INDEX gen_type6_992 [] = {0xFF11,991,0xFFFF};
static EIF_TYPE_INDEX gen_type7_992 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_992 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_992 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_992 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_992 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_992 [] = {0xFF11,991,0xFFFF};


static struct desc_info desc_992[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_992},
	{1, (BODY_INDEX)-1, 236, gen_type1_992},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 991, gen_type2_992},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_992},
	{14, (BODY_INDEX)-1, 0, gen_type4_992},
	{15, (BODY_INDEX)-1, 991, gen_type5_992},
	{16, (BODY_INDEX)-1, 991, gen_type6_992},
	{17, (BODY_INDEX)-1, 0, gen_type7_992},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_992},
	{21, (BODY_INDEX)-1, 219, gen_type9_992},
	{22, (BODY_INDEX)-1, 219, gen_type10_992},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_992},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 991, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 991, gen_type12_992},
	{16026, (BODY_INDEX)-1, 205, NULL},
};

extern void Init992(void);
void Init992(void)
{
	IDSC(desc_992, 0, 991);
	IDSC(desc_992 + 1, 1, 991);
	IDSC(desc_992 + 32, 1091, 991);
}


#ifdef __cplusplus
}
#endif
