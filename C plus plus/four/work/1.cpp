// 1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Name {
	char name[20];
public:
	Name() {
		strcpy_s(name, ""); 
		cout << '?';
	}
	Name(char *fname) {
		strcpy_s(name, fname); 
		cout << '?';
	}
};

int main() {
	char name1[20] = "张三";
	char name2[20] = "李四";
	Name names[3] = { Name(name1),Name(name2) }; // 不用变量直接传"张三" 字符串会报错

	system("pause");
	return 0;
}
