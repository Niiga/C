/*
输入样例：
5[回车]
输出样例：
25[回车]
*/
#include <stdio.h>

int fact (int n)
{
	int sum = 0;
	if ( n<=0 )
	{
		printf("[ERROR]n<=0.\n");
	}
	else if ( n==1 )
	{
		sum = 1;
	}
	else
	{
		sum = 2*n - 1 + fact(n-1);
	}
	
	return sum;
}

int main()
{
	int n;	
	scanf("%d", &n);

	n = fact(n);
	printf("%d\n", n);
	
	return 0;
}