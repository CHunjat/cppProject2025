#pragma once


// 리듬 게임에 등장하는 노트를 설명해주는 툴팁을 만든다.

class Note
{
public:
	virtual void ShowInfo();
};


class 롱노트 : Note
{
public:
	void ShowInfo() override;
};


class CharacterClass
{
public:
	void ShowInfo();
};

class 바바리안
{

};

class 마법사
{

};

class 네크로맨서
{

};

