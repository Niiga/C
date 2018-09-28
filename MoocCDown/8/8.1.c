#include <stdio.h>
#include <stdlib.h>

struct node{
    char str;
    struct node *next;
};

void judg(char n, struct node* p);
void P_str(int n, struct node* p);

int main()
{
    struct node *head, *p;
    head = (struct node *)malloc(sizeof(struct node));//带头结点 
    p = head;
    int i;
    char S[7] = {'a','b','c','d','c','b','a'}; 

    char n;
    scanf("%c", &n);
	
    for (i=0; i<7; i++) {
        p->next = (struct node *)malloc(sizeof(struct node));
        p = p->next;
        p->str = S[i];
    } 
    p->next = NULL;
	p = head;
	judg(n, p);	
		
    return 0;
}

void judg(char n, struct node* p)
{
	if (n>=48 && n<=54) {
        P_str((int)(n-48), p);
    } else if (n == 'a') {
        puts("6");
    } else if (n == 'b') {
        puts("5");
    } else if (n == 'c') {
        puts("4");
    } else if (n == 'd') {
        puts("3");
    } else {
        puts("N");
    }
		
}

void P_str(int n, struct node* p)
{
    int i=0;
    p = p->next;

    while (i != n) {
        p = p->next;
        i ++;
    }
    printf("%c\n", p->str);
}
