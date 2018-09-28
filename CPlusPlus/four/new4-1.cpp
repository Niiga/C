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
	void setTime(int newH, int newM, int newS);
	void showTime();
// 私人函数 函数外无法引用
private:
	int hour, minute, second;
};

Clock::Clock(int newH, int newM, int newS) :
	hour(newH), minute(newM), second(newS) {
	// hour = newH; minute = newM; second = newS;

	}

inline void Clock::showTime() {
	cout << hour << ":" << minute << ":" << second;
	cout << endl;
}

int main()
{
	Clock c(0, 0, 0);
//	Clock c;
	c.showTime();

	system("pause");
    return 0;
}

