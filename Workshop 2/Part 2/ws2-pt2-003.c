#include <stdio.h>

double square(int n);

int main() {
  int n;
  printf("Enter number: ");
  scanf("%d", &n);
  printf("%d^2 = %.2lf", n, square(n));
  return 0;
}

double square(int n) { return n * n; }
