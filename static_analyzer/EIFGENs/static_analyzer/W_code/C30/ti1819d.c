/*
 * Class TIME_VALIDITY_CHECKER
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1819 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1819 [] = {0xFF11,236,0xFF12,1818,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1819 [] = {0xFF11,1818,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1819 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1819 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1819 [] = {0xFF11,1818,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1819 [] = {0xFF11,1818,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1819 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1819 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1819 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1819 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1819 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1819 [] = {0xFF11,1818,0xFFFF};
static EIF_TYPE_INDEX gen_type13_1819 [] = {0xFF11,1004,0xFFFF};
static EIF_TYPE_INDEX gen_type14_1819 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type15_1819 [] = {0xFF11,219,0xFFFF};


static struct desc_info desc_1819[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1819},
	{1, (BODY_INDEX)-1, 236, gen_type1_1819},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1818, gen_type2_1819},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1819},
	{14, (BODY_INDEX)-1, 0, gen_type4_1819},
	{15, (BODY_INDEX)-1, 1818, gen_type5_1819},
	{16, (BODY_INDEX)-1, 1818, gen_type6_1819},
	{17, (BODY_INDEX)-1, 0, gen_type7_1819},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_1819},
	{21, (BODY_INDEX)-1, 219, gen_type9_1819},
	{22, (BODY_INDEX)-1, 219, gen_type10_1819},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_1819},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1818, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1818, gen_type12_1819},
	{18092, (BODY_INDEX)-1, 205, NULL},
	{18093, (BODY_INDEX)-1, 205, NULL},
	{18094, (BODY_INDEX)-1, 1004, gen_type13_1819},
	{18095, (BODY_INDEX)-1, 219, gen_type14_1819},
	{18096, (BODY_INDEX)-1, 205, NULL},
	{18097, (BODY_INDEX)-1, 205, NULL},
	{18098, (BODY_INDEX)-1, 205, NULL},
	{18099, (BODY_INDEX)-1, 205, NULL},
	{18100, (BODY_INDEX)-1, 205, NULL},
	{18101, (BODY_INDEX)-1, 219, gen_type15_1819},
	{18112, (BODY_INDEX)-1, 205, NULL},
	{18113, (BODY_INDEX)-1, 205, NULL},
	{18114, (BODY_INDEX)-1, 205, NULL},
	{18117, (BODY_INDEX)-1, 193, NULL},
	{18104, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{18105, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{18106, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{18103, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{18102, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{18115, 8, 193, NULL},
	{18116, 0, 205, NULL},
	{18118, (BODY_INDEX)-1, 205, NULL},
	{18119, (BODY_INDEX)-1, 205, NULL},
	{18120, (BODY_INDEX)-1, 205, NULL},
	{18107, (BODY_INDEX)-1, 205, NULL},
	{18108, (BODY_INDEX)-1, 205, NULL},
	{18109, (BODY_INDEX)-1, 205, NULL},
	{18110, (BODY_INDEX)-1, 205, NULL},
	{18111, (BODY_INDEX)-1, 205, NULL},
	{26569, (BODY_INDEX)-1, 190, NULL},
	{26570, (BODY_INDEX)-1, 190, NULL},
	{26571, (BODY_INDEX)-1, 190, NULL},
};

extern void Init1819(void);
void Init1819(void)
{
	IDSC(desc_1819, 0, 1818);
	IDSC(desc_1819 + 1, 1, 1818);
	IDSC(desc_1819 + 32, 599, 1818);
	IDSC(desc_1819 + 36, 519, 1818);
	IDSC(desc_1819 + 42, 518, 1818);
	IDSC(desc_1819 + 51, 445, 1818);
	IDSC(desc_1819 + 61, 446, 1818);
}


#ifdef __cplusplus
}
#endif