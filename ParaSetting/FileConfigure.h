/*hdr
**
**	Copyright Mox Products, Australia
**
**	FILE NAME:	FileConfigure.c
**
**	AUTHOR:		Jeff Wang
**
**	DATE:		09 - May - 2009
**
**	FILE DESCRIPTION:
**				
**
**	FUNCTIONS:
**
**	NOTES:
** 
*/
#ifndef FILECONFIGURE_H
#define FILECONFIGURE_H
/************** SYSTEM INCLUDE FILES **************************************************************************/


/************** USER INCLUDE FILES ****************************************************************************/

#include "MXCommon.h"
#include "MXTypes.h"
#include "AccessCommon.h"

/************** DEFINES ***************************************************************************************/

#define PKTFLAG_FIRST	1
#define PKTFLAG_MIDDLE	2
#define PKTFLAG_LAST	3


#define DWNLDFILE_PKTFLAG_OFFSET	0
#define DWNLDFILE_PKTFLAG_LEN		1

#define DWNLDFILE_PKTINDEX_OFFSET	(DWNLDFILE_PKTFLAG_OFFSET + DWNLDFILE_PKTFLAG_LEN)
#define DWNLDFILE_PKTINDEX_LEN		2

#define DWNLDFILE_FILELEN_OFFSET	(DWNLDFILE_PKTINDEX_OFFSET + DWNLDFILE_PKTINDEX_LEN)
#define DWNLDFILE_FILELEN_LEN		4

#define DWNLDFILE_FILEDATA_OFFSET	(DWNLDFILE_FILELEN_OFFSET + DWNLDFILE_FILELEN_LEN)


#define UPLDFILE_INDEX_OFFSET	0
#define UPLDFILE_INDEX_LEN		2

#define UPLDFILE_STAPOS_OFFSET		(UPLDFILE_INDEX_OFFSET + UPLDFILE_INDEX_LEN)
#define UPLDFILE_STAPOS_LEN		4

#define UPLDFILE_FILENAMELEN_OFFSET	(UPLDFILE_STAPOS_OFFSET + UPLDFILE_STAPOS_LEN)
#define UPLDFILE_FILENAMELEN_LEN	2

#define UPLDFILE_FILENAME_OFFSET	(UPLDFILE_FILENAMELEN_OFFSET + UPLDFILE_FILENAMELEN_LEN)


#define UPLDFILE_FILELEN_OFFSET		(UPLDFILE_INDEX_OFFSET + UPLDFILE_INDEX_LEN)
#define UPLDFILE_FILELEN_LEN		4

#define UPLDFILE_RESULT_OFFSET		(UPLDFILE_FILELEN_OFFSET + UPLDFILE_FILELEN_LEN)
#define UPLDFILE_RESULT_LEN			1

#define UPLDFILE_PKTLEN_OFFSET		(UPLDFILE_RESULT_OFFSET + UPLDFILE_RESULT_LEN)
#define UPLDFILE_PKTLEN_LEN			2

#define UPLDFILE_FILEDATA_OFFSET		(UPLDFILE_PKTLEN_OFFSET + UPLDFILE_PKTLEN_LEN)


#define PKT_PER_LEN						1024

/////////////////Add one Card Define///////

#define DWNLDOREDITONECARD_VERSION_OFFSET				0
#define DWNLDOREDITONECARD_VERSION_LEN					1

#define DWNLDOREDITONECARD_CSN_OFFSET					(DWNLDOREDITONECARD_VERSION_OFFSET+DWNLDOREDITONECARD_VERSION_LEN)
#define DWNLDOREDITONECARD_CSN_LEN						5

#define DWNLDOREDITONECARD_RESIDENTCODE_OFFSET			(DWNLDOREDITONECARD_CSN_OFFSET+DWNLDOREDITONECARD_CSN_LEN)
#define DWNLDOREDITONECARD_RESIDENTCODE_LEN				20

