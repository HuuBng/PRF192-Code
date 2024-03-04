#include <stdio.h>

int isPrime(int n);

int main() {
  int n;
  do {
    printf("Enter n: ");
    scanf("%d", &n);
  } while (n < 0);

  if (isPrime(n)) {
    printf("0x%hX", n);
  } else {
    printf("%d is not a prime number", n);
  }

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
