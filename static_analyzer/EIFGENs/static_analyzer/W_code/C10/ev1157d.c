/*
 * Class EV_BMP_FORMAT
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1157 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1157 [] = {0xFF11,236,0xFF12,1156,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1157 [] = {0xFF11,1156,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1157 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1157 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1157 [] = {0xFF11,1156,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1157 [] = {0xFF11,1156,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1157 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1157 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1157 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1157 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1157 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1157 [] = {0xFF11,1156,0xFFFF};
static EIF_TYPE_INDEX gen_type13_1157 [] = {0xFF11,225,0xFFFF};


static struct desc_info desc_1157[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1157},
	{1, (BODY_INDEX)-1, 236, gen_type1_1157},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1156, gen_type2_1157},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1157},
	{14, (BODY_INDEX)-1, 0, gen_type4_1157},
	{15, (BODY_INDEX)-1, 1156, gen_type5_1157},
	{16, (BODY_INDEX)-1, 1156, gen_type6_1157},
	{17, (BODY_INDEX)-1, 0, gen_type7_1157},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_1157},
	{21, (BODY_INDEX)-1, 219, gen_type9_1157},
	{22, (BODY_INDEX)-1, 219, gen_type10_1157},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_1157},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1156, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1156, gen_type12_1157},
	{18080, 0, 205, NULL},
	{18081, 4, 205, NULL},
	{18082, 8, 205, NULL},
	{18090, (BODY_INDEX)-1, 225, gen_type13_1157},
	{18083, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{18084, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{18085, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{18086, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{18087, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{18091, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init1157(void);
void Init1157(void)
{
	IDSC(desc_1157, 0, 1156);
	IDSC(desc_1157 + 1, 1, 1156);
	IDSC(desc_1157 + 32, 651, 1156);
}


#ifdef __cplusplus
}
#endif
