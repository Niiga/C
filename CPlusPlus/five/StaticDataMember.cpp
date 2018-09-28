// StaticDataMember.cpp: 定义控制台应用程序的入口点。
// 静态数据成员：
//   用关键字static声明
//   为该类的所有对象共享，静态数据成员具有静态生存期
//   必须在类外定义和初始化，用(::)来指明所属的类

#include "stdafx.h"
#include <iostream>
using namespace std;

class Point { // Point类定义
public: // 外部接口
	Point(int x = 0, int y = 0) :x(x), y(y) {
		count++;
		// 在构造函数中对count累加，所有对象共同维护一个count
	}
	Point(Point &p) {
		// 复制构造函数
		x = p.x;
		y = p.y;
		count++;
	}
	~Point() { count--; } // 析构函数
	int getX() { return x; }
	int getY() { return y; }
	void showCount() {
		// 输出静态数据成员
		cout << " Object count = " << count << endl;
	}
private: // 私有数据成员
	// 静态数据成员声明
	int x, y;
	static int count; // 用于记录点的个数
};

// 静态数据成员定义和初始化，使用类名限定
int Point::count = 0;

int main()
{
	// 定义对象a，其构造函数回使count增1
	Point a(4, 5);
	cout << "Point A: " << a.getX() << ", " << a.getY();
	// 输出对象个数
	a.showCount();
	
	// 定义对象b，其构造函数回使count增1
	Point b(a);
	cout << "Point B: " << b.getX() << ", " << b.getY();
	// 输出对象个数
	b.showCount();

    return 0;
}