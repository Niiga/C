/*
解析字符串（15分）
题目内容：
    输入一个字符串，要求将其中的字母‘n’理解为回车符号’\n’，
    模拟文件缓冲区读取的数据，并按替换后的数据流解析出其中包括的字符串。
    （即通过'n'分割两个字符串）
输入格式：
    一个字符串
输出格式：
    其中包括的字符串
输入样例：
abcnde[回车]
输出样例：
abc[回车]
de[回车]
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    char ch;
    struct node *next;
}ARRAY;

ARRAY *Assign(ARRAY *p);


int main()
{
    ARRAY *p;
    p = Assign(p);

    return 0;   
}

ARRAY *Assign(ARRAY *p) 
{
    ARRAY *p;
    ARRAY *head;
	head = (ARRAY *)malloc(sizeof(ARRAY));
    p = head;
    
    // 输入 p
    char ch = ' ';
    while (ch != '\n') {
    	ch = getchar();
    
        p->next = (ARRAY *)malloc(sizeof(ARRAY));
        p = p->next;
        p->ch = ch;
    }
    p->next = NULL;
    p = head;

    return p;
}
