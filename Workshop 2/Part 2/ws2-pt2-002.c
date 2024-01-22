#include <stdio.h>

void printNumberDiv3and5();

int main() {
  printNumberDiv3and5();
  return 0;
}

void printNumberDiv3and5() {
  int i = 1;
  while (i <= 100) {
    if (i % 3 == 0 && i % 5 == 0)
      printf("%d ", i);
    i++;
  }
}
