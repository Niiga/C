// lab2-18.cpp: 定义控制台应用程序的入口点。
// 输出ASCII码为 32~127 的字符

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int i;
	for (i = 32; i <= 127; i++) cout << (char)i;

	system("pause");
    return 0;
}

