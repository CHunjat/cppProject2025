#pragma once

#include "Common.h"
#include "Utility.h"

enum PlayerStat
{
	MINSPEED, MAXSPEED, NONE

};

class Runner
{
private:
	
	bool isEnd;
protected:
	PlayerStat stat;
	int run;
	int minSpeed;
	int maxSpeed;

	int money;

	string symbol;

	virtual void SetMaxSpeed();
	void DrawMoveDistance();
	virtual void SetShape();

public:
	Runner() : run(0),isEnd(false), minSpeed(1),maxSpeed(5),symbol("E"), 
		stat(PlayerStat::NONE) , money(1000){}
	Runner(string symbol) : run(0), isEnd(false), minSpeed(1), maxSpeed(5), 
		symbol(symbol), stat(PlayerStat::NONE), money(1000) {}
	void Run();
	bool CheckEndLine(int length);

	void Upgrade(PlayerStat selectedStat);
	void Upgrade(PlayerStat selectedStat, int amount); // 함수 오버로딩 인자가 다르면 같은이름 가능

	void SetMin(int Value);
	void SetMax(int Value);

	void InitiaLize();

};

class Player : public Runner
{
protected:
	void SetMaxSpeed() override;
	void SetShape() override;

public:
	Player() : Runner() 
	{
		symbol = "P";
	}

	Player(string symbol) :Runner(symbol) {}

	void ShowPlayerGameInfo();

	
};

class Enemy :public Runner
{
protected:
	void SetMaxSpeed() override;
	void SetShape() override;

public:
	Enemy() : Runner()
	{
		symbol = "E";
	}

	Enemy(string symbol) :Runner(symbol) {}


};