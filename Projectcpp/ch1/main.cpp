#include <iostream> // #include <stdio.h> 대체 cpp

/*
* cpp에 추가된 문법을 이해한다.
* 1. std:: 분석
* 2. 코드에서 "std::" 지워보세요.
* 3. 결과 : 식별자 cout이 정의되어 있지 않습니다. 
* Q. iostream 추가 했는데 "왜안돼나요?"cout" 찾을 수 없나요?
* A. "cout" 특별한 공간에 존재하기때문에 찾을수 없어요
* Q. 그 특별한 공간은 어떻게 사용해야 할까요?
* A. name space에 대한 이해가 필요합니다.
*/

// A회사 ACOM, B회사 BCOM
// ACOM 에서 만든 goods , BCOM에서 만든 goods
// 문제점 : 특정 키워드의 이름들이 같으면 컴퓨터가 구분해서 판별할 수 없다. - 에러발생
// 변수의 이름 앞에 이름공간을 추가해준다.
// ACOM - goods.
// BCOM - goods.

namespace ACOM
{
	char goods[10];
	int sum;
}

namespace BCOM
{
	char goods[10];
	int sum;

}

int main()
{
	std::cout << "ch1" << std::endl;
	std::cout << "소주제 : 이름 공간에 대한 이해" << std::endl;

	// 이름 공간의 첫번째 예제
	// 같은 이름의 변수를 사용하는 문법이 추가되었다.
	// 사용법 : 이름::변수;


	std::cin >> ACOM::goods;
	std::cout << "A회사의 상품 이름 : " << ACOM::goods << std::endl;

	std::cin >> BCOM::goods;
	std::cout << "B회사의 상품 이름 : " << BCOM::goods << std::endl;

	//문제1. 숫자를 5개 입력을 받아서 A회사의 합계 저장을 한 다음, 숫자를 5개 입력을 받아서 B회사의 합계에도 저장을 해주세요
	//A회사와 B회사 합계 변수 이름은 int sum 동일하게 작성해주세요
	// 1.std::cin int 값 입력받기
	// 2.for반목문 5회 더하기
	// 3.이름 공간에 sum 변수에 저장하고 출력하기

	int number = 0;

	for (int i = 0; i < 5; i++)
	{
		std::cout << i+1 <<"상품의 갯수" << std::endl;
		std::cin >> number;
		// 갯수를 입력 받은 후에 A회사의 총합을 의미하는 변수에 더해줘야한다.
		ACOM::sum += number;

	}
	for (int i = 0; i < 5; i++)
	{
		std::cout << i + 1 << "상품의 갯수" << std::endl;
		std::cin >> number;
		// 갯수를 입력 받은 후에 A회사의 총합을 의미하는 변수에 더해줘야한다.
		BCOM::sum += number;

	}
	std::cout << "A회사의 상품의 갯수 총합 : " << ACOM::sum << std::endl;
	std::cout << "B회사의 상품의 갯수 총합 : " << BCOM::sum << std::endl;

	// toyProject1 프로젝트 c++ 추가된 문법을 게임에 적용하는 시간.
	// 겜프1, 겜프2 개인 프로젝트를 cpp 버전으로 이식하는 시도. 
	// namespace 여러분의 게임에 적용하는 것
	// c버전 프로젝트 -> c++버전 프로젝트 변경
	// readme 오늘 날짜 change log 추가

}

