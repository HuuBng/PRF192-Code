// Input: n
// Output: multiplication table of n

#include <stdio.h>

void multiplication(int n) {
  int i;
  for (i = 1; i <= 10; i++) {
    printf("%d * %d = %d\n", n, i, n * i);
  }
}

int main() {
  int n;
  printf("Enter n: ");
  scanf("%d", &n);
  multiplication(n);
  return 0;
}
