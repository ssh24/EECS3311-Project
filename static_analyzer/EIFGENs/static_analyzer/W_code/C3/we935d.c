/*
 * Class WEL_IDB_CONSTANTS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_935 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_935 [] = {0xFF11,236,0xFF12,934,0xFFFF};
static EIF_TYPE_INDEX gen_type2_935 [] = {0xFF11,934,0xFFFF};
static EIF_TYPE_INDEX gen_type3_935 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_935 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_935 [] = {0xFF11,934,0xFFFF};
static EIF_TYPE_INDEX gen_type6_935 [] = {0xFF11,934,0xFFFF};
static EIF_TYPE_INDEX gen_type7_935 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_935 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_935 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_935 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_935 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_935 [] = {0xFF11,934,0xFFFF};


static struct desc_info desc_935[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_935},
	{1, (BODY_INDEX)-1, 236, gen_type1_935},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 934, gen_type2_935},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_935},
	{14, (BODY_INDEX)-1, 0, gen_type4_935},
	{15, (BODY_INDEX)-1, 934, gen_type5_935},
	{16, (BODY_INDEX)-1, 934, gen_type6_935},
	{17, (BODY_INDEX)-1, 0, gen_type7_935},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_935},
	{21, (BODY_INDEX)-1, 219, gen_type9_935},
	{22, (BODY_INDEX)-1, 219, gen_type10_935},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_935},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 934, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 934, gen_type12_935},
	{15383, (BODY_INDEX)-1, 205, NULL},
	{15384, (BODY_INDEX)-1, 205, NULL},
	{15385, (BODY_INDEX)-1, 205, NULL},
	{15386, (BODY_INDEX)-1, 205, NULL},
	{15382, (BODY_INDEX)-1, 190, NULL},
};

extern void Init935(void);
void Init935(void)
{
	IDSC(desc_935, 0, 934);
	IDSC(desc_935 + 1, 1, 934);
	IDSC(desc_935 + 32, 1462, 934);
}


#ifdef __cplusplus
}
#endif
