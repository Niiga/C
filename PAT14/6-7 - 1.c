/*
ͳ��ĳ����ȫƽ������20 �֣�
����Ҫ��ʵ��һ���������ж���һ��������N�Ƿ�����������������ȫƽ����������������λ������ͬ��
��144��676�ȡ�
�����ӿڶ��壺
int IsTheNumber ( const int N );
����N���û�����Ĳ��������N������������ú������뷵��1�����򷵻�0��
���в��Գ���������

����������
105 500
���������
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

/* ��Ĵ��뽫��Ƕ������ */
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
