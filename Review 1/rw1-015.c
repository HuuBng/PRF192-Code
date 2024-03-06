#include <stdio.h>

void printSumDigit(int n);

int main() {

  int n;
  do {
    printf("Enter number: ");
    scanf("%d", &n);
    if (n > 0)
      printSumDigit(n);
  } while (n > 0);

  return 0;
}

void printSumDigit(int n) {
  int sum = 0;
  do {
    sum += n % 10;
    n /= 10;
  } while (n != 0);
  printf("%d\n", sum);
}
