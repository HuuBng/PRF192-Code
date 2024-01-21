#include <stdio.h>

double fiboPos(int n);

int main() {
  int n;

  do {
    printf("Enter position n: ");
    scanf("%d", &n);
  } while (n < 1);

  printf("%.2lf", fiboPos(n));
  return 0;
}

double fiboPos(int n) {
  int t1 = 1, t2 = 1, f = 1, i;
  for (i = 3; i <= n; i++) {
    f = t1 + t2;
    t1 = t2;
    t2 = f;
  }
  return f;
}
