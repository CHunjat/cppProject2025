#include "Unit.h"

void Marin::Move()
{
	if(!IsUpgrade || !IsUsable)
		cout << "������ ���� �̵��ӵ� ��ŭ" << "������ �����Դϴ�" << endl;
	else if(IsUsable && IsUpgrade)
		cout << "������ ������ �̵��ӵ� ��ŭ �����Դϴ�." << endl;
}
