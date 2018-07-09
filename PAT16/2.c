/*
输入格式:
输入在一行给出正整数N。
输出格式:
在一行中输出不超过N的满足猜想的素数对的个数。
输入样例:
20
输出样例:
4
*/
#include <stdio.h>
#include <math.h>

int Judge(int n);

int main()
{
    int i, n;
    scanf("%d", &n);
    if (n<2) {
        return 0;
    }

    int sum = 0;
    for (i=2; i<=n; i++) {
        if (i+2 > n) {
            break;
        }
        if ((Judge(i) == 1) && (Judge(i+2) == 1)) {
            sum++;
        }
    }
	
	printf("%d", sum);
    return 0;
}

int Judge(int n) {
    int i;
    if (n == 1) return 1;
    if (n%2 == 0) return 0;
    for (i=2; i<=sqrt(n); i++) {
        if(n%i==0) {
            return 0;
        }
	}
    return 1;
}
