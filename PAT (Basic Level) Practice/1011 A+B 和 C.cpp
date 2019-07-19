// 1011 A+B 和 C.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// 若A+B>C则输出true反之则false

// 输入样例：
// 4
// 1 2 3
// 2 3 4
// 2147483647 0 2147483646
// 0 -2147483648 -2147483647
// 输出样例：
// Case #1: false
// Case #2: true
// Case #3: true
// Case #4: false


#include "pch.h"
#include <iostream>
using namespace std;

bool Sort() {
	long long number[3];
	for (int i = 0; i < 3; i++) {
		cin >> number[i];
	}
	if (number[2] - number[1] >= number[0]) {
		//
		return false;
	}
	return true;
}

int main()
{
	int n;
	cin >> n;
	bool *br;
	br = new bool[n];

	for (int i = 0; i < n; i++) {
		br[i] = Sort();
	}
	for (int i = 0; i < n; i++) {
		if (br[i])
			cout << "Case #" << i + 1 << ": true";
		else
			cout << "Case #" << i + 1 << ": false";
		if (i < n - 1) {
			cout << endl;
		}
	}
	return 0;
}