// 3.3.2.cpp: 定义控制台应用程序的入口点。
// 输入一个数，将各位数字翻转后输出

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n, right_digit, newnum = 0;
	cout << "Enter the number:";
	cin >> n;
	cout << "The number in reverse order is ";
	// 无论如何循环体都要执行一次，所以用do-while
	do {
//		right_digit = n % 10;
		cout << right_digit;
		n /= 10;
	} while (n != 0);
	cout << endl;

	system("pause");
    return 0;
}

