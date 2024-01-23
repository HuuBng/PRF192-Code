#include <stdio.h>

int convertToBinary(int n);
int reverseDigits(int n);

int main() {
  int n;
  printf("Enter n: ");
  scanf("%d", &n);
  printf("%d ", convertToBinary(n));

  return 0;
}

int convertToBinary(int n) {
  int i = n, temp = 1;
  while (i > 0) {
    if (i % 2 == 0)
      temp *= 10;
    else
      temp = temp * 10 + i % 2;
    i /= 2;
  }

  return reverseDigits(temp) / 10;
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
