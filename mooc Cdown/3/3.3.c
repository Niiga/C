/*
����������
2354[�س�]
���������
14[�س�]
*/
#include <stdio.h>

int main()
{
    int n=0;
    int sum=0;
    scanf("%d", &n);
    while (n>10){
        sum += n%10;
        n /= 10;
    }
    sum += n;
    printf("%d\n", sum);
}
