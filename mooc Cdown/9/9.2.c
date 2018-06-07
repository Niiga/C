/*
    请用标准设备文件的方式完成字符串的输入与反向显示。
	输入样例：
	abc[回车]
	输出样例：
	cba[回车]
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
    char ch;
    struct node *next;
}ARRAY;

int main()
{
	ARRAY *p;
    ARRAY *head;
	head = (ARRAY *)malloc(sizeof(ARRAY));
    p = head;

	// 输入
	int i=0, num;
    char ch = ' ';
    while (ch != '\n') {
    	ch = getchar();
        p->next = (ARRAY *)malloc(sizeof(ARRAY));
        p = p->next;
        p->ch = ch;
		i ++;
    }
    p->next = NULL;
    p = head; 
    
	// 赋值给数组
	char str[i], cpstr[i];
	num = i-1;
	i = 0;
	while (p->next != NULL) {
		str[i] = p->ch;
		i ++;
		p = p->next;
	}

	// 数组反向赋值

	for (i=num; i>=0; i--) {
		cpstr[num-i] = str[i];
	}
	

	// 输出到文件
	fputs(cpstr, stdout); 

    return 0;
}
