#pragma once

#include <iostream>
using namespace std;

// ���� - ���� ����,����
// ���ʹ� ������ �Ѵ�.
// ������ ���� ��Ģ
// ���� ���ݷ� - 

/*
*  �������̵�(override)
* 
*  Monster::Attack();
*  Slime::Attack();
*  Slime���� ���� Attack, Slime Attack � Attack ����ؾ��ϴ°�?
*  �θ��� �Լ��� ��ü�Ѵ�.
* 
*  ovverride Ű����
*/

/*
*  virtual, override
* 
*  virtual : �ڵ尡 ����(����)���� �ʴ´�. �ٸ� ������ �� �Լ��� ã�Ƽ� ����ض�.
*  override : ���� �̸��� �Լ��� �ڽĿ��� �����ϸ� �θ��� �ڵ尡 ��������.
* 
*  ������, ���, ��ũ,
   Monster.Attack();
*  Slime.Attack();
*  Goblin.Attack();
*  Orc.Attack();
* 
*  Ȯ�强 ����. ������,��ũ,���.. ���� �߰��� ������ ������ �߰��� �� ����. 
* 
*  overrideŰ����? ����� �ϴ� �Ǽ��� �������ִ� Ű����.
*  �Լ��� �̸��� ���ƾ� �Ѵ�.
*/

class ElementTYPE
{

};

class Monster   // ���� has �Ӽ�? o
{
protected:
	int LV;
	int defaultATK;
	int finalATK;
	ElementTYPE type; 

public:
	Monster() {}
	Monster(int lv, int defaultATK) : LV(lv), defaultATK(defaultATK) {}

public:
	virtual void Attack();

	void CalculateFinalATK();
};

class Slime : public Monster
{
public:
	Slime(int lv, int defaultATK) : Monster(lv, defaultATK) {}

public:
	 void Attack() override;
};

class Orc : public Monster
{
public:
	Orc(int lv, int defaultATK) : Monster(lv, defaultATK) {}

public:
	void Attack() override;
};