/*
打印沙漏（20 分）
*****
 ***
  *
 ***
*****
首先打印出由给定符号组成的最大的沙漏形状，最后在一行中输出剩下没用掉的符号数。
输入样例:
19 *
输出样例:
*****
 ***
  *
 ***
*****
2
*/
#include <stdio.h>

void print_c(int i, int j, char c);
void math_n(int N, char c);

int main()
{
    int N;
    char c;
    scanf ("%d %c", &N, &c);

    if (N == 1) {
        printf("%c\n0\n", c);
    } else if (N > 1){
        math_n(N, c);
    }
    
    return 0;
}

void math_n(int N, char c) {
    int i=0, j=0;
    N-=1;
    for (i=2; i*2<N; i++) {
        if (N >= (2*i-1)*2) {
            N -= (2*i-1)*2;
        } else {
            break;
        }
    }
    j=i;
    for (i=j-1; i>1; i--) {
        print_c((2*i-1), (2*j-1), c);
        printf("\n");
    }
    for (i=1; i<j; i++) {
        print_c((2*i-1), (2*j-1), c);
        printf("\n");
    }
   	printf("%d", N);
}

void print_c(int i, int j, char c) {
    int num;
    
    if (j-i > 0) {
        num = (j-i)/2;
        for(num-=1;num>0; num--)
            printf(" ");
    }

    for( ;i>0;i--)
        printf("%c", c);
}
