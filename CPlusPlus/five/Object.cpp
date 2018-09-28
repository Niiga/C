// Object.cpp: 定义控制台应用程序的入口点。
// 对象的生存期
//   静态生存期(static)：生存期与程序的运行期相同。
//   动态生存期：开始于程序执行到声明点时，
//       结束于命名该标识符的作用域结束处。

#include "stdafx.h"
#include <iostream>
using namespace std;

int i = 1; // i 为全局变量，具有静态生存期

void other() {
	static int a = 2;
	static int b;
	// a,b 为静态局部变量，具有全局寿命，局部可见。
	// 只第一次进入函数时被初始化。
	int c = 10; 
	// c为局部变量，具有动态生存期
	// 每次进入函数都初始化
	a += 2;
	i += 32;
	c += 5;
	cout << "---OTHER---" << endl;
	cout << "i: " << i << "  a: " << a << "  b: " << b << "  c: " << c 
		<< endl;
	
	b = a;
}

int main()
{
	static int a; // 静态局部变量，有全局寿命，局部可见
	int b = -10;
	int c = 0; // b,c 为局部变量，具有动态生存期

	cout << "---MAIN---" << endl;
	cout << "i: " << i << "  a: " << a << "  b: " << b << "  c: " << c
		<< endl;
	// i:1  a:0  b:-10  c:0
	c += 8;
	other();
	// i:33  a:4  b:0  c:15
	cout << "---MAIN---" << endl;
	cout << "i: " << i << "  a: " << a << "  b: " << b << "  c: " << c
		<< endl;
	// i:33  a:0 b:-10 c: 8
	// a 同一个括号里的局部优先
	i += 10;
	other();
	// i:75  a:6  b:4  c:15

    return 0;
}