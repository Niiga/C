/*
�����ʽ��
    ��һ�У�10���������ո����

    �ڶ��У�Ҫ���ҵ���
�����ʽ��

    �ҵ�����orNo

��������1��
11 22 43 56 78 90 76 4 2 10[�س�]
43[�س�]
�������1��
43[�س�]
��������2��
1 8 3 4 5 6 2 1 7 9[�س�]
10[�س�]
�������2��
No[�س�]
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