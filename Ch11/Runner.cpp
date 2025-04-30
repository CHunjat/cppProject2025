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


void Runner::Upgrade(PlayerStat selectedStat)
{
	if (selectedStat == PlayerStat::MINSPEED)
	{
		SetMin(1);
		cout << "최저속도가 1 증가되었습니다" << endl;
	}
	else if (selectedStat == PlayerStat::MAXSPEED)
	{
		SetMin(1);
		cout << "최고속도가 1 증가되었습니다" << endl;

	}
	else if (selectedStat == PlayerStat::NONE)
	{
		cout << " 적용될 스탯이 없습니다. " << endl;

	}
}

void Runner::Upgrade(PlayerStat selectedStat, int amount)
{
	if (selectedStat == PlayerStat::MINSPEED)
	{
		SetMin(amount);
		cout << "최저속도가 " << amount << "증가되었습니다" << endl;
	}
	else if (selectedStat == PlayerStat::MAXSPEED)
	{
		SetMax(amount);
		cout << "최고속도가 " << amount << "증가되었습니다" << endl;

	}
	else if (selectedStat == PlayerStat::NONE)
	{
		cout << " 적용될 스탯이 없습니다. " << endl;

	}
}

void Runner::SetMin(int Value)
{
	if (maxSpeed < Value)
	{
		Value = maxSpeed;
	}
	minSpeed += Value;
}

void Runner::SetMax(int Value)
{
	if (10 < Value)
	{
		Value = 10;
	}

	maxSpeed += Value;

}

void Runner::InitiaLize()
{
	run = 0; // 모든 주자가 0에서 시작
	isEnd = false;
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

void Player::ShowPlayerGameInfo()
{
	cout << " 유저 정보 " << endl;
	cout << " 최저 속도 : " << minSpeed << "최대 속도 : " << maxSpeed << endl;
	cout << " 보유 금액 : "  << money << endl;
}

void Enemy::SetMaxSpeed()
{
	Runner::SetMaxSpeed();
}

void Enemy::SetShape()
{
	Runner::SetShape();
}
