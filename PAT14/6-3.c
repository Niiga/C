/*
6-3 简单求和（10 分）
本题要求实现一个函数，求给定的N个整数的和。

函数接口定义：
int Sum ( int List[], int N );
其中给定整数存放在数组List[]中，正整数N是数组元素个数。该函数须返回N个List[]元素的和。
*/
#include <stdio.h>

#define MAXN 10

int Sum ( int List[], int N );

int main ()
{
    int List[MAXN], N, i;

    scanf("%d", &N);
    for ( i=0; i<N; i++ )
        scanf("%d", &List[i]);
    printf("%d\n", Sum(List, N));

    return 0;
}

/* 你的代码将被嵌在这里 */
int Sum ( int List[], int N ) {
    int sum=0;
    for ( N-=1;N>=0; N--){
        sum += List[N];
    }
    return sum;
}