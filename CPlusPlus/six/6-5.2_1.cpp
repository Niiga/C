// 6-5.2_1.cpp 
// void 类型指针的使用

#include <iostream>
using namespace std;

int main()
{
// !void voidObject; 错，不能声明void类型的变量
    void *pv; // 对，可以声明void类型的指针
    int i = 5;
    pv = &i;
    
    int *pint = static_cast<int*>(pv); // void指针转换为int指针
    cout << "*pint = " << *pint << endl;

    return 0;
}
