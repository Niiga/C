#include <stdio.h>
#include <math.h>

long long pGCD(long long a, long long b);

int main()
{
    int i, n;
    scanf("%d", &n);
    long long a[n][2];
    long long suma, sumb;
    long long num;

    for (i=0; i<n; i++) {
        scanf("%lld/%lld", &a[i][0], &a[i][1]);
    }
    
    suma = a[0][0]; 
    sumb = a[0][1];
    for (i=1; i<n; i++) {
        suma = suma*a[i][1] + sumb*a[i][0];
        sumb *=a[i][1];
        
        num = pGCD(suma, sumb);
        if (num < 0) {
        	num *= -1;
		}
        suma /= num;
        sumb /= num;
    }
    
	if (abs(suma) > sumb) {
        printf("%lld", suma/sumb);
        suma %= sumb;
        if (suma == 0) {
            return 0;	
        } else {
        	printf(" ");
		}
    } else if (suma == 0) {
        printf("0");
        return 0;
    }
    printf("%lld/%lld", suma, sumb);
    
    return 0;
}

long long pGCD(long long a, long long b) {
    if(a == 0)
        return 0;
    else
        return (b == 0) ? a : gcd(b, a % b);
}
