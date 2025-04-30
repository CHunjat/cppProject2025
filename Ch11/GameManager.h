#pragma once

// main() 시작 -> 게임시작 -> 게임종료

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

