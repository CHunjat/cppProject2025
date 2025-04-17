#include "Enemy.h"

void Enemy::ChangeImage(char Image[IMAGEHEIGHT][IMAGEWIDTH + 1])
{
	for (int y = 0; y < IMAGEHEIGHT; y++)
	{
		for (int x = 0; x < IMAGEWIDTH + 1; x++)
		{
			this->Image[y][x] = Image[y][x];
		}
	}
}

void Enemy::ShowImage(int& posX, int& posY)
{
	for (int y = 0; y < IMAGEHEIGHT; y++)
	{
		for (int x = 0; x < IMAGEWIDTH + 1; x++)
		{
			// Ư�� ��ǥ�� �̵��ϼ���
			GoToXY(posX+x, posY+y);
			cout << Image[y][x];
		}
		cout << endl;
	}
}

bool Enemy::IsBattle(int x, int y)
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

void Enemy::SetBattleImage(char Image[IMAGEHEIGHT][IMAGEWIDTH + 1], int& posX, int& posY)
{
	ChangeImage(Image);

	// �̵� ����

	// x�� ��ǥ�� ��ǥ ��ġ���� ũ�� �̵��ؾ��Ѵ�.
	// x�� ��ǥ�� ��ǥ ��ġ���� �۰ų� ������ ����

	if (IsBattle(posX, posY)) // 
	{
		posX = 10;
	}
	else
	{
		// ���� ���� Ư���� �ൿ�� �ϴ� �Լ� ȣ��
		posX--;
	}
	ShowImage(posX, posY);
}
