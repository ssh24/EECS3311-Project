/*
 * Class WEL_QS_CONSTANTS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_911 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_911 [] = {0xFF11,236,0xFF12,910,0xFFFF};
static EIF_TYPE_INDEX gen_type2_911 [] = {0xFF11,910,0xFFFF};
static EIF_TYPE_INDEX gen_type3_911 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_911 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_911 [] = {0xFF11,910,0xFFFF};
static EIF_TYPE_INDEX gen_type6_911 [] = {0xFF11,910,0xFFFF};
static EIF_TYPE_INDEX gen_type7_911 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_911 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_911 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_911 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_911 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_911 [] = {0xFF11,910,0xFFFF};


static struct desc_info desc_911[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_911},
	{1, (BODY_INDEX)-1, 236, gen_type1_911},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 910, gen_type2_911},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_911},
	{14, (BODY_INDEX)-1, 0, gen_type4_911},
	{15, (BODY_INDEX)-1, 910, gen_type5_911},
	{16, (BODY_INDEX)-1, 910, gen_type6_911},
	{17, (BODY_INDEX)-1, 0, gen_type7_911},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_911},
	{21, (BODY_INDEX)-1, 219, gen_type9_911},
	{22, (BODY_INDEX)-1, 219, gen_type10_911},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_911},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 910, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 910, gen_type12_911},
	{14974, (BODY_INDEX)-1, 205, NULL},
	{14975, (BODY_INDEX)-1, 205, NULL},
	{14976, (BODY_INDEX)-1, 205, NULL},
	{14977, (BODY_INDEX)-1, 205, NULL},
	{14978, (BODY_INDEX)-1, 205, NULL},
	{14979, (BODY_INDEX)-1, 205, NULL},
	{14980, (BODY_INDEX)-1, 205, NULL},
	{14981, (BODY_INDEX)-1, 205, NULL},
	{14982, (BODY_INDEX)-1, 205, NULL},
	{14983, (BODY_INDEX)-1, 205, NULL},
	{14984, (BODY_INDEX)-1, 205, NULL},
	{14985, (BODY_INDEX)-1, 205, NULL},
	{14986, (BODY_INDEX)-1, 205, NULL},
	{14987, (BODY_INDEX)-1, 205, NULL},
};

extern void Init911(void);
void Init911(void)
{
	IDSC(desc_911, 0, 910);
	IDSC(desc_911 + 1, 1, 910);
	IDSC(desc_911 + 32, 889, 910);
}


#ifdef __cplusplus
}
#endif
