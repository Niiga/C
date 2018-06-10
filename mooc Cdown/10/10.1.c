/*
基本四则运算表达式基 （15分）
题目内容：
请结合C语言语法知识以及对编译过程的理解，完成一个仅含一个运算符的基本四则运算表达式字符串的计算。
输入格式:
基本四则运算表达式字符串
输出格式：
运算结果
输入样例：
1+2
输出样例：
3
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    char ch;
    int n;
    struct node *next;
}ARRAY;

float arith(int sn, int *n1, char *c1);

int main()
{
    ARRAY *p, *head;
    head = (ARRAY *)malloc(sizeof(ARRAY));
    p = head;
    
    char ch;
    int n, i, j;
    int sn;
    i = 0;

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

    sn = i;
	int num[i];
    char c[i-1];
    i = 0;
    j = 0;
    p = p->next;
    num[i] = p->n;
//	printf("%d", num[i]);
    p = p->next;
    while (p->next != NULL) {
        c[j++] = p->ch;
//		printf("%c", c[j-1]);
		num[++i] = p->n;
//		printf("%d", num[i]);
    	p = p->next;
	}
	
	int sum;
	sum = arith(sn, num, c); 

    return 0;
}

float arith(int sn, int n[sn], char c[sn-1]) 
{
    int sum=0;
    int n1[sn];
    char c1[sn];


    int i=0, j=0, k=0, l=0;
    n1[0] = n[0];
    for (i=0; i<sn; i ++) {
        while (c[i] == '*' || c[i] == '/' ) {
            if (c[i] == '*') {
                // 当c[i] 为 乘时
                j = i+1;
                n1[k] *= n[j];
                k ++;
                j ++;
            } else if (c[i] == '/') {
                // 当c[i] 为 除时
                n1[k] = n[i] / n[i+1];
                k ++;
                j ++;
            }
            i ++;
        }
        if (c[i] == '+' || c[i] == '-') {
            c1[l] = c[i];
            n1[k] = n[i];
            l ++;
            k ++;
        }
    }

    for (i=0; i<l; i++) {
        printf("%d", n1[i]);
        if (i < l-1) {
            printf("%c", c1[i]);
        }
    }

    return sum;
}
