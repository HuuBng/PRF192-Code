#include <stdio.h>

void swapNumber(int n1, int n2);

int main() {
  int n1, n2;

  printf("Enter n1: ");
  scanf("%d", &n1);
  printf("Enter n2: ");
  scanf("%d", &n2);
  swapNumber(n1, n2);

  return 0;
}

void swapNumber(int n1, int n2) {
  int t = n1;
  n1 = n2;
  n2 = t;
  printf("n1 = %d\nn2 = %d", n1, n2);
}
