/*
 * Class EV_RADIO_PEER_I
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_1680 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_1680 [] = {0xFF11,236,0xFF12,1679,0xFFFF};
static EIF_TYPE_INDEX gen_type2_1680 [] = {0xFF11,1679,0xFFFF};
static EIF_TYPE_INDEX gen_type3_1680 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_1680 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_1680 [] = {0xFF11,1679,0xFFFF};
static EIF_TYPE_INDEX gen_type6_1680 [] = {0xFF11,1679,0xFFFF};
static EIF_TYPE_INDEX gen_type7_1680 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type8_1680 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type9_1680 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type10_1680 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type11_1680 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type12_1680 [] = {0xFF11,1679,0xFFFF};
static EIF_TYPE_INDEX gen_type13_1680 [] = {0xFF11,0xFF11,1562,0xFFFF};
static EIF_TYPE_INDEX gen_type14_1680 [] = {0xFF11,361,0xFF11,0xFF11,1562,0xFFFF};
static EIF_TYPE_INDEX gen_type15_1680 [] = {0xFF11,0xFF11,1562,0xFFFF};


static struct desc_info desc_1680[] = {
	{(BODY_INDEX) -1, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_1680},
	{1, (BODY_INDEX)-1, 236, gen_type1_1680},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 1679, gen_type2_1680},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type3_1680},
	{14, (BODY_INDEX)-1, 0, gen_type4_1680},
	{15, (BODY_INDEX)-1, 1679, gen_type5_1680},
	{16, (BODY_INDEX)-1, 1679, gen_type6_1680},
	{17, (BODY_INDEX)-1, 0, gen_type7_1680},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type8_1680},
	{21, (BODY_INDEX)-1, 219, gen_type9_1680},
	{22, (BODY_INDEX)-1, 219, gen_type10_1680},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type11_1680},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 1679, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 1679, gen_type12_1680},
	{24692, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24693, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24694, (BODY_INDEX)-1, 190, NULL},
	{24695, (BODY_INDEX)-1, 1562, gen_type13_1680},
	{25166, 0, 1562, NULL},
	{24697, 8, 175, NULL},
	{24698, (BODY_INDEX)-1, 175, NULL},
	{24699, (BODY_INDEX)-1, 175, NULL},
	{24700, (BODY_INDEX)-1, 175, NULL},
	{24701, (BODY_INDEX)-1, 175, NULL},
	{24702, (BODY_INDEX)-1, 175, NULL},
	{24703, (BODY_INDEX)-1, 175, NULL},
	{24704, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24705, (BODY_INDEX)-1, 190, NULL},
	{24706, (BODY_INDEX)-1, 190, NULL},
	{24707, (BODY_INDEX)-1, 190, NULL},
	{24708, (BODY_INDEX)-1, 190, NULL},
	{24709, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24710, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24711, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24712, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24713, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24714, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24715, (BODY_INDEX)-1, 190, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 190, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 361, gen_type14_1680},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, 1562, gen_type15_1680},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init1680(void);
void Init1680(void)
{
	IDSC(desc_1680, 0, 1679);
	IDSC(desc_1680 + 1, 1, 1679);
	IDSC(desc_1680 + 32, 552, 1679);
	IDSC(desc_1680 + 59, 1261, 1679);
}


#ifdef __cplusplus
}
#endif