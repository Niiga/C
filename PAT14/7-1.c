/*
7-1 ���׻���Ӣ��Ӣ�磨15 �֣�
�����֪Ӣ�Ƴ��ȵ�Ӣ��foot��Ӣ��inch��ֵ����ô��Ӧ������(foot+inch/12)��0.3048��
���ڣ�����û������������������ô��ӦӢ�Ƴ��ȵ�Ӣ�ߺ�Ӣ���Ƕ����أ�������1Ӣ�ߵ���12Ӣ�硣

�����ʽ��
������һ���и���1������������λ�����ס�

�����ʽ��
��һ������������������ӦӢ�Ƴ��ȵ�Ӣ�ߺ�Ӣ�������ֵ���м��ÿո�ֿ���

����������
170
���������
5 6
*/
#include <stdio.h>

int main()
{
    int cm=0;
    scanf ("%d", &cm);
    int foot = cm/100.0/0.3048;
    int inch = (cm/100.0/0.3048-foot)*12.0;

    printf("%d %d", foot, inch);

    return 0;
}