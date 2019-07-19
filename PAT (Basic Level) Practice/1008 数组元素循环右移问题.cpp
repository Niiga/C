// 1008 数组元素循环右移问题.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

void Move(int *a, int l) {
	int i, n;
	n = a[l - 1];
	for (i = l - 1; i > 0; i--) // 让数组向右移动一次
		a[i] = a[i - 1];
	a[0] = n;
}

int main()
{
	int l, n;
	cin >> l;
	cin >> n;

	int *a;
	a = new int[l];

	for (int i = 0; i<l; i++) // 给数组赋值
		cin >> a[i];

	for (int i = 0; i < n; i++) // 让数组元素右移n次
		Move(a, l);

	for (int i = 0; i < l; i++) {
		cout << a[i];
		if (i < l - 1) // 输出格式调整，最后一个数后无空格
			cout << " ";
	}

	return 0;
}