/*
题目内容：
    定义结构体，
    存储学生学号和三门课成绩及平均分，
    初始化成绩如下{{1,90,80,70}，{2,85,75,95}，{3,88,84,65}}，
    输入学号，
    输出平均分，
    输入max，
    输出最高分id。
输入格式：
    输入学号或max
输出格式：
    输出平均分或最高分id
输入样例1：
    1[回车]
输出样例1：
    80[回车]
输入样例2：
    max[回车]
输出样例2：
    2[回车]
输入样例3：
    4[回车]
输出样例3：
    0[回车]
*/
#include <stdio.h>
#include <malloc.h>

struct stu {
    int x;      // 学号
    int f[3];   // 成绩
    int ave;    // 平均分
};

struct stu xs[3] = {
    {1, 90, 80, 70},
    {2, 85, 75, 95},
    {3, 88, 84, 65}
};

void P_ave(int x);
void P_max(); 
float save(int i);

int main()
{
    char s;
    scanf("%c", &s);
    if (s>48 && s<=51) {
        P_ave((int)s-48);
    } else if (s>=65 && s<=90) {
        P_max();
    } else if (s>=97 && s<=122) {
        P_max();
    } else {
        printf("0");
    }
    printf("\n");
    
    return 0;
}

void P_ave(int x){
    float ave;
    ave = save(x-1);
    
    if (ave == (int)ave){
        printf("%d", (int)ave);
    } else {
        printf("%.2f", (float)ave);
    }
}

void P_max(){
    int i, j;
    int max = xs[0].f[0];   // 初始化最大值
    for (i=0; i<3; i++){
        for (j=0; j<3; j++){
            if(xs[i].f[j] >= max ){
                max = xs[i].f[j];
            }
        }
    }
    for (i=0; i<3; i++){
        for (j=1; j<=3; j++) {
            if (xs[i].f[j] == max){
                printf("%d", i+1);
            }
        }
    }   
}

float save(int i) {
    float a;
    a = (xs[i].f[0] + xs[i].f[1] + xs[i].f[2])/3;
    return a;
}
