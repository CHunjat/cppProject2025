#pragma once

#include "Player.h"
#include "Shop.h"

class ShopManager // player와 상점관계 같은녀석이 아님, player- shop 
{
	Player* player;
	Shop* shop;

public:
	ShopManager()
	{
		player = new Player();
		shop = new Shop();
	}
};

