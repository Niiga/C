// copy class1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// 回去用DEV C++试试

#include "pch.h"
#include <cstring>
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

class MyString {
public:
	MyString(const char *s);
	~MyString() { delete[]data; }
protected:
	unsigned len;
	char * data;
};

MyString::MyString(const char *s) {
	len = strlen(s);
	data = new char[len + 1];
	strcpy(data, s);
}

int main()
{
	MyString a("C++ Programming");
	MyString b(a);
	return 0;
}
