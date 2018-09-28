// FriendFunction.cpp: 定义控制台应用程序的入口点。
//
// 友元函数是在类声明中由关键字friend修饰说明的非成员函数
//   在它的函数体中能够通过对象名访问 private 和 protected 成员
// 作用：增加灵活性，使程序员可以在封装和快速性方面做合理选择
// 访问对象中的成员必须通过对象名

// 若一个类为另一个类的友元，则此类的所有成员都能访问对方类的私有成员。
// 声明语法：将友元类名在另一个类中使用friend修饰说明。

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

class Point {
public: // 公开
	Point(int x=0, int y=0): x(x), y(y) {}
	int getX() { return x; }
	int getY() { return y; }
	// 给dist函数一个授权，让它可以访问x坐标 y坐标
	friend float dist(Point &a, Point &b); // 传引用做参数
private: // 私有
	int x, y;
};

float dist(Point &a, Point &b) {
	double x = a.x - b.x;
	double y = a.y - b.y;
	// static_cast<float> ??
	return static_cast<float> (sqrt(x*x + y * y));
}

int main()
{
	Point p1(1, 1), p2(4, 5);
	cout << "The distance is:";
	cout << dist(p1, p2) << endl;

    return 0;
}