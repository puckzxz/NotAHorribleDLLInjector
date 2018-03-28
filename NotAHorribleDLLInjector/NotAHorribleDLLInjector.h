#pragma once
#include "stdafx.h"
#include <Windows.h>
#include <string>
#include <iostream>

inline BOOL file_exists(char* filePath)
{
	DWORD fileAtt = GetFileAttributesA(filePath);

	if (fileAtt == INVALID_FILE_ATTRIBUTES)
		return FALSE;
	else
		return TRUE;
}