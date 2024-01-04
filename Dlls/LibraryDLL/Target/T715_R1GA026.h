#define T715_R1GA026
#define A2
#define DB3210

#include "..\..\include\Types.h"
#include "classes.h"

#define GetSignalQuality_Send_SignalID 0x12C00040
#define GetSignalQuality_Receive_SignalID 0x12C007C0
#define MainInput_data 0x4BA25940
#define MainInput_CurPos_Offset 0x8

void (*DisplayGC_AddRef)(GC*,void *)=(void(*)(GC*,void *))0x143CB919;
void (*TextObject_SetText)(IRichText * pTextObject,TEXTID strid)=(void(*)(IRichText * pTextObject,TEXTID strid))0x1416E5E5;
void (*TextObject_SetFont)(IRichText * pTextObject,void * pFont,const int _0x8000000A,const int _0x7FFFFFF5)=(void(*)(IRichText * pTextObject,void * pFont,const int _0x8000000A,const int _0x7FFFFFF5))0x141714E9;
int (*Illumination_LedID_SetLevel_Gradually)(int LED_ID,int level,int fade_time)=(int(*)(int LED_ID,int level,int fade_time))0x143E4F49;
int (*Illumination_LedID_SetLevel)(int LED_ID,int level)=(int(*)(int LED_ID,int level))0x144C0C09;
int (*Illumination_LedID_Off)(int LED_ID)=(int(*)(int LED_ID))0x14336575;
int (*RichTextLayout_GetTextWidth)(TEXTID strid,IRichTextLayout * pRichTextLayout,IUnknown * pFont)=(int(*)(TEXTID strid,IRichTextLayout * pRichTextLayout,IUnknown * pFont))0x1441DC81;
int (*REQUEST_HPHONEBOOK_READSTRING)(const int* sync,void * buf)=(int(*)(const int* sync,void * buf))0x141AB8F5;
void (*AB_STR_ITEM_Copy)(AB_STR_ITEM * dest,AB_STR_ITEM * source)=(void(*)(AB_STR_ITEM * dest,AB_STR_ITEM * source))0x152697AD;
void (*Display_SetBrightnessLevel)(int level)=(void(*)(int level))0x153F41A5;
TEXTID (*TextID_CreateIntegerID_int)(int num,char * filename,int line_num)=(TEXTID(*)(int num,char * filename,int line_num))0x143D1A75;
TEXTID (*TextID_Create_int)(const void* wstr,int flag,int len,char * filename,int line_num)=(TEXTID(*)(const void* wstr,int flag,int len,char * filename,int line_num))0x142D5A2D;
int (*TextID_GetWString_int)(TEXTID strid,wchar_t * dest,int maxlen,char * filename,int line_num)=(int(*)(TEXTID strid,wchar_t * dest,int maxlen,char * filename,int line_num))0x1416D911;
int (*TextID_GetLength_int)(TEXTID strid,char * filename,int line_num)=(int(*)(TEXTID strid,char * filename,int line_num))0x1416E4AD;
void (*TextID_Destroy_int)(TEXTID strid,char * filename,int line_num)=(void(*)(TEXTID strid,char * filename,int line_num))0x1416DCA5;
TEXTID (*TextID_Copy_int)(TEXTID strid,char * filename,int line_num)=(int(*)(TEXTID strid,char * filename,int line_num))0x1416D3ED;
int (*Request_SIM_IMSI_Read)(const int* sync,const int unk,char * imsi,char * error_cause)=(int(*)(const int* sync,const int unk,char * imsi,char * error_cause))0x100DF67D;
int (*get_imsi_const)()=(int(*)())0x100E90C9;
int (*Request_SL_GetRadioState)(const int* sync,char * level,char * flag,char * error_cause)=(int(*)(const int* sync,char * level,char * flag,char * error_cause))0x105805B5;
int (*Network_INetworkConnection_GetConnectionInfo)(CONNECTION_INFO_DESC * desc)=(int(*)(CONNECTION_INFO_DESC * desc))0x1423C14D;
int (*GetChipID_int)()=(int(*)())0x107D4B45;
OSBOOLEAN (*get_mem_int)(int,int,void*)=(OSBOOLEAN(*)(int,int,void*))0x101CE9A4;
int (*ConnectionManager_Connection_GetState_int)(char * buf)=(int(*)(char * buf))0x1447ABFD;
void (*TextID_GetString_int)(TEXTID, char* str, int maxlen, int null)=(void(*)(TEXTID, char* str, int maxlen, int null))0x1416D635;
void (*Timer_ReSet_int)(u16* timer, int time, TIMERPROC onTimer, LPARAM lparam,char * filename,int line_num)=(void(*)(u16* timer, int time, TIMERPROC onTimer, LPARAM lparam,char * filename,int line_num))0x14168C8D;
u16 (*Timer_Set_int)(int time, TIMERPROC onTimer, LPARAM lparam,char * filename,int line_num)=(u16(*)(int time, TIMERPROC onTimer, LPARAM lparam,char * filename,int line_num))0x1423BDD9;
void (*Timer_Kill_int)(u16* timerID,char * filename,int line_num)=(void(*)(u16* timerID,char * filename,int line_num))0x14168F7D;
