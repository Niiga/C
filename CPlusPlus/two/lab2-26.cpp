// lab2-26.cpp: 定义控制台应用程序的入口点。
// P63

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	char c = 'a';
	do {
		cout << "现在正在下雨吗？(Y/N)" ;
		cin >> c;
		switch (c) {
		case 'Y':
			cout << "现在正在下雨" << endl;
			c = 'a';
			break;
		case 'N':
			cout << "现在没有下雨" << endl;
			c = 'a';
			break;
		}
	} while (c != 'a');
	

	system("pause");
    return 0;
}

