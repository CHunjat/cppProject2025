#include "Enermy.h"

void Enermy::ChangeImage(char Image[IMAGEHEIGHT][IMAGEWIDTH + 1])
{
	for (int y = 0; y < IMAGEHEIGHT; y++)
	{
		for (int x = 0; x < IMAGEWIDTH + 1; x++)
		{
			this->Image[y][x] = Image[y][x];
		}
	}
}

void Enermy::ShowImage(int& posX, int& posY)
{
	for (int y = 0; y < IMAGEHEIGHT; y++)
	{
		for (int x = 0; x < IMAGEWIDTH + 1; x++)
		{
			GoToXY(posX+x,posY+y);
			cout << Image[y][x];
		}
		cout << endl;
	}
}

bool Enermy::IsBattle(int x, int y)
{
	if (x <= 10)
	{
		return true;
	}
	else
	{
		return false;

	}
}

bool Enermy::Iswalk(int x, int y)
{
	return false;
}

bool Enermy::IsIdle(int x, int y)
{
	return false;
}

void Enermy::SetBattleImage(char Image[IMAGEHEIGHT][IMAGEWIDTH + 1], int& posX, int& posY)
{
	ChangeImage(Image);

	//이동 로직

	// x의 좌표가 목표 위치보다 크면 이동해야한다. 
	// x의 좌표가 목표 위치보다 작거나 같으면 정지.

	if (IsBattle(posX, posY)) //true 일때
	{
		posY = 10;

	}
	else
	{
		posX--;

	}

	ShowImage(posX, posY);
}

