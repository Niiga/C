/*
输入样例：
22[回车]
输出样例：
22,11,34,17,52,26,13,40,20,10,5,16,8,4,2,1[回车]
step=16[回车]
*/
#include <stdio.h>

int even(int n)
{
    printf("%d", n);
    return n/2;
}

int odd(int n)
{
    printf("%d", n);
    return 3*n+1;
}

int main()
{
    int n=0;
    int i=1;
    scanf("%d", &n);
    if (n == 1) {
        i ++;
        printf ("%d", n);
        printf ("\n%d", i);
    }
    while (n > 1) {
        if ( n%2 == 0) {
            n = even(n);
        }else if ( n%2 == 1) {
            n = odd(n);
        }
        printf(",");
        i++;
    }
    printf("%d\n", n);
    printf("step=%d\n", i);
    return 0;
}