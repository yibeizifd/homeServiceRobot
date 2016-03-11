

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Fri Mar 11 16:04:41 2016
 */
/* Compiler settings for FRManager.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_FRManagerLib,0x427C99FE,0xB836,0x4964,0xB1,0x61,0x94,0x90,0xDF,0xAB,0x75,0xC7);


MIDL_DEFINE_GUID(IID, DIID__DFRManager,0xB986E496,0xA112,0x4057,0x82,0xAD,0xE6,0xB8,0x38,0x88,0xBF,0x05);


MIDL_DEFINE_GUID(IID, DIID__DFRManagerEvents,0x398C975D,0x5DAA,0x4AFA,0x9B,0x46,0x43,0xAD,0xDA,0x5C,0x30,0x31);


MIDL_DEFINE_GUID(CLSID, CLSID_FRManager,0x5D2BC97D,0x04DE,0x453B,0x95,0xCB,0xE5,0xDA,0x90,0x28,0x87,0x54);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



