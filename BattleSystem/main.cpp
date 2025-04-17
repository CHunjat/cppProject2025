/*
*  Common.h ��� ������ ���� ����� ���̺귯���� �߰����ּ���
*  GoToxy();
* 
*  Player
*  Enemy, Monster, Slime
* 
*  Game,Stage,Monster Manager
*/

/*
*  ����? Battle
*  ��� : Player. Enemy.
*  ü��, ���ݷ� , ����
*  ����ϴ�.( ü���� 0���� �۰ų� ���� ��)
*  (ü���� �����ϴ� ���)
*  ������ �޾Ҵ�. ������ �Դ´�. 
*/

#include "Enemy.h"

int main()
{
	Enemy Slime(100, 10, 1, "������", SlimeMove, IDLE); // ���� ��ü�� ����.

	int slimeX = 30;
	int slimeY = 5;

	
	_getch(); // Ű������ �ƹ� ��ư�� ������ �������� ����˴ϴ�.

	/*
	*  ������ � ������ �� SlimeIdle�̾�� �ϴ°�?
	*  ������ � ������ �� Move�ΰ�?
	*  ������ � ������ �� Battle�ΰ�?
	*/

	while (true)
	{
		Slime.SetBattleImage(SlimeIdle, slimeX, slimeY);
		Sleep(500);
		system("cls");
		Slime.SetBattleImage(SlimeMove, slimeX, slimeY);
		Sleep(500);
		system("cls");
	}

}