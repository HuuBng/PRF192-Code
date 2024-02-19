#include <stdio.h>

void inputArray(int a[], int n);
void print0to10Array(int a[], int n);

int main() {
  int a[100], n;
  printf("Enter number of element: ");
  scanf("%d", &n);

  inputArray(a, n);
  print0to10Array(a, n);

  return 0;
}

void print0to10Array(int a[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    if (a[i] >= 0 && a[i] <= 10)
      printf("%d\t", a[i]);
  }
}

void inputArray(int a[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
  }
}
