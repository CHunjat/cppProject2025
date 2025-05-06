#pragma once
#include "Common.h"
class BarracksUnit
{
protected: // 프로텍티드로 유닛의 기본 구성
	string name;
	int hp;
	int Def;
	int AttackDamage;
	int Mana;
	bool AirUnit; 
	bool GroundATK;
	bool AirATK;


public: //생성자
	BarracksUnit(string name, int hp, int Def, int AttackDamage, int Mana, bool AirUnit, bool GroundATK, bool AirATK) :
		name(name), hp(hp), Def(Def), AttackDamage(AttackDamage),Mana(Mana),AirUnit(AirUnit), GroundATK(GroundATK), AirATK(AirATK) {}

	//함수 생성
	virtual void Stats();
	virtual void Attack(); 
	virtual void Skill();
	virtual void Target(BarracksUnit& Target);
};

//public 생성자 이용
class Marine : BarracksUnit
{
public:
	Marine() : BarracksUnit("마린", 40, 0, 6, 0, false, true, true) {}
};

class Medic : BarracksUnit
{
public:
	Medic() : BarracksUnit("메딕", 60, 1, 0, 100, false, false, false) {}
};
class Firebat : BarracksUnit
{
	Firebat() : BarracksUnit("파이어뱃", 60, 1, 8, 0, false, true, false) {}
};
class Ghost : BarracksUnit
{
	Ghost() : BarracksUnit("고스트", 75, 1, 5, 150, false, true, true) {}
};

