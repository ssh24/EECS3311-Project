/*
 * Class EV_CHARACTER_FORMAT_EFFECTS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_914 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_914 [] = {0xFF11,236,0xFF12,913,0xFFFF};
static EIF_TYPE_INDEX gen_type2_914 [] = {0xFF11,913,0xFFFF};
static EIF_TYPE_INDEX gen_type3_914 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_914 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_914 [] = {0xFF11,913,0xFFFF};
static EIF_TYPE_INDEX gen_type6_914 [] = {0xFF11,913,0xFFFF};
static EIF_TYPE_INDEX gen_type7_914 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_914 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_914 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_914 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_914 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_914 [] = {0xFF11,913,0xFFFF};


static struct desc_info desc_914[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_914},
	{1, (BODY_INDEX)-1, 236, gen_type1_914},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 913, gen_type2_914},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_914},
	{14, (BODY_INDEX)-1, 0, gen_type4_914},
	{15, (BODY_INDEX)-1, 913, gen_type5_914},
	{16, (BODY_INDEX)-1, 913, gen_type6_914},
	{17, (BODY_INDEX)-1, 0, gen_type7_914},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_914},
	{21, (BODY_INDEX)-1, 219, gen_type9_914},
	{22, (BODY_INDEX)-1, 219, gen_type10_914},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_914},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 913, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 913, gen_type12_914},
	{15000, 0, 190, NULL},
	{15001, 1, 190, NULL},
	{15002, 4, 205, NULL},
	{15003, (BODY_INDEX)-1, 190, NULL},
	{15004, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{15005, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{15006, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{15007, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{15008, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init914(void);
void Init914(void)
{
	IDSC(desc_914, 0, 913);
	IDSC(desc_914 + 1, 1, 913);
	IDSC(desc_914 + 32, 816, 913);
}


#ifdef __cplusplus
}
#endif
