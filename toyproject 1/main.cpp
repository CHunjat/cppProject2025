/*
* 목표 : cpp 게임 화면 구성하기
* 복습 : windows.h GotoXY() 재구현
* 입출력 : cpp 방식으로 입출력 하기
* 이론 : namespace 응용해보기
*/

/*
* 이름공간을 사용할 떄의 장점
* 1. 다른 두 프로젝트를 copy paste 합칠때 발생하는 문제를 최소화 할 수 있다.
* 2. 이름공간에 쓰여진 이름을 통해서 코드를 분류할 수 있다.
*/

/*
* 플레이어의 이동을 참조자를 사용하여 함수화 해보기
*/

#include <iostream>
#include <Windows.h> //커서의 위치를 옮기는 함수 setcursorposition
#include <conio.h> // 입력대기 함수 _getch() 사용가능
#include <string>   // 문자열기능!! 포함하고 있는 라이브러리
#include <iomanip> // intput output manipulate

namespace ConsoleUtils
{
	void GoToXY(int X, int Y)
	{
		COORD pos = { X,Y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	}

	void InputPlayerKey(int& X, int& Y) //참조자 사용!!
	{
		if (_kbhit())
		{
			if (GetAsyncKeyState(VK_LEFT)) // 키보드 '<-' 눌렀을때
			{
				X--;
				if (X < 0)
				{
					X = 0;
				}
			}
			else if (GetAsyncKeyState(VK_RIGHT))
			{
				X++;
				if (X > 30)
				{
					X = 30;
				}
			}
			else if (GetAsyncKeyState(VK_UP))
			{
				Y--;
				if (Y > 0)
				{
					Y = 0;
				}
			}
			else if (GetAsyncKeyState(VK_DOWN))
			{
				Y++;
				if (Y > 30)
				{
					Y = 30;
				}
			}
		}
	}

}

struct Item
{
	//char name[20]; std::string 이름의 크기를 자동으로 할당해준다.
	std::string name; 
	int price; 
};

// Item 구조체의 참조자를 받아와서 이름을 원하는 이름으로 변경하고 가격을 원하는 가격으로 설정하는 함수
// const 사용, 참조자 사용, Item 구조체 사용

void MySetItem()
{
	
}

void SetItem(Item& item, const std::string nName, int price) //밖에서 가져온 이름을 바꾸지 않겠다. // 구조체 참조자 밖에있는 함수에서 바꾸고 밖에서도 적용해주겠다.
{
	item.name = nName; // 외부에서 가져온 아이템을 item nName으로 설정해준다. 
	item.price = price;

}

void SetItem(Item& Setitem, const Item& copyItem) // ShopItem 항목, 
{
	Setitem.name = copyItem.name;
	Setitem.price = copyItem.price;
}

//디폴트 매개 인자 : 함수 호출 시에 부족하게 매개 변수를 부족하게 입력하면 자동으로 변수에 대입된다.
// showshop(shop, 3, 10 , 10);
// shop, length << 디폴트가 아니기 때문에 앞부분에 작성해줘야함 ex) Item shop[] ,int x = 10 등등
void ShowShop(Item shop[], int length, int x =10, int y=10) // 외부에서 아이템의 배열을 가져오겠다.
{
	ConsoleUtils::GoToXY(x, y);
	// #include <iomanip> std::left, right 왼쪽 또는 오른쪽 정렬시켜주는 기능
	// std:: setw(20); 문자열의 크기가 20공간을 받는다, 문자의 빈공간이 있다면 빈공간은 공백문자로 출력해준다.
	std::cout << std::left << std::setw(20) << "아이템 이름" << "|"
		<< std::setw(10) << "아이템 가격" << "|" << std::endl;

	for (int i = 0; i < length; i++)
	{
		//std::cout << "이름 : " << ItemA.name << ", 가격 :" << ItemA.price << std::endl;
		//std::cout << "이름 :" << shop[i].name << ", 가격: " << shop[i].price << std::endl;
		ConsoleUtils::GoToXY(x, y+1+i);
		std::cout << std::left << std::setw(20) << shop[i].name << "|" << std::setw(11) << shop[i].price << "|" << std::endl;
		
	}

}

// shop배열, 선택할 인덱스, Item배열 인벤토리 . 
// copyitem 
// 상점(Item 배열)에 있는 데이터를 복사해서, 유저의 아이템 배열에 가져온다. 배열의 데이터를 변경한다.

Item& GetItem(Item shop[], int length, int index)
{
	if (index > length)
	{
		std::cout << "등록되지 않은 아이템을 선택하여 0번쨰 아이템이 반환됩니다." << std::endl;
		return shop[0];
	}

	return shop[index];
}

void AddInventory(Item inventory[], int length, int index, const Item& buyItem)
{
	inventory[index].name = buyItem.name;
	inventory[index].price = buyItem.price;
}

int main()
{
	std::cout << " 아이템의 예제 " << std::endl;
	Item ItemA; 
	Item ItemB;
	Item ItemC;


	SetItem(ItemA, "Apple", 100);
	SetItem(ItemB, "BANANA", 500);
	SetItem(ItemC, "CANDY", 500);
	Item Shop[3] = { ItemA, ItemB, ItemC };

	Item Inventory[3];

	ShowShop(Shop, 3,0,0);
	std::cout << "구매하고싶은 아이템 번호를 입력" << std::endl;
	int input;
	std::cin >> input;
	AddInventory(Inventory,3,0, GetItem(Shop, 3, input - 1));

	// 상점으로부터 인벤토리에 아이템 추가
	// 몬스터 데이터가 여러개가 있는데 현재 배틀 중에 등장할 몬스터를 선택한다.
	// 몬스터 데이터를 불러오는 거
	// stage정보가 있는데 특정 스테이지를 호출하고 싶다.
	// 몬스터, stage, 데이터




	std::cout << " 인벤토리의 아이템 확인 " << std::endl;
	std::cout << Inventory[0].name <<  "," << Inventory[0].price << std::endl;

	/*std::cout << "이름 : " << ItemA.name << ", 가격 :" << ItemA.price << std::endl;
	std::cout << "이름 : " << ItemB.name << ", 가격 :" << ItemB.price << std::endl;*/
	_getch();


	// 예제 1. 10,10 좌표에 플레이어의 정보 텍스트를 출력해보세요.
	ConsoleUtils::GoToXY(2, 2);
	std::cout << "플레이어의 정보" << std::endl;

	// 예제 2. 플레이어의 이름을 입력받아서 플레이어의 정보 텍스트 한줄 아래에 출력해주세요 
	// 입력값을 정수로 받아서, 1을 받으면 플레이어 이름 추가하기
	// 2를 받으면 화면에 플레이어 정보를 출력하기

	char name[10];

	while (true)
	{
		int inputNumber = 0;

		std::cout << "1_사용자의 이름을 변경할 수 있습니다. 2_ 플레이어의 정보를 화면에 출력합니다." << std::endl;
		std::cin >> inputNumber; //언제 주소 연산자 사용하고, 언제 안하는데 이부분이 이해가 안감.
		if (inputNumber == 1)
		{
			std::cout << "이름을 입력해주세여\n";
			std::cin >> name;
		}
		else if (inputNumber == 2)
		{
			ConsoleUtils::GoToXY(10, 10);
			std::cout << "플레이어의 정보:";
			ConsoleUtils::GoToXY(10, 11);
			std::cout << "플레이어의 이름:" << name;
			_getch();
		}
		else
		{
			break;
		}

		system("cls");
		
	}

	int X = 0, Y = 0;
	while (true) //플레이어의 이동 구현
	{
		
		ConsoleUtils::InputPlayerKey(X, Y);
		std::cout << "플레이어의 좌표 : " << "[" << X << " , " << Y << "]" << std::endl;
		ConsoleUtils::GoToXY(X, Y);
		std::cout << "마마";
	}
}

