#pragma once

#include <windows.h>

//
// Must define NTSTATUS due to d3dkmddi.h which is included by d3d10umddi.h
//

typedef _Return_type_success_(return >= 0) LONG NTSTATUS;

#include <d3d12.h>
#include <d3d12umddi.h>
#include <new>
#include <assert.h>

void StopInFunction(const char * function, const char * file, int line);

#define STOP_IN_FUNCTION() StopInFunction(__FUNCTION__, __FILE__, __LINE__);
