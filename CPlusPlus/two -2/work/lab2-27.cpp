// lab2-27.cpp: 定义控制台应用程序的入口点。
// p63

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "你考了多少分？(0～100)";
	cin >> n;
	if (n < 60)	cout << "差" << endl;
	else if (n >= 60 && n < 80) cout << "中" << endl;
	else if (n >= 80 && n < 90) cout << "良" << endl;
	else if (n >= 90 && n <= 100) cout << "优" << endl;

	system("pause");
    return 0;
}

