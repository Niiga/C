/*
输入样例1：
This is his book[回车]
is[回车]
输出样例1：
3[回车]
输入样例2：
This is my book[回车]
at[回车]
输出样例2：
No[回车]
*/
#include <stdio.h>
#include <malloc.h>

int main()
{
    char *s, *t;
    s = (char *)malloc(1024); 
    t = (char *)malloc(1024); 
    gets(s);    // 获得一个包含空格的字符串输入，长字符
    gets(t);    // 获得短字符

    free(s);
    free(t);
    return 0;
}
