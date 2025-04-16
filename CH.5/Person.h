#pragma once

#include "Common.h"

// 이름이 person 구조체로! 나이,이름

/*
* C와 CPP의 차이점 3. 메모리 동적 할당. char
* 
* malloc(Memory allocate) : malloc(크기 sizeof(char) * 10 ) 
* free(변수 이름) 해줬어야함.  
* 
* 다만 CPP에서는 간결하게 바꿈
* new  : CPP 동적할당 하는 키워드
  delete : 메모리를 해제하는 키워드 (free 대용)로 바뀜
*/

/*
* 생성자 : 객체가 데이터를 생성할 떄 초기화 해주는 방법
* 소멸자 : 객체가 소멸할때 자동으로 호출되는 기능
*/

/*
* age, name; age = 20; name = "모험가"
* age = 외부에서 가져온 숫자 넣어라 age(age) , name(name)
* 주소 = 주소; 생길 수 있는 문제점? 
*/

enum GENDER
{
	남자,
    여자
};

struct Person 
{
	int age;
	char* name;  //길이가 얼마나 되는데? char는 설정되어있지 않음,  메모리가 배정x      //길이를 자동저장하는 string name이면 더편함 사실 근데 다른경우 보여주는거임
	string sName;
	GENDER type;

	//디폴트 생성자.
	Person() {} 

	// 가장 간단한 문자열 초기화 방식
	Person(int age, const string& sName, GENDER type) : age(age), sName(sName), type(type) 
	{} // 밑에거 한번에하는 방식임...... 자동으로 해줌.

	// 생성자 오버로딩
	Person(int age, const char* str) : age(age) 
	{
		// 메모리의 공간을 직접 생성해줘야 한다.
		 name = new char[strlen(str) + 1];  //this 이녀석은 이름 같을때 씀. ex name을 str로 바꿔서 this-> name = new char{strlen(str)... 로 하면됨
		// 새로 생성한 공간에 외부에 있는 데이터를 복사해서 옮겨와야한다.
		 strcpy(name, str);

	}

	
	//소멸자 : 객체가 소멸 될때 자동으로 호출된다.
	~Person()
	{
		cout << "person의 소멸자가 호출되었습니다" << endl;
		delete[] name;
	}

	
	void const show(); // 객체 안의 데이터를 변경없이 사용하겠다. 사용자에게 알려준다.
	void Clone(const Person& other);
	string GenderPrint();
};