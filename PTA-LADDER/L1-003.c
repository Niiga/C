/*
L1-003 个位数统计（15 分）
给定一个k位整数N = d~k-1~*10^k-1^ + ... + d~1~*10^1^ + d~0~ (0<=d~i~<=9, i=0,...,k-1, d~k-1~>0)，请编写程序统计每种不同的个位数字出现的次数。例如：给定N = 100311，则有2个0，3个1，和1个3。

输入格式：

每个输入包含1个测试用例，即一个不超过1000位的正整数N。

输出格式：

对N中每一种不同的个位数字，以D:M的格式在一行中输出该位数字D及其在N中出现的次数M。要求按D的升序输出。

输入样例：

100311
输出样例：

0:2
1:3
3:1
*/
#include <stdio.h>

void print_int(int *num);


int main()
{
    char c[1000];
    scanf("%s", c);

    int a[1000];
    int i, n;
    int num[10] = {0};
    for (i=0; c[i]!='\0'; i++) {
        a[i] = (int)c[i] - '0';
    }
    n = i;
    for (i=0; i<n; i++) {
        switch(a[i]) {
            case 0: num[0]++;continue;
            case 1: num[1]++;continue;
            case 2: num[2]++;continue;
            case 3: num[3]++;continue;
            case 4: num[4]++;continue;
            case 5: num[5]++;continue;
            case 6: num[6]++;continue;
            case 7: num[7]++;continue;
            case 8: num[8]++;continue;
            case 9: num[9]++;
        }
    }

    print_int(&num[0]);
    return 0;
}

void print_int(int *num) {
    int i;
    for (i=0; i<10; i++) {
        if (num[i] > 0) {
            printf("%d:%d\n", i, num[i]);
        }
        
    }
}
