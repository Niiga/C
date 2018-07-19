#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    n+=2;
    if (n>7) {
      n-=7;
    }
    printf("%d", n);
  
    return 0;
}
