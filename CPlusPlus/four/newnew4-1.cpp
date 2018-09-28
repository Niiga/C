// 4-1_1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

// 类定义
class Clock {
	// 
public:
	Clock(int newH, int newM, int newS); // 构造函数
	Clock();
	void setTime(int newH, int newM, int newS);
	void showTime();
	
private: // 私人函数 类外无法引用
	int hour, minute, second;
};

Clock::Clock() : // 构造函数 默认赋值
	hour(0), minute(0), second(0) {
	// hour = 0; minute = 0; second = 0;
	}

Clock::Clock(int newH, int newM, int newS) : // 构造函数 参数赋值
	hour(newH), minute(newM), second(newS) {
	// hour = newH; minute = newM; second = newS;
}

void Clock::showTime() {
	cout << hour << ":" << minute << ":" << second;
	cout << endl;
}

int main()
{
	Clock c1(8, 10, 0); // 进入带参数的 构造函数
	Clock c2; // 进入不带参数的 构造函数

	c1.showTime();
	c2.showTime();

	system("pause");
	return 0;
}
