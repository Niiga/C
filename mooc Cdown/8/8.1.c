/*
��Ŀ���ݣ�
    ʹ�õ�������洢һ����ĸ{a, b, c, d, c, b , a}
    ������������ĸ��������ĸ������һ�γ��ֵ����
    Խ�������N��
�����ʽ��
    ��Ż���ĸ
�����ʽ��
    ��ĸ�����
��������1��
2[�س�]
�������1��
c[�س�]
��������2��
c[�س�]
�������2��
4[�س�]
��������3��
8[�س�]
�������3��
N[�س�]
*/
#include <stdio.h>
#include <stdlib.h>

struct node{
    char str;
    struct node *next;
};

void judg(char n);
void P_data(int i);
void P_num(char n);
struct node *Initialize(void);

int main()
{
    char n;
    scanf("%c", &n);
	
    
	
    return 0;
}

struct *Initialize()
{
    char S[7] = {"abcdcba"};
    struct node *p1, *p2, *head, *p;
    int i;

    for (i=0; S[i] != '\0'; i++) {
        p1 = (struct node *)malloc(sizeof(struct node));
        (* p1).str = S[i];
        if (head == 0) {
        	head = p1;
        	p2 = p1;
		} else {
			p2->next = p1;
        	p2 = p1;
		}
    } 
    p2->next = 0;
	p = head;
    return p;
}

void judg(char n)
{
    if (n>=48 && n<=58) {
        P_data((int)n-48);
    } else if (n>=65 && n<=90) {
        P_num(n);
    } else if (n>=97 && n<=122) {
        P_num(n);
    } else {
        printf("N\n");
    }
}

char P_data(int i)
{
	struct node *p1, *p2;

	
}

void P_num(char n)
{
	
}
