/*
简单阶乘计算（10 分）
本题要求实现一个计算非负整数阶乘的简单函数。

函数接口定义：
int Factorial( const int N );
其中N是用户传入的参数，其值不超过12。如果N是非负整数，则该函数必须返回N的阶乘，否则返回0。
*/
#include <stdio.h>

int Factorial( const int N );

int main()
{
    int N, NF;
	
    scanf("%d", &N);
    NF = Factorial(N);
    if (NF)  printf("%d! = %d\n", N, NF);
    else printf("Invalid input\n");

    return 0;
}

/* 你的代码将被嵌在这里 */
int Factorial( const int N )
{
  	int i;
	int sum=1;
	if (N == 0){
		return 1;
	}
    if (N<0 || N>12){
        sum = 0;
    } else {
    	for (i=1; i<=N; i++){
        sum *=i;
    	}
	}
    return sum;
}
