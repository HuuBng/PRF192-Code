// Input: n
// Output: n! (1*2*3*...*n)

#include <stdio.h>

int factorial(int n) {
  int i, result = 1;
  for (i = 1; i <= n; i++) {
    result *= i;
  }
  return result;
}

int main() {
  int n;
  printf("Enter n: ");
  scanf("%d", &n);
  printf("n! = %d", factorial(n));

  return 0;
}
