// Input: a, b
// Output: a^b

#include <stdio.h>

int power(int a, int b) {
  int i, result = 1;
  for (i = 1; i <= b; i++) {
    result *= a;
  }
  return result;
}

int main() {
  int a, b;
  printf("Enter a: ");
  scanf("%d", &a);
  printf("Enter b: ");
  scanf("%d", &b);
  printf("a^b = %d", power(a, b));

  return 0;
}
