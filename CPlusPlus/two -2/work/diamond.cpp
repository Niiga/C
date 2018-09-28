// diamond.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int i, j;
	/*
	for (i = 0; i < n; i++) {
		for (j = 0; j < n - i - 1; j++) cout << " ";
		for (j = 0; j < 2 * i + 1; j++) cout << "*";
		cout << endl;
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < i + 1; j++) cout << " ";
		// 2n-1-2(i+1)  为空格数(i+1)
		for (j = 0; j < (n - i - 1) * 2 - 1; j++) cout << "*";
		cout << endl;
	}
	*/

	for (i = 1; i <= 2 * n - 1; i++) {
		// 空格数为 n减去行号
		for (j = 1; j <= abs(i - n); j++) cout << " ";
		// 2n-1-2(i+1)  空格数(i+1) 用abs(i-n) 代替（n-i）也可以
		for (j = 1; j <= 2 * n - 1 - 2 * abs(i - n); j++) cout << "*";
		cout << endl;
	}

	system("pause");
    return 0;
}

