#include <stdio.h>

int isPrime(int n);

int main() {
  int n;
  do {
    printf("Enter n: ");
    scanf("%d", &n);
  } while (n < 2);

  isPrime(n) ? printf("%d is prime", n) : printf("%d is not prime", n);

  return 0;
}

int isPrime(int n) {
  int i;
  if (n < 2)
    return 0;
  for (i = 2; i < n; i++) {
    if (n % i == 0)
      return 0;
  }
  return 1;
}
