/*
�ݹ�ķ������㺬��������������������ʽ�ַ�����ֵ�� ��15�֣�
��Ŀ���ݣ�
������һ��Ļ����ϣ����õݹ�ķ��������㺬��������������������ʽ�ַ�����ֵ(�����ţ���Ҫ�������ȼ�)
�����ʽ:
��������������������ʽ�ַ���
�����ʽ��
������
����������
3*2+3
���������
9
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    char ch;
    int n;
    struct node *next;
}ARRAY;

int main()
{
    ARRAY *p, *head;
    head = (ARRAY *)malloc(sizeof(ARRAY));
    p = head;
    
    char ch;
    int n, i, j;
    int sn;
    i = 0;
// ����ʽ����������ʽ 
    p->next = (ARRAY *)malloc(sizeof(ARRAY));
    p = p->next;
    scanf("%d", &n);
    p->n = n;
    while (ch != '\n') {
    	ch = getchar();
        p->next = (ARRAY *)malloc(sizeof(ARRAY));
        p = p->next;
        p->ch = ch;
        if (ch != '\n') {
        	scanf("%d", &n);
        	p->n = n;
		}
        i++;
    }
    p->next = NULL;
    p = head;

// ���ֺ��ַ��ֱ�ֵ������ 
    sn = i;
	int num[sn];
    char c[sn-1];
    i = 0;
    j = 0;
    p = p->next;
    num[i] = p->n;
    p = p->next;
    while (p->next != NULL) {
        c[j] = p->ch;
		num[i+1] = p->n;
		j ++;
		i ++; 
    	p = p->next;
	}

// �˳����ȣ�����ת���ɼӷ�
	float n1[sn];
    j=0;
    n1[0] = num[0];
    for (i=0; c[i]!='\0'; i++) {
        if (c[i] == '*') {
            n1[j] *= (float)num[i+1];
        } else if (c[i] == '/') {
            if (num[i+1] == 0) {
            	printf("��������Ϊ0"); 
				return;
			}
			n1[j] /= (float)num[i+1];
        } else if (c[i] == '-') {
            j ++;
            n1[j] = (float)num[i+1]*-1.0;
        } else if (c[i] == '+') {
            j ++;
            n1[j] = (float)num[i+1];
        }
    }
    
// ͳ���ܺ� 
    float sum=0.0;
    for (i=0; i<=j; i++) {
        sum += n1[i];
    }
    if (sum == (int)sum) {
        printf("%d", (int)sum);
    } else {
        printf("%.2f", sum);
    }

    return 0;
}
