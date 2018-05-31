#include <stdio.h>

int main()
{
	int a[3], b[3], i, j;
	char ch;
	float n, sA[3] = {0.0}, s1[3] = {0.0};

	for (i=0; i<3; i++) {
		scanf("%d%d", &a[i], &b[i]);    // 用scanf
		for (j=0; j<b[i]; j++) {
			getchar();
			ch = getchar();
			scanf("%f", &n);            // 用scanf
	
			s1[a[i]-1] += n;	// 1-3 的和 
			if ( ch == 'A') {
				sA[0] += n;		// A的和 
			} else if (ch == 'B') {
				sA[1] += n;		// B的和 
			} else if (ch == 'C') {
				sA[2] += n;		// C的和 
			}
		}
	}
	
	for (i=0; i<3; i++) {
		printf("%d %.2f\n", i+1, s1[a[i]-1]);
	}
	for (i=0; i<3; i++) {
		printf("%c %.2f", 'A'+i, sA[i]);
		if (i<2) {
			printf("\n");
		}
	}
	
	return 0;
}
