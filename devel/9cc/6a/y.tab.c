
#line	2	"a.y"
#include "a.h"

#line	4	"a.y"
typedef union 	{
	Sym	*sym;
	vlong	lval;
	double	dval;
	char	sval[8];
	Gen	gen;
	Gen2	gen2;
} YYSTYPE;
extern	int	yyerrflag;
#ifndef	YYMAXDEPTH
#define	YYMAXDEPTH	150
#endif
YYSTYPE	yylval;
YYSTYPE	yyval;
#define	LTYPE0	57346
#define	LTYPE1	57347
#define	LTYPE2	57348
#define	LTYPE3	57349
#define	LTYPE4	57350
#define	LTYPEC	57351
#define	LTYPED	57352
#define	LTYPEN	57353
#define	LTYPER	57354
#define	LTYPET	57355
#define	LTYPES	57356
#define	LTYPEM	57357
#define	LTYPEI	57358
#define	LTYPEG	57359
#define	LTYPEXC	57360
#define	LTYPEX	57361
#define	LTYPEY	57362
#define	LTYPERT	57363
#define	LCONST	57364
#define	LFP	57365
#define	LPC	57366
#define	LSB	57367
#define	LBREG	57368
#define	LLREG	57369
#define	LSREG	57370
#define	LFREG	57371
#define	LMREG	57372
#define	LXREG	57373
#define	LYREG	57374
#define	LFCONST	57375
#define	LSCONST	57376
#define	LSP	57377
#define	LNAME	57378
#define	LLAB	57379
#define	LVAR	57380
#define YYEOFCODE 1
#define YYERRCODE 2
short	yyexca[] =
{-1, 1,
	1, -1,
	-2, 0,
};
#define	YYNPROD	131
#define	YYPRIVATE 57344
#define	YYLAST	600
short	yyact[] =
{
  50,  62,   2,  48,  49, 125,  81,  52,  63, 262,
 208, 261, 172, 257, 251,  71,  38, 249,  88,  87,
  82,  86,  83,  76, 237, 103, 235, 220, 110, 219,
 114, 210, 209, 114,  85,  70, 173, 238, 232, 101,
  61, 211, 176, 147, 139, 121, 117,  60, 254, 253,
 229,  37, 114, 207,  67, 171, 122, 123, 124,  37,
  65, 228, 227, 226, 130, 225, 222,  95,  97,  99,
  71, 131, 120, 108, 221, 114, 155, 116, 140, 141,
 154,  88,  87, 153,  86,  83, 152, 144, 146, 151,
 138, 150, 149, 143, 137, 148, 136,  85, 129,  34,
  32, 145, 113,  56, 135, 115,  31,  56,  55,  28,
 224,  29,  30, 223, 156, 157,  40,  42,  45,  41,
  43,  46,  47,  27,  58,  44,  53, 242, 178, 179,
  53, 184, 248, 241, 116, 114, 122, 133, 132, 234,
  58, 175,  54, 185, 187, 186,  54, 134, 252, 142,
  57,  74,  64,  63,  57, 195, 194, 168, 170, 114,
 114, 114, 114, 114,  39, 169, 114, 114, 114, 192,
 255, 250, 196, 212,  56,  55, 184, 182, 107, 168,
 170,  78,  35, 218, 213, 183, 217, 169, 215, 105,
 188, 189, 190, 191, 193, 203, 182,  53, 216, 177,
  33,  92, 202, 114, 114,   6,  56,  55, 112, 233,
 111,  72,  73,  54, 236, 127, 128,  69,  74,  91,
   1,  57, 109, 239, 240, 126, 243, 127, 128,  53,
 246, 197, 198, 199, 200, 201, 106, 104, 204, 205,
 206, 102, 100,  58, 245,  54, 160, 161, 162,  98,
  51, 256,  96,  57, 258,  94, 260,  56,  55,  84,
 163, 164, 158, 159, 160, 161, 162, 244,  56,  55,
 247, 259,  90,  79,  77, 230, 231,  75,  66,  59,
  53,  68, 214,   0,  40,  42,  45,  41,  43,  46,
  47,  53,   0,  44,  89,  73,  54,  56,  55,  84,
  80,  51,   0,  63,  57,  72,  73,  54,   0,   0,
   0,   0,  74,   0,   0,  57,   0,   0,   0,   0,
  53,   0,   0,   0,  40,  42,  45,  41,  43,  46,
  47,   0,   0,  44,  89,  73,  54,   7,   0,   0,
   0,  51,   0,  63,  57,   0,   0,   0,   0,   9,
  10,  11,  12,  13,  17,  15,  18,  14,  16,  19,
  20,  21,  24,  22,  23,  25,  26,  56,  55, 167,
 166, 165, 163, 164, 158, 159, 160, 161, 162,   0,
   0,   4,   3,   8,   0,   5,   0,   0,   0,   0,
  53,   0,  56,  55,  40,  42,  45,  41,  43,  46,
  47,   0,   0,  44,  58,   0,  54,   0,   0,   0,
   0,  51,   0,  63,  57,  53,   0,  56,  55,  40,
  42,  45,  41,  43,  46,  47,   0,   0,  44,  58,
   0,  54,   0,   0,   0,  93,  51,   0,   0,  57,
  53,   0,  56,  55,  40,  42,  45,  41,  43,  46,
  47,   0,   0,  44,  58,   0,  54,   0,   0,   0,
  36,  51,   0,   0,  57,  53,   0,  56,  55,  40,
  42,  45,  41,  43,  46,  47,   0,   0,  44,  58,
   0,  54,   0,   0,   0,   0,  51,   0,   0,  57,
  53,   0,   0,   0,  40,  42,  45,  41,  43,  46,
  47,   0,   0,  44,  56,  55,  54,   0,  56,  55,
   0,  51,   0,   0,  57, 167, 166, 165, 163, 164,
 158, 159, 160, 161, 162,   0,   0,  53,   0,   0,
   0,  53, 118,  56,  55,  56,  55,   0,   0,   0,
 119,   0, 181,  54,   0,   0,   0,  54,  74,   0,
   0,  57,  74,   0,   0,  57,  53,   0,  53, 158,
 159, 160, 161, 162,   0, 174,   0, 180,   0,   0,
   0,   0,  54,   0,  54,   0,   0,  74,   0,  74,
  57,   0,  57, 166, 165, 163, 164, 158, 159, 160,
 161, 162, 165, 163, 164, 158, 159, 160, 161, 162
};
short	yypact[] =
{
-1000, 335,-1000,  74,  60,-1000,  62,  56,  49,  47,
 408, 358, 358, 433, 165,  78, 197, 248, 383, 358,
 358, 358,  80, -47, 197, 358, -47,-1000,-1000, 526,
-1000,-1000, 526,-1000,-1000,-1000, 433,-1000,-1000,-1000,
-1000,-1000,-1000,-1000,-1000,-1000,-1000,-1000,-1000,-1000,
  -7, 495,  -8,-1000,-1000, 526, 526, 526, 218,-1000,
  46,-1000,-1000,  94,-1000,  44,-1000,  42,-1000, 259,
-1000,  -9, 206, 206, 526,-1000, 137,-1000,  41,-1000,
 288,-1000,-1000,-1000, 458,-1000,-1000,-1000, -10, 218,
-1000,-1000,-1000, 433,-1000,  40,-1000,  39,-1000,  37,
-1000,  34,-1000,  31,-1000,  28,-1000,-1000,  24,-1000,
-1000, 335, 335, 365,-1000, 365,-1000, 120,   1, -18,
 511, 104,-1000,-1000,-1000, -11, 191, 526, 526,-1000,
-1000,-1000,-1000,-1000, 524, 499, 433, 358,-1000,  97,
-1000,-1000, 526,  98,-1000,-1000,-1000, 142, -11, 433,
 433, 433, 433, 433,  98, 433,-1000,-1000, 526, 526,
 526, 526, 526, 195, 187, 526, 526, 526,  -1, -22,
 -23, -12, 526,-1000,-1000, 173, 153, 206,-1000,-1000,
 -25,-1000,-1000,-1000, -27,  22,-1000,  14,  64,  61,
-1000,  13,  11,  10,-1000,   9,  -2, 235, 235,-1000,
-1000,-1000, 526, 526, 253, 586, 578, -15, 526,-1000,
-1000, 102, -28, 526, -30,-1000,-1000,-1000, -16,-1000,
-1000, -47, -47,  96,  89, 526, 433,  80, -47, 433,
 550, 550,  95, -37, 160,-1000, -40,-1000, 113,-1000,
-1000,-1000,-1000,-1000,  -3,  -4,-1000,-1000, 159,-1000,
 526,-1000, -41, 526,  80, 526, -43,-1000,-1000,-1000,
 -45,-1000,-1000
};
short	yypgo[] =
{
   0,   0,  72, 282,   5, 164,   1,  16,   7,  20,
  40,  47,   6,   3,   4, 200, 281, 182, 279, 152,
 278, 277, 274, 273, 272, 255, 252, 249, 242, 241,
 237, 236, 222, 220,   2, 210, 208, 205
};
