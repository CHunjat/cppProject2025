/*
*  ��ǥ : �޸��忡 �ִ� ���� �����͸� �ڵ�� �о���� ����� �����Ѵ�.
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