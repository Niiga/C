/*
输入样例：
2354[回车]
输出样例：
14[回车]
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
