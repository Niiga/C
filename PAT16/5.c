#include <stdio.h>

void print_int(int num);

int main()
{
    int i, n, j;
    int a[54], b[54], a1[54], a2[54];
    for (i=0; i<54; i++) {
        a[i] = i+1;
    }
    scanf("%d", &n);
    for (i=0; i<54; i++) {
        scanf("%d", &b[i]);
    }
    for (i=0; i<54; i++) {
        a1[i] = a[i];
    }
    for (i=0; i<n; i++) {
        for (j=0; j<54; j++) {
            a2[b[j]-1] = a1[j];
        }
        for (j=0; j<54; j++) {
            a1[j] = a2[j];
        }
    }
    // 输出
    for (i=0; i<54; i++) {
        print_int(a1[i]);
        if (i < 54-1) {
        	printf (" ");
		}
    }

    return 0;
}

void print_int(int num) {
	if (num<=13) {
        printf("S%d", num);
    } else if (num>=14 && num<=26) {
        printf("H%d", num-13);
    } else if (num>=27 && num<=39) {
        printf("C%d", num-26);
    } else if (num>=40 && num<=52) {
        printf("D%d", num-39);
    } else if (num>=53 && num<=54) {
        printf("J%d", num-52);
    }
}
