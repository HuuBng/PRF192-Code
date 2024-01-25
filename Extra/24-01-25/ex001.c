// Input: n
// Output: Write a function to check n is a palidrome number.

#include <stdio.h>

int isPalidrome(int n);

int main() {
  int n;
  printf("Enter n: ");
  scanf("%d", &n);

  isPalidrome(n) ? printf("%d is palidrome", n)
                 : printf("%d is not palidrome", n);

  return 0;
}

int isPalidrome(int n) {
  int i = n, reverse = 0, remainder;
  while (i > 0) {
    remainder = i % 10;
    i /= 10;
    reverse = reverse * 10 + remainder;
  }
  printf("%d ", reverse);
  return reverse == n;
}
