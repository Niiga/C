// 4-1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Clock {
public:
	void setTime(int newH = 0, int newM = 0, int newS = 0);
	void showTime();
private:
	int hour, minute, second;
};
// 成员函数的实现
// 类名+作用域限定符
void Clock::setTime(int newH, int newM, int newS) {
	hour = newH;
	minute = newM;
	second = newS;
}

void Clock::showTime() {
	cout << hour << ":" << minute << ":" << second;
	cout << endl;
}

int main()
{
	Clock myClock;	
	myClock.setTime(8, 30, 30);
	myClock.setTime(10);
	myClock.showTime();

	system("pause");
    return 0;
}
