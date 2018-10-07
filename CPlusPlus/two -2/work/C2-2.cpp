/* students please write your program here */
/*
C2-2 进制转换  (100/100 分数)
题目描述
已知一个只包含 0 和 1 的二进制数，长度不大于 10 ，将其转换为十进制并输出。

输入描述
输入一个二进制整数n，其长度不大于10

输出描述
输出转换后的十进制数， 占一行

样例输入
110

样例输出
6
*/
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
