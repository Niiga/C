// 1003继续3n+1猜想.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

struct node {
	int data;
	node *next;
};

void List(int* b, int n, node *p[100]) {
	// 初始化链表数组，将各个数每一步的数字组成链表
	node *head[100];
	int a[100];
	for (int i = 0; i < n; i++) {
		head[i] = new node;
		p[i] = head[i]; // 头指针
		a[i] = b[i];

		node *s = new node;
		s->data = a[i];
		p[i]->next = s; // 第一个数
		p[i] = s;

		while (a[i] != 1) { // 判断条件为是否完成猜想
			if (a[i] % 2 == 0) {
				a[i] /= 2;
				node *s = new node;
				s->data = a[i];
				p[i]->next = s;
				p[i] = s;
			}
			else {
				a[i] = (a[i] * 3 + 1) / 2;
				node *s = new node;
				s->data = a[i];
				p[i]->next = s;
				p[i] = s;
			}
			p[i]->next = NULL;
		}
		p[i] = head[i];
	}
}

int Judge(int n, node *p) {
	// 判断是否是关键数
	node *head;
	head = new node;
	head = p;
	p = p->next;
	while (p != NULL) {
		if (n == p->data) {
			p = head;
			return -1;
		}
		p = p->next;
	}
	p = head;
	return n;
}

void Sort(int *a, int n) {
	int m[100];
	int max;
	for (int i = 0; i < n; i++) {
		m[i] = a[i];
	}
	for (int i = 0; i < n-1; i++) {
		max = i;
		for (int j = i+1; j < n; j++) {
			if (m[max] < m[j]) {
				max = j;
			}
			if (m[i] != m[max]) {
				int num = m[i];
				m[i] = m[max];
				m[max] = num;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		a[i] = m[i];
	}
}

int main()
{
	int n;
	int i;
	//cout << "准备输入几个数？";
	cin >> n;
	node *pr[100];

	int a[100] = { -1 };
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	List(a, n, pr); // 找出关键链表

	int num = -2;
	for (i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j != i) {
				num = Judge(a[i], pr[j]);
				if (num == -1) {
					a[i] = num;
					break;
				}
			}
		}
	}

	Sort(a, n);
	for (int i = 0; i < n; i++) {
		if (a[i] != -1) {
			cout << a[i];
			if (a[i + 1] != -1) {
				cout << " ";
			}
		}
	}
	return 0;
}
