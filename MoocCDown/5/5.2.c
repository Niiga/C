/*
题目内容：
    从键盘输入3个同学4门课的成绩，将其按平均分从高到低排序输出。
输入格式：
    输入3个同学4门课的成绩
输出格式：
    按平均分从高到低排序输出
输入样例：
89 78 80 76 88 78 75 90 99 92 100 89[回车]
输出样例：
99,92,100,89[回车]
88,78,75,90[回车]
89,78,80,76[回车]
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
