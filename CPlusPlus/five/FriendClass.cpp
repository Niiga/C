// FriendClass.cpp: 定义控制台应用程序的入口点。
// 友元类
// 友元关系是单向的

#include "stdafx.h"
#include <iostream>
using namespace std;

class A {
	friend class B;
public:
	void display() { cout << x << endl; }
private:
	int x;
};

class B {
public:
	void set(int i);
	void display();
private:
	A a;
};
void B::set(int i) { a.x = i; }
void B::display() { a.display(); }

int main()
{

    return 0;
}

