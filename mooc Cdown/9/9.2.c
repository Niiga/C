/*
    ���ñ�׼�豸�ļ��ķ�ʽ����ַ����������뷴����ʾ��
	����������
	abc[�س�]
	���������
	cba[�س�]
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

	// ����
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
    
	// ��ֵ������
	char str[i], cpstr[i];
	num = i-1;
	i = 0;
	while (p->next != NULL) {
		str[i] = p->ch;
		i ++;
		p = p->next;
	}

	// ���鷴��ֵ

	for (i=num; i>=0; i--) {
		cpstr[num-i] = str[i];
	}
	

	// ������ļ�
	fputs(cpstr, stdout); 

    return 0;
}
