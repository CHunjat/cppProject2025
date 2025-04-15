#include "Player.h"

void Player::ShowInfo()
{
    cout << "플레이어의 좌표" <<
     "[" << Xpos << "," << Ypos << "]" << "플레이어의 이름 " << name << endl;
}

void Player::ChangePos(int X, int Y)
{
   
    Xpos = X;
    Ypos = Y;
}
