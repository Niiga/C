#include "stdio.h"
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void main()
{
    struct node *head, *p1, *p2;
    int i;
    head = 0;

    // ��ʼ������
    for (i=1; i<=5; i++) 
    {
        p1 = (struct node *)malloc(sizeof(struct node));
        (* p1).data = i;
        if (head == 0)
        {
            head = p1;
            p2 = p1;
        }
        else
        {
            p2->next = p1;
            p2 = p1;
        }
    }
    p2->next = 0;

    // �����������
    struct node *p;
    p = head;
    printf("�����ϸ���������Ϊ��\n");
    while(p != 0)
    {
        printf("%d ", p->data);
        p=p->next;
    }
    printf("\n");
}
