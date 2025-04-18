#pragma once
#include "Enemy.h"
#include "Player.h"
// Player, Enermy

struct GameManager
{
	Enemy currentEnemy; 
	Player player;
	TurnSystem currentTurnState;

	GameManager(Enemy enemy, Player player) : currentEnemy(enemy), player(player)
	{
		currentTurnState = PLAYERTURN;
	}

	//다른 게임 로직들을 통합한 기능

	void GameLoop();


	void Battle();

	void Animation();

	// 플레이어의 행동
	void Playerturn();

	// 몬스터의 행동

	void EnemyTurn();
};