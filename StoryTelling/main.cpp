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

int main()
{
	ImageModel model;
	ImageModel2 model2;
	Actor actor;
	Console::CursorVisible(false);

	Image Venusaur(model.VenusaurArt, 32);
	Image Cataperie(model2.Cataperie, 32);

	Console::GoToXY(15, 10);
	actor.Tell("�����̼�", "�� �߻��� �̻��ز��� ��Ÿ����!");
	Sleep(1000);

	actor.Tell("�̻��ز�(5)", "�̻�.");
	Venusaur.Show(0, 5);
	Venusaur.Move(0, 5, 10, 100);

	Venusaur.MoveReverse(10, 0, 15, 100);
	actor.Tell("�̻��ز�(5)", "�̻�.");
	bool b1 = actor.Selection("�����̼�", "��´�", "����ģ��");
	if (b1)
	{
		std::cout << "�̻��ز��� ��Ҵ�!" << endl;
		//bool b2 = actor.Selection("�̻��ز�", )
	}
	else
	{
		std::cout << " ������ �����ƴ�! " << endl;
	}

	Console::GoToXY(15, 10);
	actor.Tell("�����̼�", " �� �߻��� ĳ���ǰ� ��Ÿ����!");
	Sleep(1000);
	actor.Tell("ĳ����(5)", "ĳ����!");
	Cataperie.Show(0, 5);
	Cataperie.Move(0, 5, 10, 100);
	bool b2 = actor.Selection("�����̼�", "��´�", "����ģ��");
	if (b2)
	{
		std::cout << "ĳ���Ǹ� ��Ҵ�!" << endl;
		//bool b2 = actor.Selection("�̻��ز�", )
	}
	else
	{
		std::cout << " ������ �����ƴ�! " << endl;
	}
	while (true);
}