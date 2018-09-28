/*
输入样例：
12 34 56 43 7 89 81 11 33 90[回车]
输出样例：
7,11,12,33,34,43,56,81,89,90[回车]
*/
#include <stdio.h>

void fun1(int *num)
{
	int i, n;
	int number;
	for (i=0; i<=9; i++)
	{
		for (n=i; n<=9; n++)
		{
			if (num[i]>=num[n])
			{
				number = num[i];
				num[i] = num[n];
				num[n] = number;
			}
		}
	}
}

int main()
{
	int i;
	int a[10];
	int *array=a;
	scanf("%d %d %d %d %d %d %d %d %d %d",
		&a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7], &a[8], &a[9]);

	fun1(array);
	
	for (i=0; i<10; i++)
	{
		printf("%d", a[i]);
		if(i>=0 && i<=8)
		{
			printf(",");
		}
	}
}