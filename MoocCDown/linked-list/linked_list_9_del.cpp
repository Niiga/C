/*
1 需要先找到对应的节点
2 需要记录当前节点的前一个节点
3 这个例子中仅考虑被删除的节点在链表中间，还有被删除的节点是第一个节点、最后一个节点；
  没有这个节点的特殊情况，需要考虑。
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

    // 初始化链表
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

    // 删除数据为2的链表节点
    p1 = head;
    while (p1->data != 2)	// 找出2的结点，p1指向2 
    {
        p2 = p1;
        p1 = p1->next;
    }
    p2->next = p1->next;
    delete p1;      // 删除p1 

    // 输出链表数据
    p = head;
    printf("链表上个结点的数据为：\n");
    while (p != 0)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
    return 0;
}
