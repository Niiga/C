// 1007 素数对猜想.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;

int Judge(int n) {
	if (n == 1) return 1; 
	if (n % 2 == 0) return 0; // 不是素数返回0；
	for (int i = 2; i <= sqrt(n); i++) { // 判断是否是素数
		if (n%i == 0) {
			return 0;
		}
	}
	return 1;
}

int main()
{
	int n, sum;
	cin >> n;
	if (n < 2) {
		return 0;
	}
	
	sum = 0;
	for (int i = 2; i <= n; i++) {
		if (i + 2 > n) {
			break;
		}
		if ((Judge(i) == 1) && (Judge(i + 2) == 1)) {
			// 判断是否是素数对
			sum++;
		}
	}

	cout << sum;
	return 0;
}