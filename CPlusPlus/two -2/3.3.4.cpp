// 3.3.4.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int i = 0, j = 0, n;
	cout << "Enter some integers please (enter 0 to quit):" << endl;
	cin >> n;
	while (n != 0) {
		if (n > 0) i++;
		if (n < 0) j++;
		cin >> n;
	}
	cout << "Count of positive integers: " << i << endl;
	cout << "Count of negative integers: " << j << endl;

	system("pause");
    return 0;
}

