/*
输入格式：
    第一行：10个整数，空格隔开

    第二行：要查找的数
输出格式：

    找到的数orNo

输入样例1：
11 22 43 56 78 90 76 4 2 10[回车]
43[回车]
输出样例1：
43[回车]
输入样例2：
1 8 3 4 5 6 2 1 7 9[回车]
10[回车]
输出样例2：
No[回车]
*/
#include <stdio.h>

int Search(int *a, int Number)
{
    int i=0;
    for (i=0; i<10; i++){
        if (a[i] == Number)
        {
            printf("%d\n", Number);
            return 0;
        }
    }
    printf("No\n");
}

int main()
{
    int a[10]={0};
    int *num = a;
    int Number = 0;
    scanf("%d %d %d %d %d %d %d %d %d %d",
	    &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7], &a[8], &a[9]);
    scanf("%d", &Number);

    Search(num, Number);
    return 0;
}