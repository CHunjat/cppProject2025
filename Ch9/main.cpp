/*
*  캡슐화 
*  상속 - 공통된 코드를 하나로 묶을 수 있다.
*  상속을 언제 해야 하는가? "IS-A"  Has-A
*  
*  상속을 사용하면 어떤 장점이 있는가?
*/

/*
*  std::cout << " 공허의 시너가 발동되면 방어력 50% 감소합니다. ""
*  게임시너지   - 
*  시너지(공통) -
*/

#include "Monster.h"
#include "MonsterHandler.h"

int main()
{
    MonsterHandler monsterHandler;

    Monster slime2(1, 5);
    Slime slime(1, 5);
    Orc orc(2, 10);

    monsterHandler.BattleWithPlayer(slime2);
    monsterHandler.BattleWithPlayer(slime);
    monsterHandler.BattleWithPlayer(orc);


    // 데이터 베이스
    // 데이터를 직접 만든다.
    // 데이터를 저장한다. 배열에 저장을 합니다.
    // 데이터를 검색하고 사용한다.

    // 탐색 알고리즘.
}