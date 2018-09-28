// ConstObject.cpp: 定义控制台应用程序的入口点。
// 常对象

// 常对象： 必须进行初始化，不能被更新。
//  const 类名 对象名;
// 常成员：
//  用const进行修饰的类成员：常数据成员和常函数成员。
//  类型说明符 函数名（参数表）const;
// 常引用： 被引用的对象不能被更新。
//  const 类型说明符 &引用名;

#include "stdafx.h"
#include <iostream>
using namespace std;

class R {
public:
	R(int r1, int r2): r1(r1), r2(r2) { }
	void print();
	void print() const;
private:
	int r1, r2;
};
void R::print() { cout << r1 << ":" << r2 << endl; }
void R::print()const { cout << r1 << ";" << r2 << endl; }

int main()
{
	R a(5, 4);
	a.print(); // 调用void print()
	const R b(20, 52);
	b.print(); // 调用void print()const

    return 0;
}

