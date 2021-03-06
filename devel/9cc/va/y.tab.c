
#line	2	"a.y"
#include "a.h"

#line	4	"a.y"
typedef union 
{
	Sym	*sym;
	vlong	lval;
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
 104,  68, 122,  46,  36, 180,  38, 138,  49,  39,
 133,  92,  50,  48,  41,  48,  43,  42, 134,  48,
  48,  82,  82, 124,  85,  86,  87,  78,  48,  48,
  40,  47,   2,  40, 103, 105, 184, 264, 258, 255,
 100, 107,  37,  37,  59, 244,  57,  75, 240, 239,
 238, 112, 235, 232, 118, 119, 120, 231, 229, 113,
 186,  76,  77, 256, 111, 245, 121,  81,  84, 189,
  88,  89,  90,  99, 215, 198, 147, 135, 135,  41,
 131, 130,  42, 129, 123,  93, 108,  60, 141, 153,
 249, 248,  48, 155, 247,  60, 142, 246,  45, 152,
  45, 242, 230, 156,  79,  80, 228, 158, 151, 175,
 150,  48, 149, 146, 177, 145, 173, 144, 118, 176,
 143, 179, 132, 139, 139, 128, 110, 191, 192,  48,
 194, 195, 196, 188, 159, 160, 109, 157, 174, 106,
 193,  37, 197, 199, 204, 153, 153, 209,  35, 210,
 202, 211, 212, 208, 206, 205, 207,  34,  33,  48,
 200, 201, 203,  30,  31, 218, 219, 220, 221, 222,
 217,  32, 225, 226, 227,  29, 214, 243, 216,  54,
  53, 182, 181, 183, 243, 234,  54,  53,  41,  41,
 139,  42,  42, 233, 263, 236, 178,  73, 182, 181,
 183,  74, 148, 213,  51, 224,  41,  74, 202,  42,
 190,  51, 199,  41, 237, 223,  42, 182, 181, 183,
 164, 165, 166, 154, 137,  52, 251, 252,  94,  96,
  83,  95,  52,  55,  44, 254,   8,  83, 102,  40,
  55, 101, 241,  63,  65,   1,  64, 153,  61,  62,
   0, 262, 261,   0, 260, 202,   0, 259,   0, 250,
 253,   0,  37,   9, 171, 170, 169, 167, 168, 162,
 163, 164, 165, 166, 257,  10,  11,  12,  13,  14,
  15,  16,  17,  18,  19,  20,  21,  22,  23,  24,
  25,  26,  27,  28,   0,  54,  53, 125,   0, 126,
 127, 171, 170, 169, 167, 168, 162, 163, 164, 165,
 166,   6, 126, 127,   4,   3,   5,   0,   0,   7,
  51, 187,  54,  53,   0,  97,  98,  69,   0,  41,
  73,  71,  42,  70,  74,  72,   0,   0,   0,  58,
   0,  52,   0,   0,   0,  60,  56,  51,   0,  55,
  54,  53,  97,  98,  69, 172,  41,  73,  71,  42,
  70,  74,  72,   0,   0,   0,  58,   0,  52,   0,
   0,   0,  91,  56,   0,  51,  55,  54,  53,   0,
  66,  67,  69,   0,  41,  73,  71,  42,  70,  74,
  72,   0,   0,   0,  58,   0,  52,  54, 117, 114,
   0,  56,  51,  50,  55,   0,   0,  97,  98,  69,
   0,  41,  73,  71,  42,  70,  74,  72,   0,  54,
  53,  58,  51,  52,   0,  54,  53,   0,  56,   0,
   0,  55,   0,   0,   0,   0,  54,  53,   0, 116,
 115,  58,   0,  52,  51,   0,   0,   0,  56,   0,
  51,  55,   0,  41,   0,   0,  42,   0,   0,  41,
   0,  51,  42,  58,   0,  52,  54,  53,   0,  58,
  56,  52,  50,  55,   0,   0,  56,  54,  53,  55,
 154, 137,  52,  54,  53,   0,   0,  83,   0,   0,
  55,  51,   0,   0,  54,  53,   0,   0,   0,   0,
  41,   0,  51,  42,   0,  54,  53,   0,  51,   0,
   0,   0,  52,   0,  54,  53,   0,  83,   0,  51,
  55, 136, 137,  52,  54,  53,   0,  58, 140,  52,
  51,  55,   0,   0,  56,   0,   0,  55,  58,  51,
  52,   0,   0,   0,   0, 140,   0, 185,  55,  51,
   0,  52,   0,   0,   0,   0,  83,   0,  58,  55,
  52,   0,   0,   0,   0,  83,   0,   0,  55,   0,
  52,   0,   0,   0,   0,  83,   0,   0,  55, 171,
 170, 169, 167, 168, 162, 163, 164, 165, 166, 170,
 169, 167, 168, 162, 163, 164, 165, 166, 169, 167,
 168, 162, 163, 164, 165, 166, 167, 168, 162, 163,
 164, 165, 166, 162, 163, 164, 165, 166,   0,   0,
   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
   0,   0,   0, 161
};
short	yypact[] =
{
-1000, 261,-1000, 119, 107, 114, 100,-1000,  99,  90,
 -29, -29, 410,  28, 341, 145,  28,  36, 416, 416,
 505, 505, 153, 153, 153,  28,  28, 313, 286,-1000,
-1000, 515, 515,-1000,-1000,-1000,  80,-1000,-1000,-1000,
 515,-1000,  26,  77,  67,-1000,-1000,-1000,   4,-1000,
 388,-1000,-1000, 515, 515, 515, 457,  24, 290,-1000,
-1000,  66,-1000,-1000,-1000,-1000,-1000,-1000,-1000,-1000,
  23,-1000,  21,-1000,  20,  63, 468, 468,  61,  58,
  56,  54,  16, 515, 190,  53,  51,  49, 427, -50,
-1000, 368,  28,-1000,-1000,-1000,-1000,-1000,-1000,-1000,
  48, 261, 261, 575,-1000, 297, 145,-1000, 515, -29,
 416, 163,   4,-1000, -26,-1000,-1000, 496,-1000,-1000,
-1000,  -1, 260, 145,   9, 202, 515, 515, 368, 515,
 515, 515, 145,-1000,-1000,  15, 290, 303,-1000,-1000,
 457,-1000,-1000, 485, 170, 427, 177, 182, 515, 153,
 159, 132,-1000,  14, 303,-1000,-1000,-1000, 368,-1000,
-1000,-1000, 515, 515, 515, 515, 515, 208, 197, 515,
 515, 515,-1000,  47,-1000,  -3,  43,-1000,-1000,  -4,
  -8,-1000,-1000,-1000, 474,-1000,-1000,-1000,  -9, 182,
 303,-1000,-1000,-1000, -11, -12, -13,  42, 146,-1000,
   9,-1000, -16,-1000,   5,-1000,  38,-1000,-1000,  35,
  32,-1000,-1000,  31,  28, 139,-1000,-1000, 209, 209,
-1000,-1000,-1000, 515, 515, 599, 592, 584, 145,-1000,
 -29,-1000,-1000,-1000,   4,-1000, -22,   3,-1000,-1000,
-1000,-1000, 145, -23,-1000, 163, 427, -32, -50, 153,
-1000, 604, 604,-1000,-1000,-1000, 158,-1000,-1000,-1000,
-1000,-1000,-1000, -24,-1000
};
short	yypgo[] =
{
   0,   0,   2,   5,  23,   9,  85,  11, 234, 248,
  10,  31,   1, 231, 229,   6,   3,   7,  46,   8,
   4,  18, 228, 245,  32, 241, 238, 236,  44
};
