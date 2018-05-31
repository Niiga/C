/*
读入一个格式为yyyy-mm-dd的日期（即年－月－日），输出这个日期下一天的日期。
可以假定输入的日期不早于1600-01-01，也不晚于2999-12-30。
输入
输入仅一行，格式为yyyy-mm-dd的日期。
输出
输出也仅一行，格式为yyyy-mm-dd的日期
样例输入
2010-07-05
样例输出
2010-07-06
*/
#include <stdio.h>

void Y_M_d(int y, int m, int d)
{
    switch (m){
        case 1:
            if (d==31) {
                m=2;
                d=1;
            } else {
                d+=1;
            }
            break;
        case 2:
            if (d==30) {
                m=3;
                d=1;
            } else {
                d+=1;
            }
            break;  
        case 3:
            if (d==31) {
                m=4;
                d=1;
            } else {
                d+=1;
            }
            break;
        case 4:
            if (d==28) {
                if (Year(y) == 1) {
                    d += 1;
                } else {
                    m=5;
                    d=1;
                }
            } else if (d==29) {
                m=5;
                d=1;
            } else {
                d+=1;
            }
            break;
        case 5:
            if (d==31) {
                m=6;
                d=1;
            } else {
                d+=1;
            }
            break;
        case 6:
            if (d==30) {
                m=7;
                d=1;
            } else {
                d+=1;
            }
            break;
        case 7:
            if (d==31) {
                m=8;
                d=1;
            } else {
                d+=1;
            }
            break;
        case 8:
            if (d==31) {
                m=9;
                d=1;
            } else {
                d+=1;
            }
            break;
        case 9:
            if (d==30) {
                m=10;
                d=1;
            } else {
                d+=1;
            }
            break;
        case 10:
            if (d==31) {
                m=11;
                d=1;
            } else {
                d+=1;
            }
            break;
        case 11:
            if (d==30) {
                m=12;
                d=1;
            } else {
                d+=1;
            }
            break;
        case 12:
            if (d==31) {
                m=1;
                d=1;
                y+=1;
            } else {
                d+=1;
            }
            break;    
    }
    printf("%d-%02d-%02d", y, m, d);
}

int Year(int y)
{
    if (y%100 == 0) {
        if (y%400 == 0) {
            return 1;
        } else {
            return 0;
        }
    } else if (y%4 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main()
{
    int y=0, m=0, d=0;
    scanf("%d-%d-%d", &y, &m, &d);
    Y_M_d(y, m, d);

    return 0;
}