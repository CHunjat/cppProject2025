/*
* 작성일 : 2025-4-10
* 작성자 : 나
* 주  제 : C언어와 Cpp의 공통점과 차이점
*/


//##공통점
// 1. 기본적인 문법은 일치
// 2. 변수, 반복문(for, while), 제어문(if, switch)
// 3. 배열, (같은타입의 변수들 사용) 함수
// 4. 포인터, 구조체, 파일입출력,

//##차이점
// 1.입출력을 사용하는 함수 변경 ( 참조자라는 문법이 생김 )
// 2.구조체 선언 시 이름으로 만 해도됨 신기하네
// 3.함수 기능 추가 (오버로딩, 디폴트 연산자) 
// 4.객체! (class) 지향 프로그래밍 가장 핵심!

#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h> //c형태의 입력 출력 방식을 구현해볼 것
#include <iostream> // cpp형태의 입출력 라이브러리

int main()
{

	char name[20]; //공통사용 변수

	// 출력함수 선언 캐릭터 이름 입력, 출력 코드 c언어로 구현해보세요
	// c언어의 입출력 style
	printf("c언어 입출력 코드\n");
	printf("캐릭터의 이름을 입력해주세여\n");
	scanf("%s", name);
	printf("캐릭터의 이름은 : %s\n\n", name);
	
    // cpp 입출력 style
	std::cout << "cpp 입출력 코드." << std::endl;
	std::cout << "캐릭터의 이름을 입력해주세여." << std::endl;
	std::cin >> name; 
	std::cout << "캐릭터의 이름 :" << name << std::endl;

	// 처음 보는 문법 (cpp)
	// 1. 이름 :: - namespace
	// 2. printf("%s", name) => cout << name 연산자 오버로딩
	// 3. 같은 기능을 수행한다. std::endl  = \n
}