/*
 ͳ�Ƹ�λ���֣�15 �֣�
����Ҫ��ʵ��һ����������ͳ����һ������ĳ��λ�����ֵĴ���������-21252�У�2������3�Σ���ú���Ӧ�÷���3��

�����ӿڶ��壺
int Count_Digit ( const int N, const int D );
����N��D�����û�����Ĳ�����N��ֵ������int�ķ�Χ��D��[0, 9]�����ڵĸ�λ���������뷵��N��D���ֵĴ�����
*/
#include <stdio.h>

int Count_Digit ( const int N, const int D );

int main()
{
    int N, D;
	
    scanf("%d %d", &N, &D);
    printf("%d\n", Count_Digit(N, D));
    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
// ��������D�Աȣ�һ��num�ͼ�1
int Count_Digit ( const int N, const int D ){
    int num = N;
    int i = 0;
    if (num<0){
    	num*=-1;
	}
	while (num>=10){    // ���ڵ���10��10Ҳ��2λ��
        if (num%10 == D){
            i++;
        }
        num/=10;
    }
    if (num == D){
        i++;
    }
    return i;
}