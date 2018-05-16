/*
    输入样例1：
    abcdedcba[回车]
    输出样例1：
    YES[回车]
    输入样例2：
    1234432[回车]
    输出样例2：
    NO[回车]
*/
#include <stdio.h>
#include <malloc.h>


int YorN(char *String, int i)
{
    int n=0;
    i--;
    for (n=0; n<i/2; n++){
        if (String[n] != String[i])
        {
            printf("NO\n");
            return 0;
        }
        i--;
    }
    printf("YES\n");
    return 1;
}

int main()
{
    int i=0, n=0;
    char *String;
    String = (char *)malloc(1024);
    scanf("%s", String);

    for (i=0; String[i] != '\0'; i++);
    char s[i];

    for (n=0; n<=i; n++) {
        s[n] = String[n];
    }

    YorN(s, i);
    free(String);
    return 0;
}
