/*
*  1. namespace ���� �� ���ǻ���
*  2. cpp ����ü�� ���� ���� (��ü�� ǥ���ϴ� ������ �߰��Ǿ���.)
*  3. class Ű����
*/

// std::cout, std::cin, std::endl
// ǥ�� ���̺귯�� std

//using namespace std;  // �ش� �ҽ����� ������ ��� �ڵ带	
                      // namespace std�ȿ� �մ°����� �Ǵ��ض�
// std::cout

// �����ؾ��� ����.
// std�ȿ� �ִ� �̸��� ���� Ÿ���� �����͸� �����ϸ� ��ȣ�ϴٴ� ������ �߻��Ѵ�.

// �����ϴ� ��� ���

#include "Item.h"
#include "Player.h"

void NameSpaceExample()
{
	int number = 0;
	cin >> number;
	cout << "number�� �� : " << number << endl;
}

// �����͸� ����
// �Լ��� ����

// ����ü �ȿ� �Լ��� �����ϰԲ� �Ѵ�.


int main()
{
	cout << "ch4 : ��ü ���� ���α׷���" << endl;
	//NameSpaceExample();

	Item item1 = { "Sword", 100, 1,  ARMOR }; // �߰��� ������ �־��� ��

	// Ÿ�� item1 �̸� = {�̸�, ����, ��, Ÿ�� }

	Item item2("Potion", 50, 1, USEABLE);

	item1.ShowItemInfo();
	item2.ShowItemInfo();
}