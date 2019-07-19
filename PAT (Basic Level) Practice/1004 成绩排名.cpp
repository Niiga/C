// 1004 成绩排名.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

struct Score {
	char name[11];
	char number[11];
	int score;
};

void Sort(Score *stud, int n) {
	int min;
	for (int i = 0; i < n-1; i++) {
		min = i;
		for (int j = i+1; j < n; j++) {
			if (stud[min].score > stud[j].score) {
				Score m = stud[min];
				stud[min] = stud[j];
				stud[j] = m;
			}
		}
	}
}


int main()
{
	int n;
	cin >> n;
	
	Score *stud;
	stud = new Score[n];
	
	for (int i = 0; i < n; i++) {
		cin >> stud[i].name;
		cin >> stud[i].number;
		cin >> stud[i].score;
	}
	Sort(stud, n);


	cout << stud[n-1].name << " " << stud[n-1].number << endl;
	cout << stud[0].name << " " << stud[0].number;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
