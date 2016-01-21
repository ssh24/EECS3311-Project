/*
 * Class KL_CELL [CHARACTER_8]
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_2022 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_2022 [] = {0xFF11,236,0xFF12,2021,184,0xFFFF};
static EIF_TYPE_INDEX gen_type2_2022 [] = {0xFF11,2021,184,0xFFFF};
static EIF_TYPE_INDEX gen_type3_2022 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_2022 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_2022 [] = {0xFF11,2021,184,0xFFFF};
static EIF_TYPE_INDEX gen_type6_2022 [] = {0xFF11,2021,184,0xFFFF};
static EIF_TYPE_INDEX gen_type7_2022 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_2022 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_2022 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_2022 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_2022 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_2022 [] = {2021,184,0xFFFF};
static EIF_TYPE_INDEX gen_type13_2022 [] = {0xFF11,2021,184,0xFFFF};
static EIF_TYPE_INDEX gen_type14_2022 [] = {0xFFF8,1,0xFFFF};
static EIF_TYPE_INDEX gen_type15_2022 [] = {0xFFF8,1,0xFFFF};


static struct desc_info desc_2022[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_2022},
	{1, (BODY_INDEX)-1, 236, gen_type1_2022},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 2021, gen_type2_2022},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_2022},
	{14, (BODY_INDEX)-1, 0, gen_type4_2022},
	{15, (BODY_INDEX)-1, 2021, gen_type5_2022},
	{16, (BODY_INDEX)-1, 2021, gen_type6_2022},
	{17, (BODY_INDEX)-1, 0, gen_type7_2022},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_2022},
	{21, (BODY_INDEX)-1, 219, gen_type9_2022},
	{22, (BODY_INDEX)-1, 219, gen_type10_2022},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_2022},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 2021, gen_type12_2022},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 2021, gen_type13_2022},
	{16826, 0, (EIF_TYPE_INDEX)-1, gen_type14_2022},
	{16827, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{16828, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, gen_type15_2022},
};

extern void Init2022(void);
void Init2022(void)
{
	IDSC(desc_2022, 0, 2021);
	IDSC(desc_2022 + 1, 1, 2021);
	IDSC(desc_2022 + 32, 750, 2021);
}


#ifdef __cplusplus
}
#endif
