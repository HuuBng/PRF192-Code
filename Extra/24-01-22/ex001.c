// Input: n
// Output: Write a function
// (1)is n prime?
// (2)count prime from 1 to n
// (3)sum prime from 1 to n

#include <stdio.h>

int isPrime(int n);
void countPrime(int n);
void sumPrime(int n);

int main() {
  int n;
  do {
    printf("Enter n: ");
    scanf("%d", &n);
  } while (n < 2);

  isPrime(n) ? printf("Prime number") : printf("Not prime number");
  countPrime(n);
  sumPrime(n);
  return 0;
}

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

void countPrime(int n) {
  int i, count = 0;
  for (i = 2; i <= n; i++) {
    if (isPrime(i) == 1) {
      count += 1;
    }
  }
  printf("\nCount: %d", count);
}

void sumPrime(int n) {
  int i, sum = 0;
  for (i = 2; i <= n; i++) {
    if (isPrime(i) == 1) {
      sum += i;
    }
  }
  printf("\nSum: %d", sum);
}
