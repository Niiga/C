/*
wanglei 78  90  87  92
lihong  88  91  89  78
zhangli 84  76  83  75
liuming 88  90  71  83
AVERAGE

�����ʽ��
ѧ��������ÿ��ѧ����ƽ���֣����������
���ſγ�ƽ���֣����������
����ƽ����Ϊ�������������������ƽ����ΪС����������λ��
*/
#include <stdio.h>

double Ave(int num[4]){
    int a=0;
    a = num[0] + num[1] + num[2] + num[3];
    return (double)a/4;
}

void P_Ave(double x){
    if ((int)x == (double)x){
        printf("%d", (int)x);
    } else {
        printf("%.2f", (double)x);
    }
}

int main()
{   
    char *name[] = {"wanglei", "lihong", "zhangli", "liuming", "AVERAGE"};
    int num[4][4] = {78, 90, 87, 92, 88, 91, 89, 78, 84, 76, 83, 75, 88, 90, 71, 83};
    double s_ave[4];
    int i=0;

    for (i=0; i<4; i++){    // ���ÿ��ѧ����ƽ����
        printf("%s,", name[i]);
        P_Ave((double)Ave(num[i]));
        printf("\n");
    }
    printf("%s:", name[4]);
    for (i=0; i<4; i++){
        int n_ave[4] = {num[0][i], num[1][i], num[2][i], num[3][i]};
        s_ave[i] = Ave(n_ave);
    }
    for (i=0; i<4; i++){
        P_Ave(s_ave[i]);
        if (i<3){
            printf(",");
        }       
    }
    printf("\n");

    return 0;
}