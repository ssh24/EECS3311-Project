/*
 * Class WEL_EN_SELCHANGE_CONSTANTS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_913 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_913 [] = {0xFF11,236,0xFF12,912,0xFFFF};
static EIF_TYPE_INDEX gen_type2_913 [] = {0xFF11,912,0xFFFF};
static EIF_TYPE_INDEX gen_type3_913 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_913 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_913 [] = {0xFF11,912,0xFFFF};
static EIF_TYPE_INDEX gen_type6_913 [] = {0xFF11,912,0xFFFF};
static EIF_TYPE_INDEX gen_type7_913 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_913 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_913 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_913 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_913 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_913 [] = {0xFF11,912,0xFFFF};


static struct desc_info desc_913[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_913},
	{1, (BODY_INDEX)-1, 236, gen_type1_913},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 912, gen_type2_913},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_913},
	{14, (BODY_INDEX)-1, 0, gen_type4_913},
	{15, (BODY_INDEX)-1, 912, gen_type5_913},
	{16, (BODY_INDEX)-1, 912, gen_type6_913},
	{17, (BODY_INDEX)-1, 0, gen_type7_913},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_913},
	{21, (BODY_INDEX)-1, 219, gen_type9_913},
	{22, (BODY_INDEX)-1, 219, gen_type10_913},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_913},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 912, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 912, gen_type12_913},
	{14995, (BODY_INDEX)-1, 205, NULL},
	{14996, (BODY_INDEX)-1, 205, NULL},
	{14997, (BODY_INDEX)-1, 205, NULL},
	{14998, (BODY_INDEX)-1, 205, NULL},
	{14999, (BODY_INDEX)-1, 205, NULL},
};

extern void Init913(void);
void Init913(void)
{
	IDSC(desc_913, 0, 912);
	IDSC(desc_913 + 1, 1, 912);
	IDSC(desc_913 + 32, 829, 912);
}


#ifdef __cplusplus
}
#endif
