#include <stdio.h>

int main()
{
  int n;
  char c;
  scanf("%d %c", &n, &c);
  
  int i,j;
  for(i=0; i<(n+1)/2; i++) {
    for (j=0; j<n; j++) {
      printf("%c", c);
    }
    if (i<((n+1)/2-1)) {
      printf("\n");
    }
  }
  
  return 0;
}
