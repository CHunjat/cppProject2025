#include "BarracksUnit.h"

void BarracksUnit::Stats()
{
	cout << "유닛 이름 : " << name
		<< " 체력 : " << hp
		<< " 방어력 : " << Def
		<< "기본 공격력 : " << AttackDamage
		<< "에너지 : " << Mana
		<< "타입 : " << (AirUnit ? "AirUnit" : "GroundUnit") << endl;  //삼항 연산자

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
	cout << name << " 이(가) 공격합니다 " << AttackDamage << " 데미지 : " << endl;
}

void BarracksUnit::Skill()
{
	cout << name << " 스킬사용 " << endl;
}

void BarracksUnit::Target(BarracksUnit& Target)
{
	
}



