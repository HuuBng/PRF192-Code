#include <stdio.h>

int diffASCII(char a, char b);

int main() {
  printf("Enter a: ");
  char a = getchar();
  fflush(stdin);
  printf("Enter b: ");
  char b = getchar();

  int diff = diffASCII(a, b);
  printf("\nDecimal: %d", diff);
  printf("\nOctal: %o", diff);
  printf("\nHexadecimal: %hX", diff);

  return 0;
}

int diffASCII(char a, char b) {
  if (a > b) {
    char t = a;
    a = b;
    b = t;
  }
  return b - a;
}