//#define DWNLDOREDITONECARD_CARDTYPE_OFFSET				(DWNLDOREDITONECARD_RESIDENTCODE_OFFSET+DWNLDOREDITONECARD_RESIDENTCODE_LEN)
#define DWNLDOREDITONECARD_CARDTYPE_LEN					1

#define DWNLDOREDITONECARD_CARDSTATUS_OFFSET			(DWNLDOREDITONECARD_RESIDENTCODE_OFFSET+DWNLDOREDITONECARD_RESIDENTCODE_LEN)
#define DWNLDOREDITONECARD_CARDSTATUS_LEN				1

#define DWNLDOREDITONECARD_CARDMODE_OFFSET				(DWNLDOREDITONECARD_CARDSTATUS_OFFSET+DWNLDOREDITONECARD_CARDSTATUS_LEN)
#define DWNLDOREDITONECARD_CARDMODE_LEN					1

#define DWNLDOREDITONECARD_GATENUMBER_OFFSET			(DWNLDOREDITONECARD_CARDMODE_OFFSET+DWNLDOREDITONECARD_CARDMODE_LEN)
#define DWNLDOREDITONECARD_GATENUMBER_LEN				2

#define DWNLDOREDITONECARD_UNLOCKTIMESLICEID_OFFSET		(DWNLDOREDITONECARD_GATENUMBER_OFFSET+DWNLDOREDITONECARD_GATENUMBER_LEN)
#define DWNLDOREDITONECARD_UNLOCKTIMESLICEID_LEN		1

#define DWNLDOREDITONECARD_VALIDSTARTTIME_OFFSET		(DWNLDOREDITONECARD_UNLOCKTIMESLICEID_OFFSET+DWNLDOREDITONECARD_UNLOCKTIMESLICEID_LEN)
#define DWNLDOREDITONECARD_VALIDSTARTTIME_LEN			8

#define DWNLDOREDITONECARD_VALIDENDTIME_OFFSET			(DWNLDOREDITONECARD_VALIDSTARTTIME_OFFSET+DWNLDOREDITONECARD_VALIDSTARTTIME_LEN)
#define DWNLDOREDITONECARD_VALIDENDTIME_LEN				8

#define DWNLDOREDITONECARD_ISADMIN_OFFSET				(DWNLDOREDITONECARD_VALIDENDTIME_OFFSET+DWNLDOREDITONECARD_VALIDENDTIME_LEN)
#define DWNLDOREDITONECARD_ISADMIN_LEN					1
	
/////////////////////////////////////////////////////////////
#define DELETEONECARD_VERSION_OFFSET				0
#define DELETEONECARD_VERSION_LEN					1

#define DELETEONECARD_CSN_OFFSET					(DELETEONECARD_VERSION_OFFSET+DELETEONECARD_VERSION_LEN)
#define DELETEONECARD_CSN_LEN						5





#define FILE_OK							0
#define FILE_NOT_EXIST					1
#define FILE_OPEN_ERROR					2
/************** TYPEDEFS *************************************************************/


/************** STRUCTURES ***********************************************************/


/************** EXTERNAL DECLARATIONS ************************************************/

extern	BOOL	DwnldFileProc(BYTE* pIn, UINT nInLen);
extern	UINT	UpldFileProc(BYTE* pInOut);
extern	BOOL	RemoveFileProc(BYTE* pIn);

extern 	BOOL	DwnldOneCardProc(BYTE* pIn, UINT nInLen ,unsigned short nFunCode);
extern	BOOL	EditOneCardProc(BYTE* pIn, UINT nInLen,unsigned short nFunCode);
extern	UINT	UpldOneCardProc(BYTE* pInOut,unsigned short nFunCode);
extern	BOOL	DeleteOneCardProc(BYTE* pIn, UINT nInLen,unsigned short nFunCode);


/*****************************************************************************/

#endif //FILECONFIGURE_H


