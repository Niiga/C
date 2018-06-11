#include <stdio.h>

int even( int n );

int main()
{    
    int n;

    scanf("%d", &n);
    if (even(n))
        printf("%d is even.\n", n);
    else
        printf("%d is odd.\n", n);

    return 0;
}

/* 你的代码将被嵌在这里 */
int even( int n )
{
    if (n < 0)
        n*=-1;
    if (n%2 == 0)
        return 1;
    else
        return 0;
}