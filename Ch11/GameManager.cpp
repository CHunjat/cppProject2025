#include "GameManager.h"


void GameManager::ShowTitle()
{
	// Ÿ��Ʋ ���� �����ִ� �ڵ� ����.
	//ConsoleUtil::GotoXY(0, 0);
	cout << " ���� ���� " << endl;
	SoundUtil::PlayerTitleSound1(_T("sound.wav")); // ��������� ���������� �����ڵ�� �Ѿ������.

}

void GameManager::ShopPhase()
{
	system("cls");
	cout << "������ �����߽��ϴ�." << endl;

	int input = 0;
	cout << " Ű���Է��Ͽ� �����Ͻʽÿ� " << endl;
	cout << "1_minspeed�� 1��ŭ �����մϴ�." << endl;
	cout <<	"2_maxspeed�� 1��ŭ �����մϴ�." << endl;
	cout <<	"3_������ ���۵˴ϴ�." << endl;



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
		cout << "������ ���۵˴ϴ�." << endl;

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
		Sleep(1000);   // 1�� ���� ������ ������Ʈ
		system("cls"); // ȭ���� �����.

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
			cout << "��� ����" << endl;
			break;
		}
	}

	if (player->CheckEndLine(endline))
	{
		cout << "P�� 1���� �߽��ϴ�." << endl;
	}

	if (runB->CheckEndLine(endline))
	{
		cout << "B�� 1���� �߽��ϴ�." << endl;
	}

	if (runC->CheckEndLine(endline))
	{
		cout << "E�� 1���� �߽��ϴ�." << endl;
	}

	if (runD->CheckEndLine(endline))
	{
		cout << "D�� 1���� �߽��ϴ�." << endl;
	}
	
	cout << "���� ����� �����ϱ� ���ϸ� �ƹ�Ű�� �Է����ּ���" << endl;
	_getch();

}


void GameManager::Play() //ĸ��ȭ
{
	ShowTitle();

	while (true)
	{
		ShopPhase();
		GamePhase();
	}
}


