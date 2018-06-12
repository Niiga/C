/*
数组元素循环右移问题（20 分）
输入样例:
6 2
1 2 3 4 5 6
输出样例:
5 6 1 2 3 4
*/
#include <stdio.h>

void move(int *a, int l);

int main()
{
	int l, n, i; 
	scanf("%d %d", &l, &n);
	
	int a[l];
	for (i=0; i<l; i++) 
		scanf("%d", &a[i]);
    for (i=0; i<n; i++)
        move(a, l);

	for (i=0; i<l; i++) {
		printf ("%d", a[i]);
		if (i<l-1)
			printf(" ");
	}

    return 0;
}

void move(int *a, int l)
{
    int i, n;
    n = a[l-1];
    for (i=l-1; i>0; i--)
        a[i] = a[i-1];
    a[0] = n;
}
