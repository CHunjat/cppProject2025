// Ŭ������ ����� ����.

#include "Base.h"

void ClassDefaultInfo()
{
	Base* base = new Base();
	delete base;

	Base* derived = new Derived();
	derived->Do();

	delete derived;
}

#include "GameManager.h"
int main()
{
	GameManager Game;

	Game.Play();


}