/*
题目内容：
    从键盘输入3个同学4门课的成绩，输出指定同学的成绩和平均分。
输入格式：
    输入3个同学4门课的成绩
输出格式：
    输出指定同学的成绩和平均分
输入样例：
89 78 80 76 88 78 75 90 99 92 100 89[回车]
1[回车]
输出样例：
89 78 80 76[回车]
80.75[回车]
*/
#include <stdio.h>

int main()
{
    int num;
    double sum = 0.00;
    int a[3][4] = {0};
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d",
        &a[0][0], &a[0][1], &a[0][2], &a[0][3], &a[1][0], &a[1][1], &a[1][2], &a[1][3], &a[2][0], &a[2][1], &a[2][2], &a[2][3]);
    scanf("%d", &num);

    sum = (double)a[num-1][0] + (double)a[num-1][1] + (double)a[num-1][2] + (double)a[num-1][3];
    printf("%d %d %d %d\n", a[num-1][0], a[num-1][1], a[num-1][2], a[num-1][3]);
    if ((double)sum/4 == (int)sum/4) {
    	printf("%d\n", (int)sum/4);
	} else {
		printf("%.2f\n", sum/4);
	}
	

    return 0;
}
