// Ŭ������ ����� ����.

#include "Base.h"

void ClassDefaultInfo()
{
	Base* base = new Base();
	delete base;

	Base* derived = new Derived();
	derived->Do();

	delete derived;
}

/*
*  �޸��� ���� 
*   -----------------------
* 	1
* 	2
* 	3
* 	4
*   ------------------------
*/

#include "Runner.h"
int main()
{
	ClassDefaultInfo();
	system("cls");
	std::cout << "�޸��� ���� �ڵ�" << std::endl;	// Game Title

	Runner* runA = new Player();
	Runner* runB = new Runner("B");
	Runner* runC = new Runner();
	Runner* runD = new Runner("D");
	
	string line = "===============================================================================";

	int endline = line.length();

	while (true)
	{
		Sleep(1000);   // 1�� ���� ������ ������Ʈ
		system("cls"); // ȭ���� �����.

		cout << line << endl;
		runA->Run(); 
		runB->Run();
		runC->Run();
		runD->Run();
		cout << line << endl;
				
		if (runA->CheckEndLine(endline) 
			|| runB->CheckEndLine(endline) 
			|| runC->CheckEndLine(endline)
			|| runD->CheckEndLine(endline))
		{
			cout << "��� ����" << endl;
			break;
		}
	}

	if (runA->CheckEndLine(endline))
	{
		cout << "A�� 1���� �߽��ϴ�." << endl;
	}

	if (runB->CheckEndLine(endline))
	{
		cout << "B�� 1���� �߽��ϴ�." << endl;
	}

	if (runC->CheckEndLine(endline))
	{
		cout << "C�� 1���� �߽��ϴ�." << endl;
	}

	if (runD->CheckEndLine(endline))
	{
		cout << "D�� 1���� �߽��ϴ�." << endl;
	}

}