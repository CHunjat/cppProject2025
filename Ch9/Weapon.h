#pragma once

#include <iostream>
using namespace std;

class Weapon
{
	string name;
	int    defaultATK;

public:
	virtual void ShowInfo();
};

class ��հ� : Weapon
{

};

class ����Į���� : ��հ�
{
private:
	void OwnSkill();

public:
	void ShowInfo();
};

// 

class BlackSmith
{
private:
	����Į���� weapon1;

public:
	void EnforceWeapon(Weapon& weapon);
};

