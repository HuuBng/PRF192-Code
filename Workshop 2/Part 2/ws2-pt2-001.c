#include <stdio.h>

void printNumber1To100();

int main() {
  printNumber1To100();
  return 0;
}

void printNumber1To100() {
  int i = 1;
  while (i <= 100) {
    printf("%d ", i);
    i++;
  }
}
