/*
*  목표 : 메모장에 있는 게임 데이터를 코드로 읽어오는 방법을 구현한다.
*/
#include "ShopManager.h"

int main()
{
	Shop shop;

	shop.ShowItem();
	
	Player player;

	player.Upgrade(shop.GetItems(3));
	player.ShowPlayerInfo();

}