/*
基本四则运算表达式基 （15分）
题目内容：
请结合C语言语法知识以及对编译过程的理解，完成一个仅含一个运算符的基本四则运算表达式字符串的计算。
输入格式:
基本四则运算表达式字符串
输出格式：
运算结果
输入样例：
1+2
输出样例：
3
*/
#include <stdio.h>

int main()
{
    float i, j;
    char c;
    float sum=0;
    scanf ("%f%c%f", &i, &c, &j);
    switch (c) {
        case '+':
            sum = i+j;
            break;
        case '-':
            sum = i-j;
            break;
        case '*':
            sum = i*j;
            break;
        case '/':
            sum = i/j;
            break;
    }
    if (sum == (int)sum) {
        printf ("%d", (int)sum);
    } else {
        printf ("%.2f", sum);
    }

    return 0;
}
