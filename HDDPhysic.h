#ifndef HDDPhysic_defsH
#define HDDPhysic_defsH
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

typedef int (__stdcall *fHDDPhysicInit)   (char *IN_regUser,char *IN_regSerial);
typedef int (__stdcall *fHDDPhysicGetInfo)(int IN_diskIndex, int IN_iInfoType , char* OUT_Info);

fHDDPhysicInit    HDDPhysic_Init;
fHDDPhysicGetInfo HDDPhysic_GetInfo;
fHDDPhysicInit          USBPhysic_Init;
fHDDPhysicGetInfo USBPhysic_GetInfo;
#endif

