/*
 * Class BOARD_TEMPLATES_ACCESS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_866 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type1_866 [] = {0xFF11,916,865,0xFFFF};
static EIF_TYPE_INDEX gen_type2_866 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_866 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_866 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type5_866 [] = {0xFF11,13,0xFFFF};
static EIF_TYPE_INDEX gen_type6_866 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type7_866 [] = {0xFF11,219,0xFFFF};
static EIF_TYPE_INDEX gen_type8_866 [] = {0xFF11,14,0xFFFF};
static EIF_TYPE_INDEX gen_type9_866 [] = {0xFF11,862,0xFFFF};


static struct desc_info desc_866[] = {
	{(BODY_INDEX) 12682, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 219, gen_type0_866},
	{1, (BODY_INDEX)-1, 916, gen_type1_866},
	{2, (BODY_INDEX)-1, 190, NULL},
	{3, (BODY_INDEX)-1, 190, NULL},
	{4, (BODY_INDEX)-1, 190, NULL},
	{5, (BODY_INDEX)-1, 190, NULL},
	{6, (BODY_INDEX)-1, 190, NULL},
	{7, (BODY_INDEX)-1, 190, NULL},
	{8, (BODY_INDEX)-1, 190, NULL},
	{9, (BODY_INDEX)-1, 190, NULL},
	{10, (BODY_INDEX)-1, 865, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type2_866},
	{14, (BODY_INDEX)-1, 0, gen_type3_866},
	{15, (BODY_INDEX)-1, 865, NULL},
	{16, (BODY_INDEX)-1, 865, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type4_866},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 13, gen_type5_866},
	{21, (BODY_INDEX)-1, 219, gen_type6_866},
	{22, (BODY_INDEX)-1, 219, gen_type7_866},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, gen_type8_866},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 865, NULL},
	{29, (BODY_INDEX)-1, 214, NULL},
	{30, (BODY_INDEX)-1, 865, NULL},
	{12681, (BODY_INDEX)-1, 862, gen_type9_866},
};

extern void Init866(void);
void Init866(void)
{
	IDSC(desc_866, 0, 865);
	IDSC(desc_866 + 1, 1, 865);
	IDSC(desc_866 + 32, 349, 865);
}


#ifdef __cplusplus
}
#endif
