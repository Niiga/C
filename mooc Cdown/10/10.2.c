/*
递归的方法计算含多个运算符的四则运算表达式字符串的值递 （15分）
题目内容：
请在上一题的基础上，采用递归的方法，计算含多个运算符的四则运算表达式字符串的值(无括号，但要考虑优先级)
输入格式:
多个运算符的四则运算表达式字符串
输出格式：
运算结果
输入样例：
3*2+3
输出样例：
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
// 链表方式读入所输算式 
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

// 数字和字符分别赋值到数组 
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

// 乘除优先，减法转换成加法
	float n1[sn];
    j=0;
    n1[0] = num[0];
    for (i=0; c[i]!='\0'; i++) {
        if (c[i] == '*') {
            n1[j] *= (float)num[i+1];
        } else if (c[i] == '/') {
            if (num[i+1] == 0) {
            	printf("除数不得为0"); 
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
    
// 统计总和 
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
