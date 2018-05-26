/*
题目内容：
    使用单项链表存储一组字母{a, b, c, d, c, b , a}
    输入序号输出字母，输入字母输出最后一次出现的序号
    越界则输出N。
输入格式：
    序号或字母
输出格式：
    字母或序号
输入样例1：
2[回车]
输出样例1：
c[回车]
输入样例2：
c[回车]
输出样例2：
4[回车]
输入样例3：
8[回车]
输出样例3：
N[回车]
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
