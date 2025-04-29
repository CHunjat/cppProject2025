#pragma once
#include <iostream>

using namespace std;

#include <Windows.h>
#include <tchar.h>

class SoundUtil
{
public:
	static void PlayerTitleSound(LPCWSTR filename);
	static void PlayBGM(LPCWSTR filename);
};

