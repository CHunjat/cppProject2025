#include "Player.h"

void Player::ShowInfo()
{
	cout << "[" << xPos << "," << yPos << "]" << "�÷��̾��� �̸� " << name << endl;
}

void Player::ChangePos(int x, int y)
{
	xPos = x;
	yPos = y;
}