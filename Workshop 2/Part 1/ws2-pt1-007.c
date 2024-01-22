#include <stdio.h>

int sumDigits(int n);
int productDigits(int n);
int reverseDigits(int n);

int main() {
  int n;

  do {
    printf("Enter number: ");
    scanf("%d", &n);

    if (n >= 0) {
      printf("Sum: %d\n", sumDigits(n));
      printf("Product: %d\n", productDigits(n));
      printf("Reverse: %d\n\n", reverseDigits(n));
    }
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

int productDigits(int n) {
  int product = 1;
  if (n == 0)
    product = 0;
  do {
    int remainder = n % 10;
    n /= 10;
    if (remainder == 0)
      continue;
    product *= remainder;
  } while (n > 0);
  return product;
}

int reverseDigits(int n) {
  int reverse = 0;
  do {
    int remainder = n % 10;
    n /= 10;
    reverse = reverse * 10 + remainder;
  } while (n > 0);
  return reverse;
}
