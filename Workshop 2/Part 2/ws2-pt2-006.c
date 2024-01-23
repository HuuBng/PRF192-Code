#include <stdio.h>

int sumSeries(int n);
int factorial(int n);

int main() {
  int n;
  printf("Enter n: ");
  scanf("%d", &n);

  printf("Sum series: %d", sumSeries(n));

  return 0;
}

int sumSeries(int n) {
  int sum = 0, i;
  for (i = 1; i <= n; i++) {
    sum += factorial(i);
  }
  return sum;
}

int factorial(int n) {
  int i, result = 1;
  for (i = 1; i < n; i++) {
    result *= i;
  }
  return result;
}
