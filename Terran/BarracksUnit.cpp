#include "BarracksUnit.h"

void BarracksUnit::Stats()
{
	cout << "���� �̸� : " << name
		<< " ü�� : " << hp
		<< " ���� : " << Def
		<< "�⺻ ���ݷ� : " << AttackDamage
		<< "������ : " << Mana
		<< "Ÿ�� : " << (AirUnit ? "AirUnit" : "GroundUnit") << endl;  //���� ������

/*  if (AirUnit)
	{
		cout << " AirUnit " << endl;
	}
	else
	{
		cout << " GroundUnit" << endl;
	}*/
	

			
	
}

void BarracksUnit::Attack()
{
	cout << name << " ��(��) �����մϴ� " << AttackDamage << " ������ : " << endl;
}

void BarracksUnit::Skill()
{
	cout << name << " ��ų��� " << endl;
}

void BarracksUnit::Target(BarracksUnit& Target)
{
	
}



