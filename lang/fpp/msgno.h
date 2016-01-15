
/*
 * Copyright 28 May 1996 Sun Microsystems, Inc. All Rights Reserved
 */

#ifndef _MSGNO_H 
#define _MSGNO_H 
/* Error Message Values -
 * This file was created automatically from the error description file.
 * Do not edit this file, edit the error description file:
 *   /home/omazur/olg_lang/f77/fpp/src/fpp_msg.txt
 */

typedef enum msgno_enum {
	MESSAGENOZEROISNOTUSED = 0,
	MSG_LINE,
	MSG_FATAL,
	MSG_ERROR,
	MSG_WARNING,
	MSG_PDVER,
	WARN_DUBL,
	WARN_DUBL1,
	WARN_MREC,
	WARN_PINSUB,
	WARN_BADOPT,
	WARN_PIOP,
	WARN_IMPL,
	WARN_FORMAT,
	WARN_FPP_EXPR,
	ERR_FPP,
	ERR_BADS,
	ERR_NOIF,
	ERR_NOIF1,
	ERR_NOIF2,
	ERR_ELSE,
	ERR_ELSE1,
	ERR_BADNAM,
	ERR_IF,
	ERR_LONG,
	ERR_NOEND,
	ERR_NOPAR,
	ERR_LONG1,
	ERR_NOMATCH,
	ERR_LONG2,
	ERR_NOINC,
	ERR_STR,
	ERR_LCOMM,
	ERR_HRTH,
	ERR_LONGLBL,
	ERR_MREC,
	FERR_CHCK,
	FERR_NOMEM,
	FERR_ARGS,
	FERR_FOPEN,
	FERR_FREAD,
	FERR_FWRITE,
	FERR_MWOFN,
	FERR_NOWDIR,
	MESSAGENOLASTISNOTUSED
} msgno_t;

#endif /* _MSGNO_H */
