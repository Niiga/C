/*
统计某类完全平方数（20 分）
本题要求实现一个函数，判断任一给定整数N是否满足条件：它是完全平方数，又至少有两位数字相同，
如144、676等。
函数接口定义：
int IsTheNumber ( const int N );
其中N是用户传入的参数。如果N满足条件，则该函数必须返回1，否则返回0。
裁判测试程序样例：

输入样例：
105 500
输出样例：
cnt = 6
*/
#include <stdio.h>
#include <math.h>

int IsTheNumber ( const int N );

int main()
{
    int n1, n2, i, cnt;
	
    scanf("%d %d", &n1, &n2);
    cnt = 0;
    for ( i=n1; i<=n2; i++ ) {
        if ( IsTheNumber(i) ) {
            cnt++;
        }
    }
    printf("cnt = %d\n", cnt);

    return 0;
}

/* 你的代码将被嵌在这里 */
int IsTheNumber ( const int N )
{
  int r=sqrt(N);
  int n=N;
  int a[10]={};

  if(r*r==N) {
    int num;
    while(n){
        num = n%10;
        a[num]++;
        if(a[num]==2){
            return 1;
        }
        n/=10;  
    }
  }
  return 0;
}
