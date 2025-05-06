#pragma once
#include <iostream>
#include <string>
#include "Console.h"

// 1차원 데이터를 2차원 배열로 변환 후 보여주는 객체. 그 기능을 만들거임 여기 헤더에서
// 1212132145363455634 '\n' 3213131241423423 
// R타입은 스트링 하나 2차원배열로하려한다. 왜냐면 이동시키기 위해
class Image
{

private:
	char art[100][100]; //앞자리 세로 뒷자리 가로 최대크기 넣어주기
	int height;
public:
	Image(const char* model, int height)
	{
		this->height = height;

		const char* lineStart = model;
		for (int i = 0; i < height; i++)
		{
			const char* lineEnd = strchr(lineStart, '\n'); // i번째 줄에서 개행문자를 찾아라 라는 명령어. 그 찾은 위치를 lineEND 이다.
			if (lineEnd == nullptr)
			{
				lineEnd == model + strlen(model); // 마지막 줄을 표현
			}
			int length = lineEnd - lineStart;
			strncpy_s(this->art[i], lineStart, length);
			lineStart = lineEnd + 1; // 다음시작줄에서 +1 한 자리다.

		}
	}

	void Show(int x, int y) const
	{
		Console::GoToXY(x, y);
		for (int i = 0; i < height; i++)
		{
			Console::GoToXY(x, y + i);
			std::cout << art[i];
		}
	}
	void Move(int x, int y, int moveDistance, int delay) // -> 
	{
		for (int i = 0; i < moveDistance; i++)
		{
			//Console::GoToXY(x + i, y); // 필요없음 위에서 바꿔서

			for (int j = 0; j < height; j++)
			{
				Console::GoToXY(x + i, y + j);
				std::cout << art[j];
			}

			Sleep(delay);
			system("cls");
		}

	}
	void MoveReverse(int x, int y, int moveDistance, int delay)
	{
		for (int i = 0; i < moveDistance; i++)
		{


			int currentX = x - i;
			if (currentX < 1) // 콘솔에서 x 0보다 작으면 에러가 발생한다.
			{
				currentX = 1;
			}
			Console::GoToXY(currentX, y); // 점프도 구현하려면 y도 조정해라

			for (int j = 0; j < height; j++)
			{
				Console::GoToXY(currentX, y + j);
				std::cout << art[j];
			}
			Sleep(delay);
			system("cls");

		}
	}
};




