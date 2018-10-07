/* students please write your program here*/
/*
C2-3实心菱形  (100/100 分数)
打印 n 阶实心菱形
输入描述
输入一个整数n，n<=10

输出描述
输出 n 阶实心菱形 ， 占 2*n-1 行

样例输入
3
样例输出
  *
 ***
*****
 ***
  *
 */
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 1; j < n - i; j++) cout << " ";
		for (j = 0; j < 2 * i + 1; j++) cout << "*";
		cout << endl;
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < i + 1; j++) cout << " ";
		for (j = 0; j < (n - 1 - i) * 2 - 1; j++) cout << "*";
		cout << endl;
	}

    return 0;
}
