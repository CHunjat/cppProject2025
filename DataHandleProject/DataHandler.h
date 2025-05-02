#pragma once

#include <iostream> //input output
#include <fstream> //file
#include <sstream> // string

// ��Ʈ�� : �帧, 
// �ڵ� - ����
// ��Ʈ�� ���̺귯�� �����ϰ�, �Է°� ����� ȿ�������� �����Ѵ�.

// ������ �������� Ÿ���� �ϳ��� �̸� �������� ���ؼ� ����
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

