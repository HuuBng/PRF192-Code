#include <stdio.h>

void inputArray(int a[], int n);
void maxArray(int a[], int n);

int main() {
  int a[100], n;
  printf("Enter number of element: ");
  scanf("%d", &n);

  inputArray(a, n);
  maxArray(a, n);

  return 0;
}

void maxArray(int a[], int n) {
  int i, max = 0;
  for (i = 0; i < n; i++) {
    max = (a[i] > max) ? a[i] : max;
  }
  printf("Max: %d", max);
}

void inputArray(int a[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
  }
}
