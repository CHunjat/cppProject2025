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

void Enemy::SetMaxSpeed()
{
	int applymaxspeed = maxSpeed + 2; // ������, ��ų �̸� : ȿ�� : �÷��̾��� �ִ� �ӵ��� 1���������ִ� ��ų�̴�.
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
