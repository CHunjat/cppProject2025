/*
* Common.h 헤더 파일을 만들어서 공통된 라이브러리를 추가해주세요
* GoToXY();
* 
* --객체--
* Player
* enemy, monster, slime
* 
* Game, stage, monster Manager
* 
*/

/*
* 전투? battle
* player, enermy
* 체력, 공격력, 방어력
* 사망하다. (체력이 0보다 작거나 같을 때)
* (체력 조작하는 기능)
* 공격을 받았다. 포션을 먹는다.
*/

#include "GameManager.h"

/*
*  enemy 객체
*  GameManager 객체
*/



/*
* 적군이 어떤 조건일 때 slimeIdle이어야 하는가
* ''                    slimeMove이어야 하는가.
* ''                    slimeBattle이어야 하는가.
*/

int main()
{
	

	Enemy Slime(100, 10, 1, "슬라임", slimeMove); // 슬라임이라는 몬스터 객체생성
	Player player(100, 10, 1, "전사", PlayerIdle);
	GameManager Game(Slime,player);




	Game.GameLoop();

}