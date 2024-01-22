#include <stdio.h>

int gcd(int a, int b);
int lcm(int a, int b);

int main() {
  int a, b;
  do {
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
  } while (a <= 0 || b <= 0);
  printf("\ngcd: %d", gcd(a, b));
  printf("\nlcm: %d", lcm(a, b));
  return 0;
}

int gcd(int a, int b) {
  while (a != b) {
    if (a > b)
      a -= b;
    else
      b -= a;
  }
  return a;
}

int lcm(int a, int b) { return (a * b) / gcd(a, b); }
