#include <stdio.h>

int isFibo(int n);

int main() {
  int n;

  do {
    printf("Enter n: ");
    scanf("%d", &n);
  } while (n < 1);

  isFibo(n) ? printf("It is a Fibonacci element.")
            : printf("It is not a Fibonacci element.");

  return 0;
}

int isFibo(int n) {
  int t1 = 1, t2 = 1, f = 1;
  if (n == 1)
    return 1;
  while (f < n) {
    f = t1 + t2;
    t1 = t2;
    t2 = f;
  }
  if (n == f)
    return 1;
  return 0;
}
