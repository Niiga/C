/*
输入样例1：
This is his book[回车]
is[回车]
输出样例1：
3[回车]
输入样例2：
This is my book[回车]
at[回车]
输出样例2：
No[回车]
*/
#include <stdio.h>
#include <malloc.h>

int size(char* s){
    int i=0;
    for (i=0; s[i]!='\0'; i++);
    return i;
}

void judg(char *str, char *c) {
    int i=0, n=0, num=0, sum=0;
    i = size(str);
    n = size(c);
    int n1, i1;
    i1 = i;
    n1 = n;

    for (i=0; i<i1; i++){           // 字符串
        int i2;
        i2 = i;
        for (n=0; n<n1; n++){       // 搜索的字符
            if (c[n] == str[i2]) {
                num++;
                if (num == n1){
                    sum++;
                    num = 0;        // 归零
                    i = i2;
                    break;
                }
                i2++;                
            } else {
                num = 0;            // 归零
                break;
            }
        }
    }
    if (sum == 0){
        printf("No\n");
    } else {
        printf("%d\n", sum);
    }
}

int main()
{
    char *s, *t;
    s = (char *)malloc(1024); 
    t = (char *)malloc(1024); 
    gets(s);    // 获得一个包含空格的字符串输入，长字符
    gets(t);    // 获得短字符
    judg(s, t);

    free(s);
    free(t);
    return 0;
}
