/*
1 ��Ҫ���ҵ���Ӧ�Ľڵ�
2 ��Ҫ��¼��ǰ�ڵ��ǰһ���ڵ�
3 ��������н����Ǳ�ɾ���Ľڵ��������м䣬���б�ɾ���Ľڵ��ǵ�һ���ڵ㡢���һ���ڵ㣻
  û������ڵ�������������Ҫ���ǡ�
*/
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head, *p1, *p2, *p;
    int i;
    head = 0;

    // ��ʼ������
    for (i=1; i<=5; i++)
    {
        p1 = (node *)malloc(sizeof(node));
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

    // ɾ������Ϊ2������ڵ�
    p1 = head;
    while (p1->data != 2)	// �ҳ�2�Ľ�㣬p1ָ��2 
    {
        p2 = p1;
        p1 = p1->next;
    }
    p2->next = p1->next;
    delete p1;      // ɾ��p1 

    // �����������
    p = head;
    printf("�����ϸ���������Ϊ��\n");
    while (p != 0)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
    return 0;
}
