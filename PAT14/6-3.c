/*
6-3 ����ͣ�10 �֣�
����Ҫ��ʵ��һ���������������N�������ĺ͡�

�����ӿڶ��壺
int Sum ( int List[], int N );
���и����������������List[]�У�������N������Ԫ�ظ������ú����뷵��N��List[]Ԫ�صĺ͡�
*/
#include <stdio.h>

#define MAXN 10

int Sum ( int List[], int N );

int main ()
{
    int List[MAXN], N, i;

    scanf("%d", &N);
    for ( i=0; i<N; i++ )
        scanf("%d", &List[i]);
    printf("%d\n", Sum(List, N));

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
int Sum ( int List[], int N ) {
    int sum=0;
    for ( N-=1;N>=0; N--){
        sum += List[N];
    }
    return sum;
}