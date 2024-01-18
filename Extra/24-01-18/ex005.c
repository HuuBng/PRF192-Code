// Input: n
// Output: "Yes" (n is prime) || "No" (n is not prime)

#include <stdio.h>

int isPrime(int n) {
  int i;
  if (n < 2)
    return 0;
  for (i = 2; i * i <= n; i++) {
    if (n % i == 0)
      return 0;
  }
  return 1;
}

int main() {
  int n;
  do {
    printf("Enter n(n>2): ");
    scanf("%d", &n);
  } while (n < 2);

  // if (isPrime(n))
  //   printf("Yes, %d is a prime number", n);
  // else
  //   printf("No, %d is not a prime number", n);

  isPrime(n) ? printf("Yes, %d is a prime number", n)
             : printf("No, %d is not a prime number", n);

  return 0;
}
