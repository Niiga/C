/*
# 35
. 46
@ 64
 ‰»Î£∫
5
....#
.#.@.
.#@..
#....
.....
4
 ‰≥ˆ
16 
*/
#include <stdio.h>

int numChar(char a[100][100], int n, int num);
void change(char a[100][100], int n);
char ch(char c);
void chpy(char c1[100][100], char c2[100][100], int n);

int main()
{
    int n;
    scanf("%d", &n);

    int i=0, j=0;
    char a[100][100];
    
    for (i=0; i<n; i++) {
        scanf("%s", &a[i]);
    }
	
    int num = 0;
    scanf("%d", &num);

	int sum = 0;
	sum = numChar(a, n, num);
    printf("%d\n", sum);

    return 0;
}

int numChar(char a[100][100], int n, int num) {
	int i, j;
	int sum=0;
	
    for (i=1; i<num; i++) {
        change(a, n);
    }
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            if (a[i][j] == '@') {
                sum ++;
            }
        }
    }
    
    return sum;
}

void change(char a[100][100], int n) {
    int i, j;
    char b[100][100];
    chpy(b,a,n);
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            if (a[i][j] == '@') {
                if (i+1 < n) {
                    b[i+1][j] = ch(a[i+1][j]);
                }
				if (i-1 >= 0) {
                    b[i-1][j] = ch(a[i-1][j]);
                }
                if (j+1 < n) {
                    b[i][j+1] = ch(a[i][j+1]);
                }
				if (j-1 >= 0) {
                    b[i][j-1] = ch(a[i][j-1]);
                }
            }
        }
    }
	chpy(a,b,n);
}

char ch(char c) {
    if ( c == '.') {
        return '@';
    } else if ( c == '#') {
        return '#';
    }
}

void chpy(char c1[100][100], char c2[100][100], int n) {
	int i, j;
	for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            c1[i][j] = c2[i][j];
        }
    }
    
}
