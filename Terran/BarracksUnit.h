#pragma once
#include "Common.h"
class BarracksUnit
{
public:
	string name;
	int hp;
	int Def;
	int AttackDamage;
	int Mana;
	bool isAirUnit; 
	bool isAirATK;


public: //생성자
	BarracksUnit(string name, int hp, int Def, int AttackDamage, int Mana, bool isAirUnit, bool isAirATK) :
		name(name), hp(hp), Def(Def), AttackDamage(AttackDamage),Mana(Mana), isAirUnit(isAirUnit), isAirATK(isAirATK) {}
public:
	virtual void Stats() const;
	virtual void Skill() = 0; // 유닛마다 달라 수정요망
	bool getIsAirUnit() const 
	{
		return isAirUnit;
	}
	// 공중 공격 가능 여부 반환
	bool getCanAttackAir() const 
	{
		return isAirATK;
	}
};




//public 생성자 이용
class Marine : public BarracksUnit
{
public:
	Marine() :  BarracksUnit("마린", 40, 0, 6, 0, false, true) {}
	void Skill();
};

class Medic :public BarracksUnit
{
public:
	Medic() :  BarracksUnit("메딕", 60, 1, 0, 100, false, false) {}
	void Skill();

};
class Firebat : public  BarracksUnit
{
public:
	Firebat() : BarracksUnit("파이어뱃", 60, 1, 8, 0, false, false) {}
	void Skill();
};
class Ghost : public BarracksUnit
{
public:
	Ghost() : BarracksUnit("고스트", 75, 1, 5, 150, false, true) {}
	void Skill();

};

