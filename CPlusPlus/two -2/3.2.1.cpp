// 3.2.2.cpp: 定义控制台应用程序的入口点。
// 输入两个数比较大小

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int x, y;
	cout << "Enter x and y:";
	cin >> x >> y;
	if (x != y)
		if (x > y)
			cout << "x > y" << endl;
		else
			cout << "x < y" << endl;
	else
		cout << "x = y" << endl;

    return 0;
}

