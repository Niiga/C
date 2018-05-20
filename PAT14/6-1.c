/*
6-1 简单输出整数（10 分）
本题要求实现一个函数，对给定的正整数N，打印从1到N的全部正整数。
函数接口定义：
void PrintN ( int N );
其中N是用户传入的参数。该函数必须将从1到N的全部正整数顺序打印出来，每个数字占1行。


*/

#include <stdio.h>

void PrintN ( int N );

int main ()
{
    int N;

    scanf("%d", &N);
    PrintN( N );

    return 0;
}

/* 你的代码将被嵌在这里 */
void PrintN ( int N ) {
    int i;
    for (i=1; i<=N; i++){
        printf("%d\n", i);
    }
}
