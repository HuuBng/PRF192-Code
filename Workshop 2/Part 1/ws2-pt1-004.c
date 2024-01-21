#include <stdio.h>

double factorial(int n);

int main() {
  int n;
  do {
    printf("Enter number: ");
    scanf("%d", &n);
  } while (n < 0);

  printf("n! = %lf", factorial(n));
  return 0;
}

double factorial(int n) {
  double p = 1;
  int i;
  for (i = 2; i <= n; i++)
    p *= i;
  return p;
}
