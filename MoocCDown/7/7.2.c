/*
��Ŀ���ݣ�
    ����ṹ�壬
    �洢ѧ��ѧ�ź����ſγɼ���ƽ���֣�
    ��ʼ���ɼ�����{{1,90,80,70}��{2,85,75,95}��{3,88,84,65}}��
    ����ѧ�ţ�
    ���ƽ���֣�
    ����max��
    �����߷�id��
�����ʽ��
    ����ѧ�Ż�max
�����ʽ��
    ���ƽ���ֻ���߷�id
��������1��
    1[�س�]
�������1��
    80[�س�]
��������2��
    max[�س�]
�������2��
    2[�س�]
��������3��
    4[�س�]
�������3��
    0[�س�]
*/
#include <stdio.h>
#include <malloc.h>

struct stu {
    int x;      // ѧ��
    int f[3];   // �ɼ�
    int ave;    // ƽ����
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
    int max = xs[0].f[0];   // ��ʼ�����ֵ
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
