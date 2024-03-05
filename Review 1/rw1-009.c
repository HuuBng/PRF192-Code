#include <stdio.h>

int isPrime(int n);

int main() {
  int n;
  do {
    printf("Enter n: ");
    scanf("%d", &n);
  } while (n < 0);

  isPrime(n) ? printf("Not prime") : printf("Prime");

  return 0;
}

int isPrime(int n) {
  if (n < 2)
    return 0;

  int i;
  for (i = 2; i < n; i++) {
    if (n % i == 0)
      return 0;
  }

  return 1;
}
