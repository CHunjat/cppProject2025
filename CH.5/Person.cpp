#include "Person.h"

/*
* 얕은 복사 : 데이터의 값을 그대로 다른 변수에 가져오는 것입니다. 크기가 작을 때 사용.
* 깊은 복사 : 주소를 새로 할당하여 값을 복사해서 저장하는 것. 새 메모리 공간이 할당.
*/



void Person::Clone(const Person& other)
{
	age = other.age; //얕은 복사 -> 깊은 복사 형태로 변경

	name = new char[strlen(other.name) + 1]; // 새로운 메모리 공간을 생성해주는 코드
	strcpy(name, other.name);

	type = other.type;
}

string Person::GenderPrint()
{
	switch (type)
	{
	case 남자: return "남자";
	case 여자: return "여자";
	default: return "포크레인입니다";
	}
}


void const Person::show()
{
	cout << "나이 : " << age << endl;
	cout << "이름 : " << name << endl;
	cout << "성별 : " << GenderPrint() << endl;
}
