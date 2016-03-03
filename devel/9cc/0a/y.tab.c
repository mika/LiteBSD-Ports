
#line	2	"a.y"
#include "a.h"

#line	4	"a.y"
typedef union 
{
	Sym	*sym;
	long	lval;
	double	dval;
	char	sval[8];
	Gen	gen;
} YYSTYPE;
extern	int	yyerrflag;
#ifndef	YYMAXDEPTH
#define	YYMAXDEPTH	150
#endif
YYSTYPE	yylval;
YYSTYPE	yyval;
#define	LTYPE1	57346
#define	LTYPE2	57347
#define	LTYPE3	57348
#define	LTYPE4	57349
#define	LTYPE5	57350
#define	LTYPE6	57351
#define	LTYPE7	57352
#define	LTYPE8	57353
#define	LTYPE9	57354
#define	LTYPEA	57355
#define	LTYPEB	57356
#define	LTYPEC	57357
#define	LTYPED	57358
#define	LTYPEE	57359
#define	LTYPEF	57360
#define	LTYPEG	57361
#define	LTYPEH	57362
#define	LTYPEI	57363
#define	LTYPEJ	57364
#define	LTYPEK	57365
#define	LCONST	57366
#define	LSP	57367
#define	LSB	57368
#define	LFP	57369
#define	LPC	57370
#define	LHI	57371
#define	LLO	57372
#define	LMREG	57373
#define	LTYPEX	57374
#define	LREG	57375
#define	LFREG	57376
#define	LFCREG	57377
#define	LR	57378
#define	LM	57379
#define	LF	57380
#define	LFCR	57381
#define	LSCHED	57382
#define	LFCONST	57383
#define	LSCONST	57384
#define	LNAME	57385
#define	LLAB	57386
#define	LVAR	57387
#define YYEOFCODE 1
#define YYERRCODE 2
short	yyexca[] =
{-1, 1,
	1, -1,
	-2, 0,
};
#define	YYNPROD	119
#define	YYPRIVATE 57344
#define	YYLAST	634
short	yyact[] =
{
 104,  68,  36,  46, 122, 180,  38, 138,  49,  39,
 133,  50,   2,  48,  43,  48,  40, 184,  57,  48,
  48,  82,  82, 124,  85,  86,  87,  78,  48,  48,
 264,  47, 258,  54,  53, 255, 103, 105, 244,  81,
  84, 107,  37,  37,  59, 134, 240,  75, 239,  41,
 238, 112,  42, 235, 118, 119, 120, 232,  51, 113,
 231,  76,  77, 186,  41,  92, 121,  42,  40, 256,
  88,  89,  90,  99, 111, 245, 189, 135, 135,  52,
  60,  29, 215, 198,  83,  93,  40,  55, 141, 153,
 147, 131,  48, 155, 100, 139, 139, 130,  45, 152,
  45, 129, 123, 108,  79,  80,  60, 249, 248, 247,
 246,  48, 177, 175, 159, 160, 173, 242, 118, 176,
 230, 179, 228, 142, 158, 151, 150, 191, 192,  48,
 194, 195, 196, 188, 149, 146, 145, 157, 174, 144,
 143,  37, 197, 199, 204, 153, 153, 209, 132, 210,
 202, 211, 212, 208, 206, 205, 207, 156, 128,  48,
 200, 201, 139, 110, 109,  54,  53, 218, 219, 220,
 221, 222, 106,  35, 225, 226, 227,  34, 216,  33,
  32,  54,  53,  30,  31, 234, 214,  73, 213, 203,
  51,  74,  74, 233, 193, 236, 178,  41, 243,  41,
  42, 263,  42, 182, 181, 183,  51, 148, 202, 154,
 137,  52, 199, 224, 237,  41,  83, 223,  42,  55,
 164, 165, 166, 190, 217,  58,  94,  52, 251, 252,
   8,  96,  56, 254,  50,  55, 102, 182, 181, 183,
 243,  63, 241,  95, 101,  41,  65, 153,  42, 126,
 127, 262, 261,   1, 260, 202,  61, 259,  64, 250,
 253,   0,  37,   9, 171, 170, 169, 167, 168, 162,
 163, 164, 165, 166, 257,  10,  11,  12,  13,  14,
  15,  16,  17,  18,  19,  20,  21,  22,  23,  24,
  25,  26,  27,  28,  44,  54,  53,   0, 171, 170,
 169, 167, 168, 162, 163, 164, 165, 166,   0,  62,
 125,   6, 126, 127,   4,   3,   5,   0,   0,   7,
  51, 229,  54,  53,   0,  97,  98,  69,   0,  41,
  73,  71,  42,  70,  74,  72,   0,   0,   0,  58,
   0,  52,   0,   0,   0,  60,  56,  51,   0,  55,
  54,  53,  97,  98,  69, 187,  41,  73,  71,  42,
  70,  74,  72, 182, 181, 183,  58,   0,  52,   0,
   0,  41,  91,  56,  42,  51,  55,  54,  53,   0,
  66,  67,  69,   0,  41,  73,  71,  42,  70,  74,
  72,   0,   0,   0,  58,   0,  52,  54, 117, 114,
   0,  56,  51,  50,  55,   0,   0,  97,  98,  69,
   0,  41,  73,  71,  42,  70,  74,  72,   0,  54,
  53,  58,  51,  52,   0,   0,   0,   0,  56,   0,
   0,  55,  54,  53,  54,  53,   0,   0,   0, 116,
 115,  58,   0,  52,  51,   0,   0,   0,  56,  54,
  53,  55,   0,  41,   0,   0,  42,  51,   0,  51,
   0,   0,   0,  58,   0,  52,  54,  53,  41,   0,
  56,  42,   0,  55,  51,   0, 154, 137,  52,   0,
  52,  54,  53,  83,   0,  83,  55,   0,  55,   0,
   0,  51,   0, 136, 137,  52,  54,  53,   0,   0,
 140,   0,   0,  55,   0,   0,  51,   0,  54,  53,
  58,   0,  52,   0,  54,  53,   0,  56,   0,   0,
  55,  51,   0,   0,   0,  58,   0,  52,   0,   0,
   0,   0, 140,  51,   0,  55,   0,   0, 185,  51,
   0,   0,  52,   0,   0,   0,   0,  83,   0,   0,
  55,   0,  58,   0,  52,   0,   0,   0,   0,  83,
  52,   0,  55,   0,   0,  83,   0,   0,  55, 171,
 170, 169, 167, 168, 162, 163, 164, 165, 166, 171,
 170, 169, 167, 168, 162, 163, 164, 165, 166, 170,
 169, 167, 168, 162, 163, 164, 165, 166, 169, 167,
 168, 162, 163, 164, 165, 166, 167, 168, 162, 163,
 164, 165, 166, 162, 163, 164, 165, 166,   0,   0,
   0,   0,   0, 172,   0,   0,   0,   0,   0,   0,
   0,   0,   0, 161
};
short	yypact[] =
{
-1000, 261,-1000,  25, 127, 123, 121,-1000, 119, 115,
   6,   6, 172,  47, 341, 154,  47,  21, 410, 410,
 499, 499, 143, 143, 143,  47,  47, 313, 286,-1000,
-1000, 505, 505,-1000,-1000,-1000, 113,-1000,-1000,-1000,
 505,-1000,  43, 105, 104,-1000,-1000,-1000,  14,-1000,
 388,-1000,-1000, 505, 505, 505, 425,  42, 303,-1000,
-1000,  99,-1000,-1000,-1000,-1000,-1000,-1000,-1000,-1000,
  41,-1000,  37,-1000,  31,  89, 440, 440,  81,  80,
  77,  76,  30, 505, 195,  75,  67,  66, 423, -51,
-1000, 368,  47,-1000,-1000,-1000,-1000,-1000,-1000,-1000,
  65, 261, 261, 575,-1000, 565, 154,-1000, 505,   6,
 410, 328,  14,-1000, -45,-1000,-1000, 487,-1000,-1000,
-1000,   2, 294, 154,  16, 215, 505, 505, 368, 505,
 505, 505, 154,-1000,-1000,  23, 303, 240,-1000,-1000,
 425,-1000,-1000, 472, 156, 423,  24, 168, 505, 143,
 144, 142,-1000,  22, 240,-1000,-1000,-1000, 368,-1000,
-1000,-1000, 505, 505, 505, 505, 505, 210, 205, 505,
 505, 505,-1000,  63,-1000, 260,  61,-1000,-1000,  -1,
  -4,-1000,-1000,-1000, 457,-1000,-1000,-1000,  -8, 168,
 240,-1000,-1000,-1000, -11, -13, -15,  58, 202,-1000,
  16,-1000, -23,-1000,  15,-1000,  51,-1000,-1000,  50,
  49,-1000,-1000,  48,  47, 160,-1000,-1000, 209, 209,
-1000,-1000,-1000, 505, 505, 599, 592, 584, 154,-1000,
   6,-1000,-1000,-1000,  14,-1000, -26,   9,-1000,-1000,
-1000,-1000, 154, -29,-1000, 328, 423, -46, -51, 143,
-1000, 604, 604,-1000,-1000,-1000, 165,-1000,-1000,-1000,
-1000,-1000,-1000, -31,-1000
};
short	yypgo[] =
{
   0,   0,   4,   5,  23,   9,  85,  65, 294, 256,
  10,  31,   1, 243, 231,   6,   3,   7,  18,   8,
   2,  45, 226, 253,  12, 244, 236, 230,  44
};
