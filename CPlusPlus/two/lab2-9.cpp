// L2-9.cpp: 定义控制台应用程序的入口点。
// P50 例2-9

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	const int N = 4;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= 30; j++) cout << " ";
		for (int j = 1; j <= 8 - 2 * i; j++) cout << " ";
		for (int j = 1; j <= 2 * i - 1; j++) cout << "*";
		cout << endl;
	}
	for (int i = 1; i <= N - 1; i++) {
		for (int j = 1; j <= 30; j++) cout << " ";
		for (int j = 1; j <= 7 - 2 * i; j++) cout << "*";
		cout << endl;
	}

	system("pause");
    return 0;
}

