#include <iostream>

/*
* x,y의 정수형 좌표를 함수의 매개 변수로 받아서 외부에서 값이 변경되도록 하는 함수 void PlayerInput(int& x,y);
* 반환값 없는 함수, 
* 이름이 PlayerInput(int& a, int& b,) 호출할 수있다.
* 타입 해석 : 정수형 데이터, 참조한 데이터를 수정할 수 있다.
*/

/*
* 반환타입 함수이름(타입 이름,  ....필요한갯수){}
* 
* 1. 반환타입 - 참조자로 사용되는 경우, 아닌 경우
* 2. 매개변수 - 참조자로 사용되는 경우, 아닌 경우
*/


/*
*  함수 오버로딩(overloading)
*  플레이어의 x,y 좌표를 입력받아서 좌표를 변경시키는 함수
*  플레이어의 좌표라는 구조체를 입력받아서 좌표를 변경시키는 함수
*  같은 이름 타입만 다르게 받으면 컴퓨터(컴파일러) 가 구분해서 읽어올 수 있다.
*/

// c++ 타입 뎁프 선언이 없어도 struct 이름으로 타입과 구조체를 사용할 수 있다.
struct Pos
{
	int X;
	int Y;
};

/*
* 함수 오버로딩
*  c++ 에서 함수를 호출하는 방법 알려준다. 이름(타입 , 이름)
* 함수 오버로딩은 함수의 이름과 함수의 매개 변수의 타입의 갯수로 구분한다.
* 
* 주의할 점
*  - 반환형이 달라도 같은 함수로 판단한다. void inputplayer // int inputplayer 오버로딩 불가
* 
* void playerinput(int x, int y)
* void playerinput(int a, int b) // 이둘은 중복되며 x,y a,b 는 관계없이 타입으로 구분한다 오버로딩은.
*/


/*
*  참조자를 반환형에 사용하는 경우.
* 
* 
*/

int& ReturnRef() // int& num1 = ReturnRef(); 
                 // num공간에 숫자 20을 넣고 5를 더해준다. num에 별명을  num1로 하겠다. 
	             // num지역 변수 함수가 종료되면 소멸한다. 
	             // 댕글링 레퍼런스, 속성에서 변경 프로젝트 우클릭 - > 속성 - > c/c++ -> 경고수준 수정
 
{
	int num = 20;
	num += 5;
	return num;
}

// 구조체 배열 
// 아이템, 상점, 인벤토리, 
// 방해요소 선인장, 선인장의 크기 작은 , 큰게,
// 슬라임 3종류, 작은, 큰, 중간,
// 참조자를 이 개념에 대입해본다.


void PlayerInput()
{
	std::cout << "PlayerInput 함수 실행" << std::endl;
}

void PlayerInput(Pos& playerPos) // 이름 playerinput , 매개변수 한개)
{
	playerPos.X += 1;
	playerPos.Y += 1;
}


void PlayerInput(int& a, int& b) // 이름 playerinput, 매개변수 두개 int)
{
	a += 1;
	b += 1;
}

int main()
{
	std::cout << "CH3. 구조자와 참조자" << std::endl;

	int playerX = 0, playerY = 0;
	PlayerInput(playerX, playerY);

	std::cout << "playerinput 출력결과" << std::endl;
    std::cout << "X의 값 : " << playerX <<"," << "Y의 값 : " << playerY;


	Pos PlayerPos = { playerX,playerY };
	PlayerInput(PlayerPos);
	std::cout << "playerinput 출력결과" << std::endl;
	std::cout << "X의 값 : " << PlayerPos.X << "," << "Y의 값 : " << PlayerPos.Y;
	
	PlayerInput();
}