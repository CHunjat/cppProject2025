#include "MonsterHandler.h"

void MonsterHandler::BattleWithPlayer(Monster& monster)
{
	// 몬스터들은 슬라임, 오크?

	//	if(monster == 슬라임)
	if (dynamic_cast<Slime*>(&monster))
	{
		cout << "슬라임의 전투가 실행됩니다." << endl;
	}

	if (dynamic_cast<Orc*>(&monster))
	{
		cout << "오크의 전투가 실행됩니다." << endl;
	}
}
