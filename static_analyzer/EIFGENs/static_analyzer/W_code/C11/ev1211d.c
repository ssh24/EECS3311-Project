/*
 * Class EV_SHARED_GDI_OBJECTS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1211 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1211 [] = {0xFF11,236,0xFF12,1210,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1211 [] = {0xFF11,1210,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1211 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1211 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1211 [] = {0xFF11,1210,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1211 [] = {0xFF11,1210,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1211 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1211 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1211 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1211 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1211 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1211 [] = {0xFF11,1210,0xFFFF};
static EIF_TYPE_INDEX gen_type13_1211 [] = {0xFF11,1291,0xFFFF};
static EIF_TYPE_INDEX gen_type14_1211 [] = {0xFF11,1290,0xFFFF};


static struct desc_info desc_1211[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1211},
	{1, (BODY_INDEX)-1, 236, gen_type1_1211},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1210, gen_type2_1211},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1211},
	{14, (BODY_INDEX)-1, 0, gen_type4_1211},
	{15, (BODY_INDEX)-1, 1210, gen_type5_1211},
	{16, (BODY_INDEX)-1, 1210, gen_type6_1211},
	{17, (BODY_INDEX)-1, 0, gen_type7_1211},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_1211},
	{21, (BODY_INDEX)-1, 219, gen_type9_1211},
	{22, (BODY_INDEX)-1, 219, gen_type10_1211},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_1211},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1210, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1210, gen_type12_1211},
	{18529, (BODY_INDEX)-1, 1291, gen_type13_1211},
	{18530, (BODY_INDEX)-1, 1290, gen_type14_1211},
};

extern void Init1211(void);
void Init1211(void)
{
	IDSC(desc_1211, 0, 1210);
	IDSC(desc_1211 + 1, 1, 1210);
	IDSC(desc_1211 + 32, 966, 1210);
}


#ifdef __cplusplus
}
#endif
