// lab2-35.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>	// 使用setw
using namespace std;

int main()
{
	int i, j;
	cout << ' ';
	// 输出第一行的数字
	for (i = 1; i < 10; i++) {
//		cout << setw(4) << i;
		cout.width(4);	
		cout << i;
	}
	cout << endl;
	for (i = 1; i < 10; i++) {	
		cout << i;	// 输出左侧数字
		for (j = 1; j < 10; j++)
			cout << setw(4) << (i*j);
		cout << endl;
	}

	system("pause");
    return 0;
}

