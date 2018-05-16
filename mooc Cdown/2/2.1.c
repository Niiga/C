#include <stdio.h>
#include <math.h>

int fact(int m, int n)
{
	int number = 0;
	if ( m%n == 0)
	{
		number = n;
	}
	else
	{
        number = fact(n,m%n);
	}
	
	return number;
}

int main(void)
{
	int m, n, i=1, x=1, num=1;
	scanf("%d,%d", &m, &n);
	if(m<0)
	{
		i=-1;
		m = pow(m,2);
		m = sqrt(m);
	}
	if(n<0)
	{
		x=-1;
		n = pow(n,2);
		n = sqrt(n);
	}
	if (m<n)
	{
		num = m;
		m = n;
		n = num;
	}
	i = i*x*fact(m,n);
	printf("%d", i);
	
	return 0;
}