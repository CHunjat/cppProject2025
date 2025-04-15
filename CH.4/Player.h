#pragma once
#include "Game.h"

struct Player
{
	//플레이어의 좌표 데이터를 정의
	int Xpos;
	int Ypos;
	string name;

	Player(int Xpos, int Ypos, string name)
		:Xpos(Xpos), Ypos(Ypos), name(name)
	{}

	// 좌표를 기능적으로 함수로 구현해보세요.
	void ShowInfo();
	void ChangePos(int X, int Y);
	 
};