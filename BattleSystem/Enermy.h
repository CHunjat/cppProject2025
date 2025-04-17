#pragma once
#include "Common.h"
#include "Image.h"

enum BattleState
{
	IDLE,
	MOVE,
	BATTLE
};

struct Enermy
{
	int HP;
	int ATK;
	int DEF; 
	string name;
	char Image[IMAGEHEIGHT][IMAGEWIDTH + 1]; //[세로][가로]
	BattleState battleState;

	Enermy(int HP, int ATK, int DEF, string name, char Image[IMAGEHEIGHT][IMAGEWIDTH + 1]) 
		: HP(HP), ATK(ATK), DEF(DEF), name(name) //배열은 주소 주소안에 주소를 넣으면 준제가 생김
	{
		for (int y = 0; y < IMAGEHEIGHT; y++)
		{
			for (int x = 0; x < IMAGEWIDTH + 1; x++)
			{
				this->Image[y][x] = Image[y][x];
			}
		}
	}

	//
	

	void ChangeImage(char Image[IMAGEHEIGHT][IMAGEWIDTH + 1]);

	void ShowImage(int& posX, int& posY);

	//조건에 해당하는 기능
	bool IsBattle(int x, int y);
	bool Iswalk(int x, int y);
	bool IsIdle(int x, int y);
	
	//기능조합
	void SetBattleImage(char Image[IMAGEHEIGHT][IMAGEWIDTH + 1], int& posX, int& posY);
};	