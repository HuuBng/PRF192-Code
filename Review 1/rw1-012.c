#include <stdio.h>

void sumSeries(int x, int n);


int main() {
  int n, x;
  do {
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter n: ");
    scanf("%d", &n);
  } while (n <= 0 || x <= 0);

  sumSeries(x, n);

  return 0;
}

void sumSeries(int x, int n) {
  float sum = 1 + 1.0 / x, pow = x;
  int i;
  for(i = 2; i <= n; i++) {
    pow *= x;
    sum += 1.0 / pow;
  }
  printf("%.5f", sum);
}
