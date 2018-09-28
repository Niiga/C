#include <stdio.h>

void Duck_num(int number, int n)
{
	while(n>=1)
	{
	number = number/2;
	printf("sell=%d,", number+1);
	n--;
	}
}

//¼ÆËã×ÜÊı
int Sum_num(int number, int n)
{
	if (n>0)
	{
		n--;
		number = Sum_num(((number+1)*2), n);
	}
	
	return number;
}

int main(void)
{
	int sum;
	int hamlet=7, number=2;
	sum = Sum_num(number, hamlet);
	printf("sum=%d\n", sum);
	Duck_num(sum, hamlet);
	printf("\n");
	
	return 0;
}