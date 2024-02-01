#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  int result = 0, base = 1;

  while (n > 0) {
    result = result + (n % 2) * base;
    n /= 2;
    base *= 10;
  }

  printf("Result: %d", result);

  return 0;
}
