#pragma once
#include <iostream>
#include <string>
#include "Console.h"

// 1���� �����͸� 2���� �迭�� ��ȯ �� �����ִ� ��ü. �� ����� ������� ���� �������
// 1212132145363455634 '\n' 3213131241423423 
// RŸ���� ��Ʈ�� �ϳ� 2�����迭���Ϸ��Ѵ�. �ֳĸ� �̵���Ű�� ����
class Image
{

private:
	char art[100][100]; //���ڸ� ���� ���ڸ� ���� �ִ�ũ�� �־��ֱ�
	int height;
public:
	Image(const char* model, int height)
	{
		this->height = height;

		const char* lineStart = model;
		for (int i = 0; i < height; i++)
		{
			const char* lineEnd = strchr(lineStart, '\n'); // i��° �ٿ��� ���๮�ڸ� ã�ƶ� ��� ��ɾ�. �� ã�� ��ġ�� lineEND �̴�.
			if (lineEnd == nullptr)
			{
				lineEnd == model + strlen(model); // ������ ���� ǥ��
			}
			int length = lineEnd - lineStart;
			strncpy_s(this->art[i], lineStart, length);
			lineStart = lineEnd + 1; // ���������ٿ��� +1 �� �ڸ���.

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
			//Console::GoToXY(x + i, y); // �ʿ���� ������ �ٲ㼭

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
			if (currentX < 1) // �ֿܼ��� x 0���� ������ ������ �߻��Ѵ�.
			{
				currentX = 1;
			}
			Console::GoToXY(currentX, y); // ������ �����Ϸ��� y�� �����ض�

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




