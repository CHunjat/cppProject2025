#pragma once

// main() ���� -> ���ӽ��� -> ��������

#include "Runner.h"
#include <conio.h>

 
class GameManager
{

private:
	Player* player;

	void ShowTitle();
	void ShopPhase();
	void GamePhase();

public:
	GameManager()
	{
		player = new Player();
	}
	void Play();

};

