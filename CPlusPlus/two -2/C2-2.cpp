// C2-2.cpp: 定义控制台应用程序的入口点。
// 已知一个只包含 0 和 1 的二进制数，长度不大于 10 ，将其转换为十进制并输出。

#include <iostream>
using namespace std;

int main()
{
	int n,i=1;
	int sum=0;
	cin >> n;

	do {
		sum += (n % 10)*i;
		i *= 2;
		n /= 10;
	} while (n > 0);
	cout << sum;

    return 0;
}