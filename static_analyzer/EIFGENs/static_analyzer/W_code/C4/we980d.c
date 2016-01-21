/*
 * Class WEL_TVHT_CONSTANTS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_980 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_980 [] = {0xFF11,236,0xFF12,979,0xFFFF};
static EIF_TYPE_INDEX gen_type2_980 [] = {0xFF11,979,0xFFFF};
static EIF_TYPE_INDEX gen_type3_980 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_980 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_980 [] = {0xFF11,979,0xFFFF};
static EIF_TYPE_INDEX gen_type6_980 [] = {0xFF11,979,0xFFFF};
static EIF_TYPE_INDEX gen_type7_980 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_980 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_980 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_980 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_980 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_980 [] = {0xFF11,979,0xFFFF};


static struct desc_info desc_980[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_980},
	{1, (BODY_INDEX)-1, 236, gen_type1_980},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 979, gen_type2_980},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_980},
	{14, (BODY_INDEX)-1, 0, gen_type4_980},
	{15, (BODY_INDEX)-1, 979, gen_type5_980},
	{16, (BODY_INDEX)-1, 979, gen_type6_980},
	{17, (BODY_INDEX)-1, 0, gen_type7_980},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_980},
	{21, (BODY_INDEX)-1, 219, gen_type9_980},
	{22, (BODY_INDEX)-1, 219, gen_type10_980},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_980},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 979, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 979, gen_type12_980},
	{15878, (BODY_INDEX)-1, 205, NULL},
	{15879, (BODY_INDEX)-1, 205, NULL},
	{15880, (BODY_INDEX)-1, 205, NULL},
	{15881, (BODY_INDEX)-1, 205, NULL},
	{15882, (BODY_INDEX)-1, 205, NULL},
	{15883, (BODY_INDEX)-1, 205, NULL},
	{15884, (BODY_INDEX)-1, 205, NULL},
	{15885, (BODY_INDEX)-1, 205, NULL},
	{15886, (BODY_INDEX)-1, 205, NULL},
	{15887, (BODY_INDEX)-1, 205, NULL},
	{15888, (BODY_INDEX)-1, 205, NULL},
	{15889, (BODY_INDEX)-1, 205, NULL},
};

extern void Init980(void);
void Init980(void)
{
	IDSC(desc_980, 0, 979);
	IDSC(desc_980 + 1, 1, 979);
	IDSC(desc_980 + 32, 1205, 979);
}


#ifdef __cplusplus
}
#endif
