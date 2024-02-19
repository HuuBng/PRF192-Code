#include <stdio.h>

void inputArray(int a[], int n);
void sumArray(int a[], int n);

int main() {
  int a[100], n = 10;
  inputArray(a, n);
  sumArray(a, n);

  return 0;
}

void sumArray(int a[], int n) {
  int i, sum = 0;
  for (i = 0; i < n; i++) {
    sum += a[i];
  }
  printf("SumArray: %d", sum);
}

void inputArray(int a[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
  }
}
