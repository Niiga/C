// lab2-34-me.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	enum Ball {red, yellow, blue, white, black};
	Ball pri;
	int n, i, j, k;
	int loop;
	n = 0;

	for (i = red; i <= black; i++) {
		for (j = red; j <= black; j++) {
			if (i != j) {
				for (k = red; k <= black; k++) {
					if (k != i && k != j) {
						n++;
						cout.width(4);
						cout << n;
						for (loop = 1; loop <= 3; loop++) {
							switch (loop) {
							case 1: pri = (enum Ball)i; break;
							case 2: pri = (enum Ball)j; break;
							case 3: pri = (enum Ball)k; break;
							}
							switch (pri) {
							case red:
								cout.width(9);
								cout << "red";
								break;
							case yellow:
								cout.width(9);
								cout << "yellow";
								break;
							case blue:
								cout.width(9);
								cout << "blue";
								break;
							case white:
								cout.width(9);
								cout << "white";
								break;
							case black:
								cout.width(9);
								cout << "black";
								break;
							}
						}
						cout << endl;
					}
				}
			}
		}
	}

	cout << "total: " << n << endl;

	system("pause");
    return 0;
}

