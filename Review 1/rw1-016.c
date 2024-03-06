#include <stdio.h>

void s1(int n);
void s2(int n);
void s3(int x, int n);
void s4(int x, int n);

int main() {
  int n, x;
  do {
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter n: ");
    scanf("%d", &n);
  } while (n <= 0 || x <= 0);

  s1(n);
  s2(n);
  s3(x, n);
  s4(x, n);

  return 0;
}

void s1(int n) {
  int sum = 0;
  int i;
  for (i = 1; i <= n; i++) {
    sum += i;
  }
  printf("%d\n", sum);
}

void s2(int n) {
  float sum = 0;
  int i;
  for (i = 1; i <= n; i++) {
    sum += 1.0 / i;
  }
  printf("%f\n", sum);
}

void s3(int x, int n) {
  int sum = x, pow = x;
  int i;
  for (i = 2; i <= n; i++) {
    pow *= x;
    sum += pow;
  }
  printf("%d\n", sum);
}

void s4(int x, int n) {
  int sum = x, pow = x;
  int i;
  for (i = 2; i <= (2 * n + 1); i++) {
    pow *= x;
    sum = (i % 2 == 1) ? sum + pow : sum;
  }
  printf("%d\n", sum);
}
