/*
  获得长字符
  获得短字符
*/
#include <stdio.h>
#include <malloc.h>

int main()
{
    char *s, *t;
    s = (char *)malloc(1024); 
    t = (char *)malloc(1024); 
    gets(s);    // 输入一个包含空格的字符串输入，长字符
    gets(t);    // 输入短字符


	free(s);
    free(t);
    return 0;
}
