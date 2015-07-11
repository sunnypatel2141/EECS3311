/*
 * Class TIME_VALIDITY_CHECKER
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
static EIF_TYPE_INDEX gen_type13_911 [] = {0xFF11,868,0xFFFF};
static EIF_TYPE_INDEX gen_type14_911 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type15_911 [] = {0xFF11,219,0xFFFF};


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
	{12724, (BODY_INDEX)-1, 205, NULL},
	{12725, (BODY_INDEX)-1, 205, NULL},
	{12726, (BODY_INDEX)-1, 868, gen_type13_911},
	{12727, (BODY_INDEX)-1, 219, gen_type14_911},
	{12732, (BODY_INDEX)-1, 205, NULL},
	{12733, (BODY_INDEX)-1, 205, NULL},
	{12728, (BODY_INDEX)-1, 205, NULL},
	{12729, (BODY_INDEX)-1, 205, NULL},
	{12730, (BODY_INDEX)-1, 205, NULL},
	{12731, (BODY_INDEX)-1, 219, gen_type15_911},
	{12735, (BODY_INDEX)-1, 205, NULL},
	{12736, (BODY_INDEX)-1, 205, NULL},
	{12737, (BODY_INDEX)-1, 205, NULL},
	{12740, (BODY_INDEX)-1, 193, NULL},
	{12746, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12747, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12748, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12745, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12744, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12738, 8, 193, NULL},
	{12739, 0, 205, NULL},
	{12741, (BODY_INDEX)-1, 205, NULL},
	{12742, (BODY_INDEX)-1, 205, NULL},
	{12743, (BODY_INDEX)-1, 205, NULL},
	{12749, (BODY_INDEX)-1, 205, NULL},
	{12750, (BODY_INDEX)-1, 205, NULL},
	{12751, (BODY_INDEX)-1, 205, NULL},
	{12752, (BODY_INDEX)-1, 205, NULL},
	{12734, (BODY_INDEX)-1, 205, NULL},
	{13238, (BODY_INDEX)-1, 190, NULL},
	{13239, (BODY_INDEX)-1, 190, NULL},
	{13240, (BODY_INDEX)-1, 190, NULL},
};

extern void Init911(void);
void Init911(void)
{
	IDSC(desc_911, 0, 910);
	IDSC(desc_911 + 1, 1, 910);
	IDSC(desc_911 + 32, 392, 910);
	IDSC(desc_911 + 36, 385, 910);
	IDSC(desc_911 + 42, 379, 910);
	IDSC(desc_911 + 51, 372, 910);
	IDSC(desc_911 + 61, 373, 910);
}


#ifdef __cplusplus
}
#endif
