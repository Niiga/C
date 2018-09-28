// 3.3.3.cpp: 定义控制台应用程序的入口点。
// 求某数的因子（可查询某数是不是质数）

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter a positive integer:";
	cin >> n;
	cout << "Number " << n << " Factors ";
	for (int k = 1; k <= n; k++) {
		if (n % k == 0) {
			cout << k << " ";
		}
	}
	cout << endl;

	system("pause");
    return 0;
}

