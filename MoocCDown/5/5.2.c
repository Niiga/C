/*
��Ŀ���ݣ�
    �Ӽ�������3��ͬѧ4�ſεĳɼ������䰴ƽ���ִӸߵ������������
�����ʽ��
    ����3��ͬѧ4�ſεĳɼ�
�����ʽ��
    ��ƽ���ִӸߵ����������
����������
89 78 80 76 88 78 75 90 99 92 100 89[�س�]
���������
99,92,100,89[�س�]
88,78,75,90[�س�]
89,78,80,76[�س�]
*/

#include <stdio.h>

void Print_num(int a[3][4], int num)
{
    printf("%d,%d,%d,%d\n", a[num][0], a[num][1], a[num][2], a[num][3]);
}

int main()
{
    int i;
    double sum[3] = {0.00}, soc[3] = {0.00};
    int a[3][4] = {0};
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d",
        &a[0][0], &a[0][1], &a[0][2], &a[0][3], &a[1][0], &a[1][1], &a[1][2], &a[1][3], &a[2][0], &a[2][1], &a[2][2], &a[2][3]);
    for (i=0; i<3; i++) {
        sum[i] = (double)a[i][0] + (double)a[i][1] + (double)a[i][2] + (double)a[i][3];
        soc[i] = sum[i]/4;
    }
    if (soc[0] >= soc[1]){
        if (soc[0] >= soc[2]){
            Print_num(a, 0);
            if (soc[1] >= soc[2]){
                Print_num(a, 1);
                Print_num(a, 2);
            } else {
                Print_num(a, 2);
                Print_num(a, 1);
            }
        } else {
            Print_num(a, 2);
            Print_num(a, 0);
            Print_num(a, 1);
        }
    } else if (soc[1] >= soc[2]) {
        Print_num(a, 1);
        if (soc[0] >= soc[2]) {
            Print_num(a, 0);
            Print_num(a, 2);
        } else {
            Print_num(a, 2);
            Print_num(a, 0);
        }
    } else {
        Print_num(a, 2);
        Print_num(a, 1);
        Print_num(a, 0);
    }

    return 0;
}
