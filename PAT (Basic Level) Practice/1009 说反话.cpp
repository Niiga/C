// 1009 说反话.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
using std::string;

int main()
{
	int num = 0;
	
	string str;
	getline(cin, str);

	for (int i = 0; i < (int)str.length(); i++) {
		if (str[i] == ' ') {
			num++;
		}
	}
	num++; // 中间的空格数+1为单词数
	string *Sn;
	Sn = new string[num];

	num = 0;
	for (int i = 0; i < (int)str.length(); i++) {
		if (str[i] != ' ') {
			Sn[num] += str[i];
		}
		else {
			num++;
		}
	}
	num++;

	for (int i = num-1; i >= 0; i--) {
		cout << Sn[i];
		if (i > 0) {
			cout << " ";
		}
	}

	return 0;
}