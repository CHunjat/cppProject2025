#pragma once
#include "Game.h"

struct Player
{
	// �÷��̾��� ��ǥ �����͸� ����
	int xPos;
	int yPos;
	string name;

	// ��ǥ�� ��������� �Լ��� �����غ�����.
	void ShowInfo();
	void ChangePos(int x, int y);
};