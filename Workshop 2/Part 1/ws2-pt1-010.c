#include <stdio.h>

void printMinMaxDigits(int n);

int main() {
  int n;
  do {
    printf("Enter n: ");
    scanf("%d", &n);
    printMinMaxDigits(n);
  } while (n < 0);
  return 0;
}

void printMinMaxDigits(int n) {
  int digit, min, max;
  digit = n % 10;
  n /= 10;
  min = max = digit;
  while (n > 0) {
    digit = n % 10;
    n = n / 10;
    if (min > digit)
      min = digit;
    if (max < digit)
      max = digit;
  }
  printf("Min: %d\n", min);
  printf("Max: %d\n", max);
}
