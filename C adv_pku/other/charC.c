#include <stdio.h>

/*typedef struct Inv {
	char data;
	double num;  
    struct Inv *next; 
};*/

int main()
{
/*	struct Inv *pr, *head;
	head = (struct Inv*)malloc(sizeof(struct Inv));
	pr = head;
*/
	int a[3], b[3], i, j;
	char ch;
	float n, sA[3] = {0.0}, s1[3] = {0.0};

	for (i=0; i<3; i++) {
		scanf_s("%d %d", &a[i], &b[i]);
		for (j=0; j<b[i]; j++) {
			ch = getchar();
			scanf_s("%f", &n);
	
			s1[i] += n;
			if ( ch == 'A') {
				s[0] += n;
			} else if (ch == 'B') {
				s[1] += n;
			} else if (ch == 'C') {
				s[2] += n;
			}
		}
	}
	
	for (i=0; i<3; i++) {
		printf("%d %.2f", i+1, s1[i]);
	}
	for (i=0; i<3; i++) {
		printf("%c %.2f", 'A'+i, sA[i]);
	}

	return 0;
} 
