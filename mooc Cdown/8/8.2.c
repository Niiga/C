/*
����ϲ���15�֣�
��Ŀ���ݣ�
    ʵ�������ɵ�������洢��������ĸ���ݵĺϲ��������ظ�����ֻ����һ����
    ���磺����{a, c ,f}, { b, e, g}�ϲ�����Ϊ{a, b, c , e , f , g}��
�����ʽ��
    ����������ĸ����
�����ʽ��
    �ϲ������ĸ����

��������1��
a b c[�س�]
d e f[�س�]
�������1��
a b c d e f[�س�]
��������2��
e f g[�س�]
e g m[�س�]
�������2��
e f g m[�س�]
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    char ch;
    struct node *next;
}ARRAY;

int main()
{   
    ARRAY *p, *p1;
    ARRAY *head, *head1;
	head = (ARRAY *)malloc(sizeof(ARRAY));
	head1 = (ARRAY *)malloc(sizeof(ARRAY));
    p = head;
    p1 = head1;
    
    // ���� p
    char ch = ' ';
    while (ch != '\n') {
    	ch = getchar();
    	if (ch == ' ') {
    		ch = getchar();
		}
        p->next = (ARRAY *)malloc(sizeof(ARRAY));
        p = p->next;
        p->ch = ch;
    }
    p->next = NULL;
    p = head; 
	// ���� p1 
	ch = ' ';
    while (ch != '\n') {
    	ch = getchar();
    	if (ch == ' ') {
    		ch = getchar();
		}
        p1->next = (ARRAY *)malloc(sizeof(ARRAY));
        p1 = p1->next;
        p1->ch = ch;
    }
    p1->next = NULL;
    p1 = head1; 

	// ��˳����� 
    p = p->next;
    p1 = p1->next;
    while (p->next != NULL || p1->next != NULL) {
    	if (p->ch < p1->ch) {
    		if (p->ch != '\n') {
				printf("%c", p->ch);
    			p = p->next;
			} else {
				p->ch = '{';
				if (p1->ch != '\n') {
					printf("%c", p1->ch);
    				p1 = p1->next;
				} else {
					continue;
				} 
			}
		} else if (p->ch > p1->ch) {
    		if (p1->ch != '\n') {
				printf("%c", p1->ch);
    			p1 = p1->next;
			} else {
				continue;
			}
		} else if (p->ch == p1->ch) {
			printf("%c", p->ch);
    		if (p1->ch != '\n') {
    			p1 = p1->next;
			} else {
				continue;
			}
			if (p->ch != '\n') {
    			p = p->next;
			} else {
				continue;
			}
		}
		if (p1->next == NULL) {
			printf("\n");
		} else {
			printf(" ");
		}
	}

    return 0;
}
