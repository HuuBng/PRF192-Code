#include <stdio.h>

void findExponent(int a, int *count);
int checkExponent(int a, int count);

int main() {
  int a;
  do {
    printf("Enter a: ");
    scanf("%d", &a);
  } while (a < 0);

  int count = 0;

  findExponent(a, &count);
  checkExponent(a, count) ? printf("%d", count + 1)
                          : printf("%d is not a power of 2", a);

  return 0;
}

void findExponent(int a, int *count) {
  if (a % 2 == 0) {
    while (a > 2) {
      a /= 2;
      *count += 1;
    }
  }
}

int checkExponent(int a, int count) {
  int c = 2;
  int i;
  for (i = 1; i <= count; i++) {
    c *= 2;
  }
  if (a == c)
    return 1;
  else
    return 0;
}
