/*
C2-1简单题目  (100/100 分数)
题目描述
任意给定 n 个整数，求这 n 个整数序列的和、最小值、最大值

输入描述
输入一个整数n，代表接下来输入整数个数，n<=100,接着输入n个整数，整数用int表示即可。

输出描述
输出整数序列的和、最小值、最大值。用空格隔开，占一行
*/
#include <iostream>
using namespace std;

int main()
{
	int n;
	int i;
	int Sum=0, Max, Min;
	cin >> n;

	if (n > 0) {

		cin >> i;
		Sum += i;
		Max = i;
		Min = i;
	}
	else {
		return 1;
	}
	
	while (--n > 0) {	

		cin >> i;
		Sum += i;


		if (Max < i) Max = i;

		if (Min > i) Min = i;
	}
	cout << Sum << " " << Min << " " << Max;

    return 0;
}

