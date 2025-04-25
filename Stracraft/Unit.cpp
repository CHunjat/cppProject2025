#include "Unit.h"

void Marin::Move()
{
	if(!IsUpgrade || !IsUsable)
		cout << "유닛이 가진 이동속도 만큼" << "유닛이 움직입니다" << endl;
	else if(IsUsable && IsUpgrade)
		cout << "유닛이 증가한 이동속도 만큼 움직입니다." << endl;
}
