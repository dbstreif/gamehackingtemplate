#pragma once
#include "pch.h"
#include <vector>
#include <Windows.h>

namespace mem
{
	//For external use
	//void PatchEx(BYTE* dst, BYTE* src, unsigned int size, HANDLE hProcess);
	//void NopEx(BYTE* dst, unsigned int size, HANDLE hProcess);

	void Patch(BYTE* dst, BYTE* src, unsigned int size);
	void Nop(BYTE* dst, unsigned int size);
	uintptr_t FindDMAAddr(uintptr_t ptr, std::vector<unsigned int> offsets);
}