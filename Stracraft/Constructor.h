#pragma once

#include "Unit.h"

class Constructor
{

};

class Barrack : public Constructor
{
public:
	void MakeUnit(BarrackUnit* unit);
};