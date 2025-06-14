#pragma once

#include <stdint.h>

typedef _Bool BOOLEAN;

typedef signed char INT8;
typedef unsigned char UINT8;

typedef signed short int INT16;
typedef unsigned short int UINT16;

typedef signed int INT32;
typedef unsigned int UINT32;

typedef signed long long INT64;
typedef unsigned long long UINT64;

typedef unsigned char CHAR8;
typedef unsigned short int CHAR16;

// assume 64 bit native width
typedef INT64 INTN;
typedef UINT64 UINTN;

typedef void VOID;

typedef struct {
    UINT32  Data1;
    UINT16  Data2;
    UINT16  Data3;
    UINT8   Data4[8];
} EFI_GUID;

typedef UINTN EFI_STATUS;
typedef VOID * EFI_HANDLE;
typedef VOID * EFI_EVENT;
typedef UINT64 EFI_LBA;
typedef UINTN EFI_TPL;

typedef struct {
    UINT8 Addr[32];
} EFI_MAC_ADDRESS;

typedef struct {
    UINT8 Addr[4];
} EFI_IPv4_ADDRESS;

typedef struct {
    UINT8 Addr[16];
} EFI_IPv6_ADDRESS;

typedef union {
    UINT32 Addr[4];
    EFI_IPv4_ADDRESS v4;
    EFI_IPv6_ADDRESS v6;
} EFI_IP_ADDRESS;