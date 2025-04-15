/*
* 1. namespace 사용법 및 주의사항
* 2. cpp 구조체의 변경사항 (객체를 표현하는 문법이 추가)
* 3. class 키워드
*/

#include <iostream>
#include "Item.h"
#include "Player.h"

// std::cout, std::cin, std::endl
// 표준 라이브러리 standard

//using namespace std; // 해당 소스파일 내부에 모든 코드를 namespace 안에 있는것으로 판단해라 라는 뜻

// 주의해야할 사항 
// std 안에있던 이름과 같은 타입의 데이터를 생성하면 모호하다는 에러가 발생 


// 권장하는 사용방법


void namespaceExample()
{
	int number = 0;
	cin >> number;
	cout << "number의 값 : " << number << endl;
}


// 데이터를 선언
// 함수를 선언 

// 구조체 안에 함수를 실행하게끔 한다.
int main()
{
	cout << "CH4 : 객체지향 프로그램" << endl;
	//namespaceExample();

	Item item1 = { "롱소드", 100, 1, ARMOR };

	// 타입 item1(이름) = { 이름, 가격, 수, 타입 }

	Item item2("Potion", 50, 1, USEABLE);
	item1.ShowItemInfo();
	item2.ShowItemInfo();

	Player player1(1, 10, "kane");
	player1.ShowInfo();
}