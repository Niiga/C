#include <stdio.h>

int main()
{
    int N;
    int S=0, sum=1;
	scanf("%d", &N); 
	
    int i, j;
    for (i=1; i<=N; i++) {
        for (j=i; j>=1; j--) {
            sum*=j;
        }
        S += sum;
        sum = 1;
    }
    
	printf("%d", S);
    return 0;
}
