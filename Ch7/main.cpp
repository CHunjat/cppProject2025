#include "Skill.h"
#include "Money.h"
#include "Character.h"
#include "Enemy.h"
#include "Entity.h"
// A 개발자 player. <- (스킬), (재화)
// B 개발자			  Currency, Money




class Player : public Entity
{
private:
	Skill skill;
	Money money;
public:

};


class BattleManager
{
private:
	Player player;
	Enemy enemy;

	bool isEnd;

	void EnemyTurn()
	{
		enemy.Action();
	}

	void PlayerTurn()
	{

	}

public:
	void Battle()
	{
		while (true)
		{
			PlayerTurn();
			EnemyTurn();


			if (isEnd)
			{
				break;
			}
		}
	}
};

int main()
{
	BattleManager battle;

	battle.Battle();
}