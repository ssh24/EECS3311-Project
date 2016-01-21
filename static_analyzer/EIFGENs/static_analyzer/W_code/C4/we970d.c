/*
 * Class WEL_UDM_CONSTANTS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_970 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_970 [] = {0xFF11,236,0xFF12,969,0xFFFF};
static EIF_TYPE_INDEX gen_type2_970 [] = {0xFF11,969,0xFFFF};
static EIF_TYPE_INDEX gen_type3_970 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_970 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_970 [] = {0xFF11,969,0xFFFF};
static EIF_TYPE_INDEX gen_type6_970 [] = {0xFF11,969,0xFFFF};
static EIF_TYPE_INDEX gen_type7_970 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_970 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_970 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_970 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_970 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_970 [] = {0xFF11,969,0xFFFF};


static struct desc_info desc_970[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_970},
	{1, (BODY_INDEX)-1, 236, gen_type1_970},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 969, gen_type2_970},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_970},
	{14, (BODY_INDEX)-1, 0, gen_type4_970},
	{15, (BODY_INDEX)-1, 969, gen_type5_970},
	{16, (BODY_INDEX)-1, 969, gen_type6_970},
	{17, (BODY_INDEX)-1, 0, gen_type7_970},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_970},
	{21, (BODY_INDEX)-1, 219, gen_type9_970},
	{22, (BODY_INDEX)-1, 219, gen_type10_970},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_970},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 969, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 969, gen_type12_970},
	{15792, (BODY_INDEX)-1, 205, NULL},
	{15793, (BODY_INDEX)-1, 205, NULL},
	{15794, (BODY_INDEX)-1, 205, NULL},
	{15795, (BODY_INDEX)-1, 205, NULL},
	{15796, (BODY_INDEX)-1, 205, NULL},
	{15797, (BODY_INDEX)-1, 205, NULL},
	{15798, (BODY_INDEX)-1, 205, NULL},
	{15799, (BODY_INDEX)-1, 205, NULL},
	{15800, (BODY_INDEX)-1, 205, NULL},
	{15801, (BODY_INDEX)-1, 205, NULL},
	{15802, (BODY_INDEX)-1, 205, NULL},
	{15803, (BODY_INDEX)-1, 205, NULL},
	{15804, (BODY_INDEX)-1, 205, NULL},
	{15805, (BODY_INDEX)-1, 205, NULL},
};

extern void Init970(void);
void Init970(void)
{
	IDSC(desc_970, 0, 969);
	IDSC(desc_970 + 1, 1, 969);
	IDSC(desc_970 + 32, 1294, 969);
}


#ifdef __cplusplus
}
#endif
