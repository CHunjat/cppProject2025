#pragma once
#include "Common.h"
class BarracksUnit
{
protected: // ������Ƽ��� ������ �⺻ ����
	string name;
	int hp;
	int Def;
	int AttackDamage;
	int Mana;
	bool AirUnit; 
	bool GroundATK;
	bool AirATK;


public: //������
	BarracksUnit(string name, int hp, int Def, int AttackDamage, int Mana, bool AirUnit, bool GroundATK, bool AirATK) :
		name(name), hp(hp), Def(Def), AttackDamage(AttackDamage),Mana(Mana),AirUnit(AirUnit), GroundATK(GroundATK), AirATK(AirATK) {}

	//�Լ� ����
	virtual void Stats();
	virtual void Attack(); 
	virtual void Skill();
	virtual void Target(BarracksUnit& Target);
};

//public ������ �̿�
class Marine : BarracksUnit
{
public:
	Marine() : BarracksUnit("����", 40, 0, 6, 0, false, true, true) {}
};

class Medic : BarracksUnit
{
public:
	Medic() : BarracksUnit("�޵�", 60, 1, 0, 100, false, false, false) {}
};
class Firebat : BarracksUnit
{
	Firebat() : BarracksUnit("���̾��", 60, 1, 8, 0, false, true, false) {}
};
class Ghost : BarracksUnit
{
	Ghost() : BarracksUnit("��Ʈ", 75, 1, 5, 150, false, true, true) {}
};

