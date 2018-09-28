#include <stdio.h>
#include <math.h> 
#include <time.h> 
#define MAXN 100
#define MAXK 1e5
double f1(int n, double a[], double x);
double f2(int n, double a[], double x);
double PrintN(double f(), double a[], int n);
 
clock_t start, stop;
double duration;
 
int main() {
	int i;
	double a[MAXN+1];
    for (i=1; i<MAXN+1; i++)
        a[i] = 1.0 / i;

    PrintN(f1, a, 1);
    PrintN(f2, a, 2);

    return 0;
}
 
double f1(int n, double a[], double x) {
    int i;
    double p = 1;
    for (i = 1; i <= n; i++)
        p += (double)pow(x, i) * a[i];
    return p;
}
 
double f2(int n, double a[],double x)
{
    int i;
    double sum = 1;
    double p = x;
    for (i = 2; i <= n; i++) {
        sum += p;
        p *= x * (i-1) * a[i];
    }
    sum += p;
    return sum;
}
 
 
double PrintN(double f(), double a[], int n) {
    int i;
    double sum;

    start = clock();
    for (i = 0; i < MAXK; i++)
        sum = f(MAXN, a, 1.1);
    stop = clock();
    
    duration = ((double)(stop - start)) / CLK_TCK / MAXK;
    printf("ticks%d = %f\n", n, (double)(stop - start));
    printf("duration%d = %6.2e\n", n, duration);
 
    return sum;
}
