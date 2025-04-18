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

#include "GameManager.h"

/*
*  Enemy ��ü
*  GameManager ��ü
*/

// Ű������ �ƹ� ��ư�� ������ �������� ����˴ϴ�.

/*
*  ������ � ������ �� SlimeIdle�̾�� �ϴ°�?
*  ������ � ������ �� Move�ΰ�?
*  ������ � ������ �� Battle�ΰ�?
*/

int main()
{
	Enemy Slime(100, 10, 1, "������", SlimeMove, IDLE);   // ���� ��ü�� ����.
	Player player(100, 10, 1, "���谡", PlayerIDLE, IDLE);// �÷��̾� ��ü ����
	GameManager Game(Slime, player);

	Game.GameLoop();
}