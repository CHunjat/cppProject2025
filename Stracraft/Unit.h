#pragma once

#include "Common.h"

class Unit
{
public:
	virtual void Move() = 0; // ���� ���� �Լ�
};

class BarrackUnit : public Unit
{
public:
	virtual void Move() = 0;
};

class Marin : public BarrackUnit
{
private:
	bool IsUpgrade;
	bool IsUsable;
public:
	void Move() override;
};

class Firebat : public BarrackUnit
{

};

class Medic : public BarrackUnit
{

};