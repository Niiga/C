// lab2-29.cpp: 定义控制台应用程序的入口点。
// p63 穷举法找质数

#include <iostream>
using namespace std;

int main()
{
	int i=1, j=1, num=0;
	// do...while 循环版
	do {
		do {
			if (i%j == 0) {
				num++;
				if (num > 2) break;
			}
		} while (++j <= 100);
		if (num == 2) cout << i << " 是质数" << endl;
		num = 0;
		j = 1;
	} while (++i <= 100);

	// while 循环版
	/*
	while (i++ <= 100) {
		while (j <= 100) {
			
		}
		if (num == 2) cout << i << " 是质数" << endl;
		num = 0;
		j = 1;
	}
	*/
	// for 循环版
	/*
	for (i = 1; i <= 100; i++) {
		for (j = 1; j <= i; j++) {
			if (i%j == 0) {
				num++;
			}
		}
		if (num == 2) cout << i << " 是质数" << endl;
		num = 0;
	}
	*/
	system("pause");
    return 0;
}

