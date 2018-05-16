/*
输入样例：
2,3,1,5,6,76,89,31,90[回车]
7[回车]
输出样例：
1,2,3,5,6,7,31,76,89,90[回车]
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
	int num[10];
	int *array=num;
	scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d",
		&num[0], &num[1], &num[2], &num[3], &num[4], &num[5], &num[6], &num[7], &num[8]);
	scanf("%d", &num[9]);
	
	fun1(array);
	
	for (i=0; i<10; i++)
	{
		printf("%d", num[i]);
		if(i>=0 && i<=8)
		{
			printf(",");
		}
	}
}