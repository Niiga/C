/*
Input Specification:
Each input contains one test case. Each case contains one positive integer with no more than 20 digits.
Output Specification:
For each test case, first print in a line "Yes" if doubling the input number gives a number that consists of only a permutation of the digits in the original number,
or "No" if not. Then in the next line, print the doubled number.
Sample Input:
1234567899
Sample Output:
Yes
2469135798
*/
#include <stdio.h>

int mul_int(int n1[20], int n);
void print_int(int num[20], int n);
int judg_int(int n1[20], int n2[20], int n);
void sort_int(int num[20], int N);

int main()
{
    int a[20];
    char c[20];
    scanf("%s", c);

    int i, n;
    for (i=0; c[i]!='\0'; i++);
    n = i-1;
    for (i=n; i>=0; i--) {
        a[n-i] = (int)c[i] - '0';
    }
    mul_int(&a[0],n+1);

    return 0;
}

int mul_int(int *n1, int n) {
    int n2[20];
    int i, j;
    int num, sum;
    num = 0;
    sum = 0;
    for (i=0; i<n; i++) {
        num = n1[i]*2+sum;
        n2[i] = num%10;
        sum = num/10;
    }
    if (i==n && sum>0) {
        n2[i] = sum;
        printf("No\n");
        print_int(n2, i);
        return 0;
    } else {
        judg_int(n1, n2, n-1);
    }
}

void print_int(int num[20], int n) {
	int i;
	for (i=n; i>=0; i--) {
		printf("%d", num[i]);
	}
}

int judg_int(int n1[20], int n2[20], int n) {
	int i, s1=0;
    int num1[20], num2[20];
    for(i=0; i<=n; i++) {
    	num1[i] = n1[i];
    	num2[i] = n2[i];
	}

	sort_int(num1,n);
	sort_int(num2,n);
    for (i=0; i<=n; i++) {
        if (num1[i] == num2[i]) {
            s1++;
        }
    }
    if (s1 == i) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    print_int(n2,n);
}

void sort_int(int num[20], int N) {
    int i, j, nu;
    for (i=0; i<N; i++) {
        for (j=0; j<N-i; j++) {
            if (num[j] > num[j+1]) {
                nu = num[j+1];
                num[j+1] = num[j];
                num[j] = nu;
            }
        }
    }
}
