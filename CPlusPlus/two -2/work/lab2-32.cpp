// lab2-32.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n, i=1;
	n = 49;

	cout << "猜猜这个数是几？(1~100)" << endl;
	do {
		cin >> i;
		if (i < n) cout << "猜小了哦！请继续猜！" << endl;
		else if (i > n) cout << "猜大了哦！请继续猜！" << endl;
		else if (i == n) cout << "恭喜！猜对了！这个数就是 " << i << endl;
	} while (i != n);

	system("pause");
    return 0;
}

