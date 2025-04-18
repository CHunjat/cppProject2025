#include "GameManager.h"

void GameManager::GameLoop()
{
	while (true)
	{
		Animation();
		Battle();


	}
}

void GameManager::Battle()
{
	//전투 UI 함수
	GoToXY(50, 5);
	cout << "플레이어의 정보";;
	GoToXY(50, 6);
	cout << "플레이어의 체력 : " << player.HP;
	GoToXY(50, 7);
	cout << "플레이어의 공격력 : " << player.ATK;
	GoToXY(50, 8);
	cout << "플레이어의 방어력 : " << player.DEF;

	GoToXY(80, 5);
	cout << "적군 정보";;
	GoToXY(80, 6);
	cout << "적군 체력 : " << currentEnemy.HP;
	GoToXY(80, 7);
	cout << "적군 공격력 : " << currentEnemy.ATK;
	GoToXY(80, 8);
	cout << "적군 방어력 : " << currentEnemy.DEF;





	//플레이어의 조작 기능

    // 플레이어 선턴 -> 몬스터의 턴으로 넘어간다.
	if (currentTurnState == PLAYERTURN)
	{
		Playerturn();
	}
	else if (currentTurnState == ENERMYTURN)
	{
		EnemyTurn();

	}
	else if (currentTurnState == GAMECLEAR)
	{
		//나나중에 우리가 만들자! 게임클리어 조건일때 실행
	}
	else if (currentTurnState == GAMEEND)
	{
		// 게임 엔드일때 실행! 
	}



}

void GameManager::Animation()
{
	system("cls");
	player.SetBattleImage(PlayerMove);
	currentEnemy.SetBattleImage(slimeIdle);
	Sleep(500);
	system("cls");
	player.SetBattleImage(PlayerMove);
	player.SetBattleImage(PlayerMove);
	currentEnemy.SetBattleImage(slimeMove);
	Sleep(500);
	
}

void GameManager::Playerturn()
{
	GoToXY(0, 15);
	cout << "현재 플레이어의 턴입니다." << endl;
	cout << "1_공격한다. 2_ 방어한다. 3_아이템을 사용한다." << endl;

	int input = 0;
	cin >> input;
	switch (input)
	{
	case 1: currentEnemy.Attacked(player.ATK); break;
	case 2: player.Defence(); break;
	case 3: player.UseItem(10); break;
	default: break;
	}
	currentTurnState = ENERMYTURN;
}

void GameManager::EnemyTurn()
{
	cout << "현재 적군의 턴입니다." << endl;

	player.Attacked(currentEnemy.ATK);
	
	cout << "키를 입력하면 플레이어의 턴이 진행됩니다." << endl;
	_getch();

	currentTurnState = PLAYERTURN;
}
