#pragma once

#include <iostream> //input output
#include <fstream> //file
#include <sstream> // string

// 스트림 : 흐름, 
// 코드 - 파일
// 스트림 라이브러리 존재하고, 입력과 출력을 효율적으로 관리한다.

// 가져올 데이터의 타입을 하나의 이름 가져오기 위해서 구현
const int MAX_ITEM = 100;

enum UpgradeType
{
	STR, DEX, INTEL, LUK, NONE
};

struct ItemDataType
{
	UpgradeType type;
	int        amount;

	ItemDataType()
	{
		type = UpgradeType::NONE;
		amount = 0;
	}

	ItemDataType(int typecount, int amount) :amount(amount)
	{
		if (typecount == 0)
		{
			type = UpgradeType::STR;
		}
		else if (typecount == 1)
		{
			type = UpgradeType::DEX;
		}
		else if (typecount == 2)
		{
			type = UpgradeType::INTEL;
		}
		else if (typecount == 3)
		{
			type = UpgradeType::LUK;
		}
		else
		{
			type = UpgradeType::NONE;
		}
		
	
	}
};

class Item
{
public:
	int index;
	std::string name;
	int price;
	ItemDataType dataType;

public:
	Item() : index(0), name(""), price(0), dataType(ItemDataType()) {}
	Item(int idx, std::string nm, int prc, ItemDataType datatype) :
		index(idx), name(nm), price(prc), dataType(datatype) 
	{

	}
	
};



class DataHandler
{
public:
	int LoadItems(const std:: string& filename, Item items[]);
};

