/*
* 목표 : cpp 게임 화면 구성하기
* 복습 : windows.h GotoXY() 재구현
* 입출력 : cpp 방식으로 입출력 하기
* 이론 : namespace 응용해보기
*/

/*
* 이름공간을 사용할 떄의 장점
* 1. 다른 두 프로젝트를 copy paste 합칠때 발생하는 문제를 최소화 할 수 있다.
* 2. 이름공간에 쓰여진 이름을 통해서 코드를 분류할 수 있다.
*/


#include <iostream>
#include <Windows.h> //커서의 위치를 옮기는 함수 setcursorposition
#include <conio.h>
namespace ConsoleUtils
{
	void GoToXY(int X, int Y)
	{
		COORD pos = { X,Y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

	}

}

int main()
{
	// 예제 1. 10,10 좌표에 플레이어의 정보 텍스트를 출력해보세요.
	ConsoleUtils::GoToXY(1, 1);
	std::cout << "플레이어의 정보" << std::endl;

	// 예제 2. 플레이어의 이름을 입력받아서 플레이어의 정보 텍스트 한줄 아래에 출력해주세요 
	// 입력값을 정수로 받아서, 1을 받으면 플레이어 이름 추가하기
	// 2를 받으면 화면에 플레이어 정보를 출력하기

	char name[10];

	while (true)
	{
		int inputNumber = 0;

		std::cout << "1_사용자의 이름을 변경할 수 있습니다. 2_ 플레이어의 정보를 화면에 출력합니다. 3_3번을 누르면 게임을 종료합니다." << std::endl;
		std::cin >> inputNumber; //언제 주소 연산자 사용하고, 언제 안하는데 이부분이 이해가 안감.
		if (inputNumber == 1)
		{
			std::cout << "이름을 입력해주세여\n";
			std::cin >> name;
		}
		else if (inputNumber == 2)
		{
			ConsoleUtils::GoToXY(10, 10);
			std::cout << "플레이어의 정보:";
			ConsoleUtils::GoToXY(10, 11);
			std::cout << "플레이어의 이름:" << name;
			_getch();
		}
		else if (inputNumber == 3)
		{
			break;
		}
		system("cls");
		
	}
}
