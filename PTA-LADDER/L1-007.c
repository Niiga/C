/*
L1-007 念数字（10 分）
输入一个整数，输出每个数字对应的拼音。
当整数为负数时，先输出“fu”字。
十个数字对应的拼音如下：
0: ling
1: yi
2: er
3: san
4: si
5: wu
6: liu
7: qi
8: ba
9: jiu
输入格式：
输入在一行中给出一个整数，如： 1234 。
提示：整数包括负数、零和正数。
输出格式：
在一行中输出这个整数对应的拼音，每个数字的拼音之间用空格分开，行末没有最后的空格。
如 yi er san si。
输入样例：
-600
输出样例：
fu liu ling ling
*/
#include <stdio.h>

void print_int(int n);

int main()
{
    int num[100];
    char c[100];
    scanf("%s", c);
    int i=0, j;

    if (c[0] == '-') {
        printf("fu ");
        i++;
    }
    for (j=0; c[i]!='\0';i++,j++) {
        num[j] = (int)c[i] - '0';
    }
    for (i=0; i<j; i++) {
        print_int(num[i]);
        if (i<j-1){
            printf(" ");
        }
    }

    return 0;
}

void print_int(int n) {
    switch (n) {
        case 0:printf("ling");break;
        case 1:printf("yi");break;
        case 2:printf("er");break;
        case 3:printf("san");break;
        case 4:printf("si");break;
        case 5:printf("wu");break;
        case 6:printf("liu");break;
        case 7:printf("qi");break;
        case 8:printf("ba");break;
        case 9:printf("jiu");
    }
}