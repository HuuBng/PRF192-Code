#include <stdio.h>

int isOdd(int n);

int main() {
  int n;
  printf("Enter n: ");
  scanf("%d", &n);

  isOdd(n) ? printf("%d is odd", n) : printf("%d is even", n);

  return 0;
}

int isOdd(int n) {
  if (n % 2 == 0)
    return 0;
  return 1;
}
