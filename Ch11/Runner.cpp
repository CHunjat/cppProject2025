#include "Runner.h"

void Runner::SetMaxSpeed()
{
	run += RandomUtil::GetRandomInt(maxSpeed);  // 1. ĳ������ �ִ� �ӵ� ����
}

void Runner::DrawMoveDistance()
{
	
	for (int i = 0; i < run; i++)  // 2. �̵��Ѵ�.
	{
		cout << " ";
	}
}

void Runner::SetShape()
{
	cout << symbol << endl; //3. ~~P ���¸� �׷��ش�.

}

void Runner::Run()
{
	// maxSpeed �������ִ� �Լ�
	SetMaxSpeed(); //����� �� �ִ� �Լ� (virtual)
	DrawMoveDistance(); // ����Ǹ� �ȵǴ� �Լ�
	SetShape(); // ����� �� �ִ� �Լ� (virtual)
	
	
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
		cout << "�����ӵ��� 1 �����Ǿ����ϴ�" << endl;
	}
	else if (selectedStat == PlayerStat::MAXSPEED)
	{
		SetMin(1);
		cout << "�ְ�ӵ��� 1 �����Ǿ����ϴ�" << endl;

	}
	else if (selectedStat == PlayerStat::NONE)
	{
		cout << " ����� ������ �����ϴ�. " << endl;

	}
}

void Runner::Upgrade(PlayerStat selectedStat, int amount)
{
	if (selectedStat == PlayerStat::MINSPEED)
	{
		SetMin(amount);
		cout << "�����ӵ��� " << amount << "�����Ǿ����ϴ�" << endl;
	}
	else if (selectedStat == PlayerStat::MAXSPEED)
	{
		SetMax(amount);
		cout << "�ְ�ӵ��� " << amount << "�����Ǿ����ϴ�" << endl;

	}
	else if (selectedStat == PlayerStat::NONE)
	{
		cout << " ����� ������ �����ϴ�. " << endl;

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
	run = 0; // ��� ���ڰ� 0���� ����
	isEnd = false;
}

void Player::SetMaxSpeed()
{
	int applymaxspeed = maxSpeed + 1; // ������, ��ų �̸� : ȿ�� : �÷��̾��� �ִ� �ӵ��� 1���������ִ� ��ų�̴�.
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
	cout << " ���� ���� " << endl;
	cout << " ���� �ӵ� : " << minSpeed << "�ִ� �ӵ� : " << maxSpeed << endl;
	cout << " ���� �ݾ� : "  << money << endl;
}

void Enemy::SetMaxSpeed()
{
	Runner::SetMaxSpeed();
}

void Enemy::SetShape()
{
	Runner::SetShape();
}
