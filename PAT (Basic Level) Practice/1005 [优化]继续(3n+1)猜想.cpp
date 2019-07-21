// 1005 优化.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// 用数组和"字典"

#include "pch.h"
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	int *num;
	bool nub[110] = { false };
	int n;
	cin >> n;
	num = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> num[i];
		int Nn = num[i];
		if (nub[num[i]] == false) { // 判断是否是其他数的覆盖的数
			while (Nn != 1) { // 第一个num不等于true，剩下的覆盖数等于true
				if (Nn % 2 == 0) {
					Nn /= 2;
				}
				else {
					Nn = (3 * Nn + 1) / 2;
				}
				if (Nn < 100)
					nub[Nn] = true;
			}
		}
	}
	sort(num, num+n); // 头文件<algorithm> 给数组按升序排序
	int Nn = 0;
	for (int i = n-1; i >= 0; i--) { // 从大到小输出
		if (nub[num[i]] == false) {
			Nn++;
			if (Nn > 1) {
				cout << " " << num[i];
			}
			else {
				cout << num[i];
			}
		}
	} 
}
