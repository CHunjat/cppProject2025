/*
*  �ۼ��� : 2025-04-11
*  �ۼ��� : �赿��
*  ����   : ������ 
*  C,cpp ������2. ������.
*/

#include <iostream>

/*
*  ������ ���ظ� ���� �Լ� ���� Swap�Լ� �����ϱ�
*/

void SwapByValue(int num1, int num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}  // SwapByValue mainȣ������ �� num1, num2 ������ ������ ������ ����ǳ���? X

void SwapByRef(int* num1, int* num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}  // num1, num2 ���޵� ������ ������ ����ȴ�.

// �Լ� �����ε�. �Լ��� �̸��� ���Ƶ� �Ű� ������ Ÿ���� �ٸ��� ������ �� �ִ�.
void SwapByRef(int& num1, int& num2)  // &num1 - ������ �ּҸ� ��ȯ�϶�
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

// ����1. SwapPointer�Լ��� �����. �ּҸ� �����ڷ� �����ϴ� �Լ��� �����.
// int type

// ������ �����ڷ� ���� �� �ֳ���? �ƴմϴ�. �ּ�, �迭 ���� �����ڷ� ���� �� �ִ�.
// int arr[3] = {1,2,3}
// int& arrRef1 = arr[0]; // arrRef1�� arr[0]�� �����̴�.

// int  num1 = 10;
// int* num1ptr = &num1;
// int* &num1ref = num1ptr; num1ref�� num1ptr�� �����̴�.

// int* ���� �ΰ��� �ٲ۴�.
void SwapPointer(int* &num1ptr, int* &num2ptr)
{
	int* temp = num1ptr;
	num1ptr = num2ptr;
	num2ptr = temp;
}


int main()
{
	// namespace std�� ���ǵǾ��ִ� �����ȿ� cout �����ͼ� ����ϰڴ�.
	std::cout << "2��_ ������\n" << std::endl;

	// ������ ����� ����� ���еȴ�.
	// �Լ��� ����� ����� ���еȴ�.

	int num1; 
	num1 = 1;

	int* num1ptr = &num1; // num1ptr  �����ͺ����� num1�� �ּҸ� �����Ѵ�.

	int& num1ref = num1; // num1������ �����ϴ� num1ref��. num1ref�� num1�� �����ڴ�. num1 ������ �߰����ְڴ�. ������ num1ref��.

	//int num2 = num1;  // num2�� ���� 1�̴�.
	//num1 = num1 + 1;  // num1�� ���� 2�̴�.

	num1ref += 1;

	std::cout << "num1�� �� :" << num1 << std::endl; // ������ ��� cpp �������� �ۼ�
	std::cout << "num1�� �� num1ref �����ڷ� ȣ�� :" << num1ref << std::endl;	// 2;

	// A. ��(A�� ����).  
	// A�� ����� �Ծ�.
	// ���� ����� �Ծ�.

	// �����ڸ� ��� ����ϳ���?

	int input = 0;
	// scanf("%d", &input)
	// �������� Ȱ���� ���� : c++ �����ڸ� ����ؼ� �Լ��� ����� �� *, & ��ȣ�� ������� �ʰ� ǥ���� �� �ִ�.
	// std::cin >> input;

	// SwapByValue Ref�� ���� ����
	std::cout << "Call by Value�� Call by Reference ����" << std::endl;

	int value1 = 10, value2 = 20; // value1, value2 ����Ǿ ����ϰ� �����, �Լ��� �̿��ؼ�

	std::cout << "Call By Value ���" << std::endl;
	std::cout << "value1 : " << value1 << "value2 : " << value2 << std::endl;
	SwapByValue(value1, value2); //
	std::cout << "value1 : " << value1 << "value2 : " << value2 << std::endl;

	std::cout << "Call By Reference ���" << std::endl;
	std::cout << "value1 : " << value1 << "value2 : " << value2 << std::endl;
	SwapByRef(&value1, &value2); // �ּҸ� ��������� �Ѵ�. �ּҿ����ڸ� �����ϰ� �ۼ����ϸ� ������ ����.
	std::cout << "value1 : " << value1 << "value2 : " << value2 << std::endl;

	std::cout << "Call By Value ���" << std::endl;
	std::cout << "value1 : " << value1 << "value2 : " << value2 << std::endl;
	SwapByRef(value1, value2); //
	std::cout << "value1 : " << value1 << "value2 : " << value2 << std::endl;


	std::cout << "�������� ����" << std::endl;

	int ssnum1 = 1;
	int ssnum2 = 100;

	int* ssnum1ptr = &ssnum1;
	int* ssnum2ptr = &ssnum2;
	
	std::cout << "ssnum1ptr�� ���� �� ��� : " << *ssnum1ptr << std::endl;
	std::cout << "ssnum2ptr�� ���� �� ��� : " << *ssnum2ptr << std::endl;

	SwapPointer(ssnum1ptr, ssnum2ptr);	// �ּҿ� ���� ���ذ� �ʿ�.

	std::cout << "ssnum1ptr�� ���� �� ��� : " << *ssnum1ptr << std::endl;
	std::cout << "ssnum2ptr�� ���� �� ��� : " << *ssnum2ptr << std::endl;

	// �����ڸ� ����ϸ� �����Ϳ� ���� ��ȣ�� 1�� �ٿ��� ǥ���� �� �ִ�.
	// int, int ������ �ٲ� ���� �����ڸ� ����Ѵ�.
	// int*, int* ���� �ٲ� ���� int*& int*&

	// ������ ��� �� �����ؾ��� ���� 

	// int& AAA; ����1. �����ڴ� ������ �� �ݵ�� �ʱ�ȭ�� �ʿ��ϴ�.

	int AAA = 10;
	int& AAAref = AAA; // ����1�� �ذ� ���

	// const Ȱ���Ͽ��� �Լ��� ����ϴ� ������� ���̵带 �ȳ����� ��
	// void Func(const int* num1); num1�����ϴ� ���� �������� ����
	// void Func(const int& num1); num1���� ���� �������� ����

	// return Ÿ�Կ� �����ڸ� ������ �� �����ؾ� �Ѵ�.

	//  main�Լ������� ����    |    �Լ��� �� ����(int func())    |   �Լ����� ������ ����(int& func())
	// 	int a = func();		  |	   a�� ���� �����               |   a�� ���� �����. func�ȿ��� ���� ������ return���� �ʾƾ� ��.
	//  int& a = func();	  | a�� func���� ���� �������� �Ѵ�.  |  func�ȿ��� ���� ������ return���� �ʾƾ� ��.
	//                          a���� 10�� �������� �Ѵ�.
	//                          a = 9;  10�� 9�� �ض�.
	//                          ������ ���� �һ�.
	// const int& a = func(); | a������ 10�� �������� �ض�	    |   func�ȿ��� ���� ������ return���� �ʾƾ� ��.
    //                          10�� ������ a��� �Ѵ�.
	//                         const int& a= 10;	                            
}