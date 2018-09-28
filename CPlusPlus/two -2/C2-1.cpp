// C2-1.cpp: 定义控制台应用程序的入口点。
// 任意给定 n 个整数，求这 n 个整数序列的和、最小值、最大值
#include <iostream>
using namespace std;

int main()
{
	int n;
	int i;
	int Sum=0, Max, Min;
	cin >> n;	// 输入n的值

	if (n > 0) {
		// 当n大于0时开始计算
		cin >> i;
		Sum += i;
		Max = i;
		Min = i;
	}
	else {
		return 1;
	}
	
	while (--n > 0) {	
		// 当--n大于0时开始计算
		cin >> i;
		Sum += i;

		// 当Max小于i时，将i的值赋值给Max，求最大值
		if (Max < i) Max = i;
		// 当Min大于i时，将i的值赋值给Min，求最小值
		if (Min > i) Min = i;
	}
	cout << Sum << " " << Min << " " << Max;

    return 0;
}
