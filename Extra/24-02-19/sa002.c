#include <stdio.h>
#define arrSize 5

int main()
{
  int a[arrSize], i;

  for(i = 0; i < arrSize; i++) {
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
  }

  for(i = 0; i < arrSize; i++) {
    printf("a[%d] = \t%d\t\t", i, a[i]);
  }

  return 0;
}
