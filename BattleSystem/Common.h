#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>

enum TurnSystem
{
	PLAYERTURN,
	ENERMYTURN,
	GAMECLEAR,
	GAMEEND
};


enum BattleState
{
	IDLE,
	MOVE,
	BATTLE
};

using std::cout;
using std::cin;
using std::endl;
using std::string;

void GoToXY(int x, int y); 