/*
链表合并（15分）
题目内容：
    实现两个由单项链表存储的有序字母数据的合并，如有重复的则只保留一个。
    例如：给定{a, c ,f}, { b, e, g}合并后结果为{a, b, c , e , f , g}。
输入格式：
    两个有序字母数据
输出格式：
    合并后的字母数据

输入样例1：
a b c[回车]
d e f[回车]
输出样例1：
a b c d e f[回车]
输入样例2：
e f g[回车]
e g m[回车]
输出样例2：
e f g m[回车]
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
    
    // 输入 p
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
	// 输入 p1 
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

	// 按顺序输出 
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
