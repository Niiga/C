// 6-5.2.cpp 
// 指针的初始化和赋值

#include <iostream>
using namespace std;
// 指针变量的赋值运算
//  整数中只有 0可以赋值给指针，表示空指针
//  C++11 使用nullptr关键字，是表达更准确，类型安全的空指针


int main()
{
    int i;
    int *ptr = &i; // 指针的初始化
    // 取 i的地址赋给ptr
    i = 10;
    cout.width(7);
    cout << "i = "  << i << endl; // 输出int型数的值
    cout.width(7);
    cout << "*ptr = " << *ptr << endl; // 输出int型指针所指地址的内容
    cout.width(7);
    cout << "ptr = " << ptr << endl; // 输出int *型变量的值
    cout.width(7);
    cout << "&i = " << &i << endl; // 输出 i的地址

    return 0;
}
