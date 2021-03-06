
#line	2	"a.y"
#include "a.h"

#line	4	"a.y"
typedef union 	{
	Sym	*sym;
	long	lval;
	double	dval;
	char	sval[8];
	Addr	addr;
	Gen	gen;
	Gen2	gen2;
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
#define	LCONST	57357
#define	LSP	57358
#define	LSB	57359
#define	LFP	57360
#define	LPC	57361
#define	LTOS	57362
#define	LAREG	57363
#define	LDREG	57364
#define	LFREG	57365
#define	LWID	57366
#define	LFCONST	57367
#define	LSCONST	57368
#define	LNAME	57369
#define	LLAB	57370
#define	LVAR	57371
#define YYEOFCODE 1
#define YYERRCODE 2
short	yyexca[] =
{-1, 1,
	1, -1,
	-2, 0,
};
#define	YYNPROD	98
#define	YYPRIVATE 57344
#define	YYLAST	441
short	yyact[] =
{
  31,  55,  35,  34,  97, 101,   2, 132,  98, 163,
  98, 137,  94, 196, 192,  57, 187, 184, 180,  88,
  25, 133, 178,  78, 170, 169,  78, 166, 165,  48,
  81, 136, 188,  90,  96,  77,  98,  92,  79,  27,
  99, 100,  51,  53, 141,  63,  66, 144,  71,  74,
 109,  88, 195, 179, 177, 114, 113,  57, 108,  80,
 112,  90,  78, 107, 110, 111,  46, 126, 125, 124,
 122, 123, 117, 118, 119, 120, 121,  24,  21, 105,
  22,  23, 115, 116,  20, 171,  90, 129, 130, 134,
  78, 149, 131, 174, 173, 175,  78, 138,  41, 105,
 194, 142, 106, 186, 146, 147,  47, 148, 139, 167,
 127,  45, 159,  57, 150, 152, 103, 104,  78,  78,
  78,  78,  78,  64,  68,  78,  78,  78,  82,  67,
 153, 154, 155, 156, 157, 145, 164, 160, 161, 162,
 158,  26, 168, 151, 127, 143,  42,  43, 119, 120,
 121, 176,  86,  87,  39,  32,   6,  76,  65,  78,
  78,  73,  75,   1,  62,  39,  60,  54, 183,  52,
  37, 181, 182,  72,  70,  30,  42,  43,  36,  50,
 190,  37,  44, 102,  38, 103, 104, 193,  69,  33,
 172,  29,  40,  39,  32,  38, 197,  28, 185,   0,
  61,   0,   0,  40,   0,   0,   0, 189,   0,  37,
 191,   0,   0,   0,  30,  42,  43,  36,  39,  32,
   0,  44,   0,  38,   0,   0,   0,  49,  33,   0,
  29,  40,   0,   0,  37,   0,   0,   0,   0,  30,
  42,  43,  36,   0,   0,   7,  44,   0,  38,   0,
   0,   0,   0,  33,   0,  29,  40,   9,  10,  11,
  12,  13,  14,  15,  16,  17,  18,  19,   0,  39,
  60,   0,   0,  39,  60, 117, 118, 119, 120, 121,
   4,   3,   8,   0,   5,  37,  39,  85,   0,  37,
   0, 132,   0,   0,   0,  91,   0,  44,   0,  38,
   0,  44,  37,  38,  95, 133,   0,  40,  95,  93,
   0,  40,  84,  83,  44,   0,  38,  39,  60,   0,
   0,  61,   0,   0,  40,   0,   0,   0,  39,  60,
   0,   0,   0,  37,   0,   0,   0,  39,  60,   0,
   0,   0,   0,   0,  37,  58,  59,  38,  39,  60,
   0,  56,  61,  37,   0,  40,  58,  59,  38, 140,
   0,  39,  60,  61,  37,   0,  40,  38,  39,  60,
 135,   0,  61,  93,   0,  40,   0,  37,  38,   0,
   0,   0,   0,  61,  37,   0,  40, 128,   0,   0,
   0,  38,   0,   0,   0,   0,  61,   0,  38,  40,
   0,   0,   0,  89,   0,   0,  40, 126, 125, 124,
 122, 123, 117, 118, 119, 120, 121, 125, 124, 122,
 123, 117, 118, 119, 120, 121, 124, 122, 123, 117,
 118, 119, 120, 121, 122, 123, 117, 118, 119, 120,
 121
};
short	yypact[] =
{
-1000, 243,-1000,  44,  38,-1000,  40,  36, -22, 209,
  23, 184, 209, 209, 308, 209, 184, 145, 209, 209,
-1000,-1000, 156,-1000,-1000, 156,-1000,  16,-1000, 277,
 143,   7, 359, 264,  -8,-1000,-1000,-1000,-1000, 156,
 156,-1000,-1000,-1000, 176,-1000,-1000,-1000,-1000, 209,
-1000,  90,-1000,  20,-1000,-1000, 319,   6, 107, 107,
 156, 156,-1000,  17,-1000,-1000,  16,-1000,-1000, 209,
-1000,  13,-1000,-1000,  12, 243, 243, 403,-1000, 403,
 209,-1000,-1000,-1000,-1000, 352, 156, 156, 260, 339,
-1000, -14, -34,-1000,  63, 328,   0,-1000, 115,-1000,
-1000,   3, 127, 156, 156,-1000, 156,-1000,-1000,  62,
-1000,-1000, 319, 209, 209,-1000,-1000, 156, 156, 156,
 156, 156, 133, 104, 156, 156, 156,-1000,-1000,-1000,
-1000, -36, -17,-1000,   0, -18, 100,  -8, -20,-1000,
 -21, -24,  51,-1000,  67, 107,-1000,-1000,  11, -23,
-1000,  10, -25, 137, 137,-1000,-1000,-1000, 156, 156,
 427, 420, 412,  -8, -28,-1000,-1000,-1000,-1000,-1000,
-1000,  92, -29,-1000,-1000,-1000, -12, 209,-1000, 156,
 209, 266, 266,-1000,-1000, -31, 156,-1000,  73,-1000,
   9,-1000,-1000,-1000, -32, 156,-1000,-1000
};
short	yypgo[] =
{
   0,   0,  12, 198, 197, 190,   2,   5,  98,   3,
   4,  29,   1, 111, 141, 106, 179, 174, 173, 169,
 167, 164, 163,   6, 162, 157, 156
};
