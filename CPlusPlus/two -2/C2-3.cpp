// 实心菱形

//#include "stdafx.h"
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
