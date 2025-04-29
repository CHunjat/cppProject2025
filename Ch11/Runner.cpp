#include "Runner.h"

void Runner::SetMaxSpeed()
{
	run += RandomUtil::GetRandomInt(maxSpeed);  // 1. 캐릭터의 최대 속도 설정
}

void Runner::DrawMoveDistance()
{
	
	for (int i = 0; i < run; i++)  // 2. 이동한다.
	{
		cout << " ";
	}
}

void Runner::SetShape()
{
	cout << symbol << endl; //3. ~~P 형태를 그려준다.

}

void Runner::Run()
{
	// maxSpeed 제어해주는 함수
	SetMaxSpeed(); //변경될 수 있는 함수 (virtual)
	DrawMoveDistance(); // 변경되면 안되는 함수
	SetShape(); // 변경될 수 있는 함수 (virtual)
	
	
}

bool Runner::CheckEndLine(int length)
{
	if (run >= length)
	{
		isEnd = true;
	}
	else
	{
		isEnd = false;
	}

	return isEnd;
}

void Player::SetMaxSpeed()
{
	int applymaxspeed = maxSpeed + 1; // 아이콘, 스킬 이름 : 효과 : 플레이어의 최대 속도를 1증가시켜주는 스킬이다.
	run += RandomUtil::GetRandomInt(applymaxspeed);
	
}

void Player::SetShape()
{
	int percent = RandomUtil::GetRandomInt(100);
	if (percent > 50)
	{
		cout << "~" << symbol << endl;

	}
	else
	{
		cout << symbol << endl;

	}
}

void Enemy::SetMaxSpeed()
{
	int applymaxspeed = maxSpeed + 2; // 아이콘, 스킬 이름 : 효과 : 플레이어의 최대 속도를 1증가시켜주는 스킬이다.
	run += RandomUtil::GetRandomInt(applymaxspeed);
}

void Enemy::SetShape()
{
	int percent = RandomUtil::GetRandomInt(100);
	if (percent > 70)
	{
		cout << "<<" << symbol << endl;

	}
	else
	{
		cout << symbol << endl;

	}
}
