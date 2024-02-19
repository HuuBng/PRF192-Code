#include <stdio.h>

void inputArray(int a[], int n);
void sumFirstAndLastArray(int a[], int n);

int main() {
  int a[100], n;
  printf("Enter number of element: ");
  scanf("%d", &n);

  inputArray(a, n);
  sumFirstAndLastArray(a, n);

  return 0;
}

void sumFirstAndLastArray(int a[], int n) {
  int i, sum = 0;
  for (i = 0; i < n; i++) {
    sum += (i == 0 || i == n-1) ? a[i] : 0;
  }
  printf("SumFirstAndLastArray: %d", sum);
}

void inputArray(int a[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
  }
}
