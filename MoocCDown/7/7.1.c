/*
��Ŀ���ݣ�
    �ȶ���һ����ĸ���ܶ��ձ�
����Ҫ���ܵ�һ������������ܳ���
������ݼ��ܱ��еĶ�Ӧ��ϵ��
���Ժܼ򵥵ؽ���������ּ��������
���ڱ���δ���ֵ��ַ��򲻼��ܡ�
��ĸ���ܶ��ձ�
���� a b c d e i k ; w
��� d w k ; i a b c e
�����ʽ��
  ��ĸ
�����ʽ��
  ��ĸ
*/
#include <stdio.h>
#include <malloc.h>

int P_str(char a){
    char str1[] = {'a', 'b', 'c', 'd', 'e', 'i', 'k', ';', 'w'};
    char str2[] = {'d', 'w', 'k', ';', 'i', 'a', 'b', 'c', 'e'};

    int i=0;

    for (i=0; str1[i] != '\0'; i++){
        if (a == str1[i]){
            printf("%c", str2[i]);
            return 1;
        }
    }
    printf("%c", a);
    return 0;
}


int main()
{
    int i=0;
    char *s;
    s = (char *)malloc(1024); 
    gets(s);

    for (i=0; s[i] != '\0'; i++){
        P_str(s[i]);
    }
    printf("\n");
	
	free(s);
    return 0;
}