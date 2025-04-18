#pragma once
#include "Common.h"
#include "Image.h"


struct Player
{
	int HP;
	int ATK;
	int DEF;
	string name;
	char Image[IMAGEHEIGHT][IMAGEWIDTH + 1]; //[세로][가로]
	BattleState battleState;

	int posX;
	int posY;
	bool isDeath;

	Player(int HP, int ATK, int DEF, string name, char Image[IMAGEHEIGHT][IMAGEWIDTH + 1])
		: HP(HP), ATK(ATK), DEF(DEF), name(name) //배열은 주소 주소안에 주소를 넣으면 준제가 생김
	{
		posX = 0;
		posY = 5;
		isDeath = false;

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

	void ShowImage();

	//조건에 해당하는 기능
	bool IsBattle();
	bool Iswalk();
	bool IsIdle();

	//기능조합
	void SetBattleImage(char Image[IMAGEHEIGHT][IMAGEWIDTH + 1]);

	//전투에 필요한 함수
	void Attacked(int damage);
	void Defence();
	void UseItem(int heal);
};