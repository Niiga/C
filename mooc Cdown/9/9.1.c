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
#include <string.h>

int main()
{
    char s[100];
    gets(s);
    int k = strlen(s);
    
	int i;    
    printf("%c", s[0]);             // 输出开头的n
    for (i=1; i<k; i++) {
        if (s[i] == 'n') {
            if (s[i-1] != 'n') {
                printf("\n");
            }                       // 将所有n输出为一个
        } else  {
            printf("%c", s[i]); 
        }
    }
    for (i=i+1; i<k; i++) {
        printf("%c", s[i]);
    }

    return 0;
}
