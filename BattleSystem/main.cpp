/*
*  Common.h 헤더 파일을 만들어서 공통된 라이브러리를 추가해주세요
*  GoToxy();
* 
*  Player
*  Enemy, Monster, Slime
* 
*  Game,Stage,Monster Manager
*/

/*
*  전투? Battle
*  대상 : Player. Enemy.
*  체력, 공격력 , 방어력
*  사망하다.( 체력이 0보다 작거나 같을 때)
*  (체력을 조작하는 기능)
*  공격을 받았다. 포션을 먹는다. 
*/

#include "GameManager.h"

/*
*  Enemy 객체
*  GameManager 객체
*/

// 키보드의 아무 버튼을 누르면 다음으로 진행됩니다.

/*
*  적군이 어떤 조건일 때 SlimeIdle이어야 하는가?
*  적군이 어떤 조건일 때 Move인가?
*  적군이 어떤 조건일 때 Battle인가?
*/

int main()
{
	Enemy Slime(100, 10, 1, "슬라임", SlimeMove, IDLE);   // 몬스터 객체를 생성.
	Player player(100, 10, 1, "모험가", PlayerIDLE, IDLE);// 플레이어 객체 생성
	GameManager Game(Slime, player);

	Game.GameLoop();
}