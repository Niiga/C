#include <stdio.h>

int fun1(int a,int b);
int fun2(int a,int b);

int main()
{
	int a,b;
	int Max_num, Min_num;
	scanf("%d,%d", &a, &b);
	
	Max_num = fun1(a,b);
	Min_num = fun2(a,b);
	
	printf("最大公约数：%d\n", Max_num);
	printf("最小公倍数：%d\n", Min_num);
	return 0;
}

int fun1(int a,int b)
{
	int i=1;
	int number;
	while (i<=a && i<=b)
	{
		if( a%i==0 && b%i==0)
		{
			number = i;
		}
		i++;
	}
	return number;
}

int fun2(int a, int b)
{
	int num=0, i=0;
	i = fun1(a,b);
	num = a*b/i;
    return num;
}
/*
int fun2(int a,int b)
{
	int i=1;
	int number;
	while (i<=a && i<=b)
	{
		if( a%i==0 && b%i==0)
		{
			number = i;
		}
		i++;
	}
	i = a*b/number;
	return i;
}
*/
