///////////////////////////////////////////////////////////////////////////////
///
/// Copyright (c) 2010 - <company name here>
///
/// Original filename: kdriver.h
/// Project          : kdriver
/// Date of creation : <see kdriver.cpp>
/// Author(s)        : <see kdriver.cpp>
///
/// Purpose          : <see kdriver.cpp>
///
/// Revisions:         <see kdriver.cpp>
///
///////////////////////////////////////////////////////////////////////////////

// $Id$

#ifndef __KDRIVER_H_VERSION__
#define __KDRIVER_H_VERSION__ 100

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif


#include "drvcommon.h"
#include "drvversion.h"

#define DEVICE_NAME			"\\Device\\KDRIVER_DeviceName"
#define SYMLINK_NAME		"\\DosDevices\\KDRIVER_DeviceName"
PRESET_UNICODE_STRING(usDeviceName, DEVICE_NAME);
PRESET_UNICODE_STRING(usSymlinkName, SYMLINK_NAME);

#ifndef FILE_DEVICE_KDRIVER
#define FILE_DEVICE_KDRIVER 0x8000
#endif

// Values defined for "Method"
// METHOD_BUFFERED
// METHOD_IN_DIRECT
// METHOD_OUT_DIRECT
// METHOD_NEITHER
// 
// Values defined for "Access"
// FILE_ANY_ACCESS
// FILE_READ_ACCESS
// FILE_WRITE_ACCESS

const ULONG IOCTL_KDRIVER_OPERATION = CTL_CODE(FILE_DEVICE_KDRIVER, 0x01, METHOD_BUFFERED, FILE_READ_DATA | FILE_WRITE_DATA);

#endif // __KDRIVER_H_VERSION__
