#pragma once
/*
*  Player����� ����.
*  Enemy ����� ����.
*  Player, Enemy ��ü�� �������� �����Ͱ� �ִ�.
*  ���.
*  ��� ���� �������� �ϴ°�?
*  �θ� - �ڽ�
* 
*  Character Ŭ������ Entity Ŭ������ ����ϰ� �ִ�.
*  Character Ŭ������ Eneity�� �ڽ� Ŭ������.
*  Parent         -      Child
*  base           -      Derived
*/

/*
*  ���� ���� ������
*  protected : �ڽĿ��Դ� �����ְ� �� �̿ܿ��� ������ ���ϰ� ���� ��.
*  �θ� �ڽĿ��� ��� ���� �Ѱ��ְ� ���� ���� �� �ֽ��ϴ�.
*  �θ� �ڱ� �ڽſ����� ����ϰ� ���� ���� private�����ϰ�
*  �ڽĿ����� �����ϰ� ���� ���� protected �����Ѵ�.
*/

/*
*  	1. Enemy, Player �Ѵ� ü��, ���ݷ�, ������ �������� �ϼ���.
*   2. ü���� ����ϴ� �ý����� Entity �������� ���������ϴٸ� private���� ���踦 �Ѵ�.
*  
*/

class Entity
{
protected:
	int HP;
	int ATK;
	int DEF;

public:
	int GetHP();
	int GetATK();
	int GETDEF();
	void SetHP(int value);
	void SetATK(int value);
	void SetDEF(int value);
};

