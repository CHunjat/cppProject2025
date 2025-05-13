#include "BarracksUnit.h"

void BarracksUnit::Stats() const
{
    cout << "유닛 이름: " << name
        << " | 체력: " << hp
        << " | 방어력: " << Def
        << " | 공격력: " << AttackDamage
        << " | 에너지: " << Mana
        << " | 타입: " << (isAirUnit ? "공중" : "지상")
        << " | 공중 공격 가능: " << (isAirATK ? "가능" : "불가능")
        << endl;
}

void Marine::Skill()
{
    cout << name << "이(가) 스팀팩을 사용합니다!" << endl;
}

void Medic::Skill()
{
    cout << name << "이(가) 힐을 사용합니다!" << endl;
}

void Firebat::Skill()
{
    cout << name << "이(가) 스팀팩을 사용합니다!" << endl;

}

void Ghost::Skill()
{
    cout << name << "이(가) 핵 공격을 준비합니다!" << endl;

}
