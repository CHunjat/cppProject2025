#pragma once

#include <random>
#include <Windows.h>

// static : Ŭ���� ��ü ���� ������ �Լ��� ȣ���� �� �ִ�.

class RandomUtil
{
public:
	static int GetRandomInt(int range);
};

class ConsoleUtil
{
public:
	static void GotoXY(int x, int y);
};