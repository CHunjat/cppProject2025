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


public: //������
	BarracksUnit(string name, int hp, int Def, int AttackDamage, int Mana, bool isAirUnit, bool isAirATK) :
		name(name), hp(hp), Def(Def), AttackDamage(AttackDamage),Mana(Mana), isAirUnit(isAirUnit), isAirATK(isAirATK) {}
public:
	virtual void Stats() const;
	virtual void Skill() = 0; // ���ָ��� �޶� �������
	bool getIsAirUnit() const 
	{
		return isAirUnit;
	}
	// ���� ���� ���� ���� ��ȯ
	bool getCanAttackAir() const 
	{
		return isAirATK;
	}
};




//public ������ �̿�
class Marine : public BarracksUnit
{
public:
	Marine() :  BarracksUnit("����", 40, 0, 6, 0, false, true) {}
	void Skill();
};

class Medic :public BarracksUnit
{
public:
	Medic() :  BarracksUnit("�޵�", 60, 1, 0, 100, false, false) {}
	void Skill();

};
class Firebat : public  BarracksUnit
{
public:
	Firebat() : BarracksUnit("���̾��", 60, 1, 8, 0, false, false) {}
	void Skill();
};
class Ghost : public BarracksUnit
{
public:
	Ghost() : BarracksUnit("��Ʈ", 75, 1, 5, 150, false, true) {}
	void Skill();

};

