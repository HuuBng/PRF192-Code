#include <stdio.h>

int sumDigits(int n);

int main() {
  int n;

  do {
    printf("Enter number: ");
    scanf("%d", &n);

    if (n >= 0)
      printf("%d\n", sumDigits(n));
  } while (n >= 0);

  return 0;
}

int sumDigits(int n) {
  int sum = 0;
  do {
    int remainder = n % 10;
    n /= 10;
    sum += remainder;
  } while (n > 0);
  return sum;
}
