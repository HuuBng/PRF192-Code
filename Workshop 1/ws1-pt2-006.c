#include <stdio.h>

int main() {
  int i;
  for (i = 0; i <= 255; i++) {
    printf("%c\t: %d\t, %o\t, %X\n", i, i, i, i);
    if (i % 20 == 0 && i != 0)
      getchar();
  }
  return 0;
}
