// 스토리 게임 구성 요소

// 콘솔 유틸리티 함수, 
// Image 클래스
// ImageModel 객체 구조체로 표현
// Actor - Tell(), selection()

#include "Console.h"
#include <iostream>
#include "ImageModel.h"
#include "Image.h"
#include "actor.h"

int main()
{
	ImageModel model;
	ImageModel2 model2;
	Actor actor;
	Console::CursorVisible(false);

	Image Venusaur(model.VenusaurArt, 32);
	Image Cataperie(model2.Cataperie, 32);

	Console::GoToXY(15, 10);
	actor.Tell("나레이션", "앗 야생의 이상해꽃이 나타났다!");
	Sleep(1000);

	actor.Tell("이상해꽃(5)", "이상.");
	Venusaur.Show(0, 5);
	Venusaur.Move(0, 5, 10, 100);

	Venusaur.MoveReverse(10, 0, 15, 100);
	actor.Tell("이상해꽃(5)", "이상.");
	bool b1 = actor.Selection("나레이션", "잡는다", "도망친다");
	if (b1)
	{
		std::cout << "이상해꽃을 잡았다!" << endl;
		//bool b2 = actor.Selection("이상해꽃", )
	}
	else
	{
		std::cout << " 무사히 도망쳤다! " << endl;
	}

	Console::GoToXY(15, 10);
	actor.Tell("나레이션", " 앗 야생의 캐터피가 나타났다!");
	Sleep(1000);
	actor.Tell("캐터피(5)", "캐터피!");
	Cataperie.Show(0, 5);
	Cataperie.Move(0, 5, 10, 100);
	bool b2 = actor.Selection("나레이션", "잡는다", "도망친다");
	if (b2)
	{
		std::cout << "캐터피를 잡았다!" << endl;
		//bool b2 = actor.Selection("이상해꽃", )
	}
	else
	{
		std::cout << " 무사히 도망쳤다! " << endl;
	}
	while (true);
}