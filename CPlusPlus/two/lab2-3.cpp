// lab2-3.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int iType;
	int r, a, b;
//	cout << "请选择图形: \n" << "1. 圆形\n" << "2. 长方形\n" << "3. 正方形\n";
	cout << "图形的类型为? (1-圆形 2-长方形 3-正方形)： ";
	cin >> iType;
	
	switch (iType) {
	case 1:  
		cout << "圆形的半径为: ";
		cin >> r;
		cout << "圆形的面积为：" << 3.1415*r*r << endl;
		break;
	case 2:
		cout << "长方形的长为:";
		cin >> a;
		cout << "长方形的宽为:";
		cin >> b;
		cout << "长方形的面积为：" << a*b << endl;
		break;
	case 3:
		cout << "正方形的边长为:";
		cin >> a;
		cout << "正方形的面积为：" << a * a << endl;
		break;
	}

	system("pause");
    return 0;                                                                      
}