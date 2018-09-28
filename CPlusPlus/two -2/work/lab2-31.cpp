// lab2-31.cpp: 定义控制台应用程序的入口点。
// 

#include "stdafx.h"
#include <iostream>
using namespace std;

struct MyTimeStruct {
	unsigned int year;
	unsigned int month;
	unsigned int day;
	unsigned int hour;
	unsigned int min;
	unsigned int sec;
}array;

int main()
{
	MyTimeStruct myTime = {2018, 8, 26, 11, 31, 01};


	cout << "please input year: " << endl;
	cin >> myTime.year;

	do {
		cout << "please input month: " << endl;
		cin >> myTime.month;
	}while (myTime.month > 12 || myTime.month < 1);

	do {
		cout << "please input day: " << endl;
		cin >> myTime.day;
	}while (myTime.month > 31 || myTime.month < 1);

	do {
		cout << "please input hour: " << endl;
		cin >> myTime.hour;
	} while (myTime.hour > 24 || myTime.month < 0);

	do {
		cout << "please input min: " << endl;
		cin >> myTime.min;
	} while (myTime.min > 60 || myTime.month < 0);

	do {
		cout << "please input sec: " << endl;
		cin >> myTime.sec;
	} while (myTime.min > 60 || myTime.month < 0);

	cout << "the time is set to :" 
		<< myTime.year << "/"
		<< myTime.month << "/"
		<< myTime.day << " "
		<< myTime.hour << ":"
		<< myTime.min << ":"
		<< myTime.sec << endl;

	system("pause");
    return 0;
}

