// ���丮 ���� ���� ���

// �ܼ� ��ƿ��Ƽ �Լ�, 
// Image Ŭ����
// ImageModel ��ü ����ü�� ǥ��
// Actor - Tell(), selection()

#include "Console.h"
#include <iostream>
#include "ImageModel.h"
#include "Image.h"
#include "actor.h"
#include <conio.h>

int main()
{
	ImageModel model;
	Actor actor;
	Console::CursorVisible(false);

	Image Venusaur(model.VenusaurArt, 32);

	Console::GoToXY(15, 10);
	actor.Tell("�����̼�", "�� �߻��� �̻��ز��� ��Ÿ����!");
	Sleep(1000);

	actor.Tell("�̻��ز�(5)", "�̻�.");
	Venusaur.Show(0, 5);
	Venusaur.Move(0, 5, 10, 100);

	Venusaur.MoveReverse(10, 0, 15, 100);
	actor.Tell("�̻��ز�(5)", "�̻�.");
	bool b1 = actor.Selection("�̻��ز�", "��´�", "����ģ��");
	if (b1)
	{
		std::cout << "�̻��ز��� ��Ҵ�!" << endl;
		//bool b2 = actor.Selection("�̻��ز�", )
	}
	else
	{
		std::cout << " ������ �����ƴ�! " << endl;
	}

	while (true);
}