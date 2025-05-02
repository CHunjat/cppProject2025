#include "DataHandler.h"

int DataHandler::LoadItems(const std::string& filename, Item items[])
{

    std::ifstream file(filename);

    if (!file.is_open()) // ������ ������ �ʾҴٸ�
    {
        std::cerr << "������ ���� ���߽��ϴ�" << filename << std::endl;
        return 0;

    }

    int itemCount = 0;
    std::string line;

    // item �׸��� �о�;��Ѵ�.

    while (std::getline(file, line)&& itemCount < MAX_ITEM )
    {
        std::istringstream iss(line);
        int index;
        std::string name;
        int price;
        int typecount;
        int amount;

        // ������ �Ľ�
        if (iss >> index >> name >> price>>typecount>>amount)
        {
            ItemDataType newtype(typecount, amount);
            items[itemCount++] = Item(index, name, price, newtype);
  
        }
        else
        {
            std::cerr << "��ȿ���� ���� �����Ͱ� �����մϴ� "<< line << std::endl;
        }
    }

    file.close();
    return itemCount;
}
