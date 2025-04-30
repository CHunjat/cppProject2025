#include "GameManager.h"


void GameManager::ShowTitle()
{
	// 타이틀 먼저 보여주는 코드 실행.
	//ConsoleUtil::GotoXY(0, 0);
	cout << " 제목 실행 " << endl;
	//SoundUtil::PlayerTitleSound1(_T("sound.wav")); // 사운드출력이 끝날때까지 다음코드로 넘어가지않음.

}

void GameManager::ShopPhase()
{
	system("cls");
	cout << "상점에 진입했습니다." << endl;

	int input = 0;
	cout << " 키를입력하여 진행하십시오 " << endl;
	cout << "1_minspeed가 1만큼 증가합니다." << endl;
	cout <<	"2_maxspeed가 1만큼 증가합니다." << endl;
	cout <<	"3_게임이 시작됩니다." << endl;



	cin >> input;
	if (input == 1)
	{
		player->Upgrade(PlayerStat::MINSPEED, 1);
	}
	else if (input == 2)
	{
		player->Upgrade(PlayerStat::MAXSPEED, 1);

	}
	else if (input == 3)
	{
		cout << "게임이 시작됩니다." << endl;

	}



}

void GameManager::GamePhase()
{
	Runner* runB = new Runner("B");
	Runner* runC = new Enemy();
	Runner* runD = new Runner("D");

	string line = "======================================================================================";

	int endline = line.length();

	player->InitiaLize();
	runB->InitiaLize();
	runC->InitiaLize();
	runD->InitiaLize();

	while (true)
	{
		Sleep(200);   // 1초 마다 게임을 업데이트
		system("cls"); // 화면을 지운다.

		cout << line << endl;
		player->Run();
		runB->Run();
		runC->Run();
		runD->Run();
		cout << line << endl;

		player->ShowPlayerGameInfo();

		if (player->CheckEndLine(endline)
			|| runB->CheckEndLine(endline)
			|| runC->CheckEndLine(endline)
			|| runD->CheckEndLine(endline))
		{
			cout << "경기 종료" << endl;
			break;
		}
	}

	if (player->CheckEndLine(endline))
	{
		cout << "P가 1등을 했습니다." << endl;
	}

	if (runB->CheckEndLine(endline))
	{
		cout << "B가 1등을 했습니다." << endl;
	}

	if (runC->CheckEndLine(endline))
	{
		cout << "E가 1등을 했습니다." << endl;
	}

	if (runD->CheckEndLine(endline))
	{
		cout << "D가 1등을 했습니다." << endl;
	}
	
	cout << "상점 페이즈에 진입하길 원하면 아무키나 입력해주세요" << endl;
	_getch();

}


void GameManager::Play() //캡슐화
{
	ShowTitle();

	while (true)
	{
		ShopPhase();
		GamePhase();
	}
}


