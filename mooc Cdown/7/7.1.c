/*
题目内容：
    先定义一张字母加密对照表。
将需要加密的一行文字输入加密程序，
程序根据加密表中的对应关系，
可以很简单地将输入的文字加密输出，
对于表中未出现的字符则不加密。
字母加密对照表
输入 a b c d e i k ; w
输出 d w k ; i a b c e
输入格式：
  字母
输出格式：
  字母
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