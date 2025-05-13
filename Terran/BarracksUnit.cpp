#include "BarracksUnit.h"

void BarracksUnit::Stats() const
{
    cout << "���� �̸�: " << name
        << " | ü��: " << hp
        << " | ����: " << Def
        << " | ���ݷ�: " << AttackDamage
        << " | ������: " << Mana
        << " | Ÿ��: " << (isAirUnit ? "����" : "����")
        << " | ���� ���� ����: " << (isAirATK ? "����" : "�Ұ���")
        << endl;
}

void Marine::Skill()
{
    cout << name << "��(��) �������� ����մϴ�!" << endl;
}

void Medic::Skill()
{
    cout << name << "��(��) ���� ����մϴ�!" << endl;
}

void Firebat::Skill()
{
    cout << name << "��(��) �������� ����մϴ�!" << endl;

}

void Ghost::Skill()
{
    cout << name << "��(��) �� ������ �غ��մϴ�!" << endl;

}
