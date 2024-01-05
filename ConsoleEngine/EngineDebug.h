#pragma once
#include <Windows.h>
#include <assert.h>

#define LeakCheck 

#define MsgBoxAssert(TEXT) MessageBoxA(nullptr, "X 크기가 0입니다.", "치명적 에러", MB_OK); assert(false);
