// lab2-28.cpp: 定义控制台应用程序的入口点。
// p63

#include "stdafx.h"
#include <iostream>
using namespace std;
/**/
int main()
{
	char a;
	cout << "Menu: A(dd) D(elete) S(sort) Q(uit)" << endl;
	cin >> a;

	while (a != 'Q') {
		switch (a) {
		case 'A':
			cout << "数据已经增加" << endl;
			cin >> a;
			continue;
		case 'D':
			cout << "数据已经删除" << endl;
			cin >> a;
			continue;
		case 'S':
			cout << "数据已经排序" << endl;
			cin >> a;
			continue;
		case 'Q':
			break;
		}
	}


	/* // if···else语句
	while (a != 'Q') {
		if (a == 'A') {
			cout << "数据已经增加" << endl;
			cin >> a;
			continue;
		} else if (a == 'D') {
			cout << "数据已经删除" << endl;
			cin >> a;
			continue;
		} else if (a == 'S') {
			cout << "数据已经排序" << endl;
			cin >> a;
			continue;
		}	else if (a == 'Q') break;
	}
	*/
	system("pause");
    return 0;
}

