/*
L1-011 A-B��20 �֣�
����Ҫ�������A-B��
�����鷳���ǣ�A��B�����ַ��� ���� �����ַ���A�а��ַ���B���������ַ�ȫɾ����ʣ�µ��ַ���ɵľ����ַ���A-B��
�����ʽ��
������2�����Ⱥ�����ַ���A��B��
���ַ����ĳ��ȶ�������10^4^�����ұ�֤ÿ���ַ��������ɿɼ���ASCII��Ϳհ��ַ���ɣ�����Ի��з�������

�����ʽ��
��һ���д�ӡ��A-B�Ľ���ַ�����

����������
I love GPLT!  It's a fun game!
aeiou
���������
I lv GPLT!  It's  fn gm!
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 10001

int main()
{
    char c[LEN];
    char n[LEN];
    int a[128] = {0};
    gets(c);
    gets(n);
    int i;
    for (i=0; i<strlen(n); i++) {
        a[(int)n[i]]++;
    }
    for (i=0; i<strlen(c); i++) {
        if ((a[(int)c[i]]) == 0) {
            printf("%c", c[i]);
        }      
    }

    return 0;
}
