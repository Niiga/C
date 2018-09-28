// StaticFunctionMember.cpp: 定义控制台应用程序的入口点。
// 静态函数成员：
//   
// 

#include "stdafx.h"
#include <iostream>
using namespace std;

class Point {
public:
	Point(int x = 0, int y = 0) :x(x), y(y) { count++; }
	Point(Point &p) {
		// 复制构造函数
		x = p.x;
		y = p.y;
		count++;
	}
	~Point() { count--; }
	int getX() { return x; }
	int getY() { return y; }
	static void showCount() {
		cout << "Object count = " << count << endl;
		/// 只有一个 count 静态的数据
		// 静态函数不可直接访问对象的变量
	}
private:
	int x, y;
	static int count;
};

int Point::count = 0;

int main()
{
	Point::showCount(); // 输出对象个数
	Point a(4, 5); // 定义对象a，其构造函数回使count增1
	cout << "Point A:" << a.getX() << ", " << a.getY();
	Point::showCount(); // 输出对象个数

	Point b(a);  // 定义对象b，其构造函数回使count增1
	cout << "Point B: " << b.getX() << ", " << b.getY();
	Point::showCount(); // 输出对象个数

    return 0;
}

