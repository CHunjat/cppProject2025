#pragma once

// 이론 : 접근 제어 지정자. 정보 은닉.

// private, public
// struct - 기본 타입 public
// class - 기본 타입 private

#include <iostream>
using namespace std;

class HP
{
private:
	int HP;
	int MaxHP;
	bool isDeath;
public:
	void AttackedBy(int damage);
	void Recovery(int heal);
};