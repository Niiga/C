/*
�򵥽׳˼��㣨10 �֣�
����Ҫ��ʵ��һ������Ǹ������׳˵ļ򵥺�����

�����ӿڶ��壺
int Factorial( const int N );
����N���û�����Ĳ�������ֵ������12�����N�ǷǸ���������ú������뷵��N�Ľ׳ˣ����򷵻�0��
*/
#include <stdio.h>

int Factorial( const int N );

int main()
{
    int N, NF;
	
    scanf("%d", &N);
    NF = Factorial(N);
    if (NF)  printf("%d! = %d\n", N, NF);
    else printf("Invalid input\n");

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
int Factorial( const int N )
{
  	int i;
	int sum=1;
	if (N == 0){
		return 1;
	}
    if (N<0 || N>12){
        sum = 0;
    } else {
    	for (i=1; i<=N; i++){
        sum *=i;
    	}
	}
    return sum;
}
