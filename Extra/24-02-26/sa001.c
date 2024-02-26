#include <stdio.h>
#include <stdlib.h>

void inputArray(int a[], int n);
void printArray(int a[], int n);

int main() {
  int *a, n;
  a = (int *)calloc(50, sizeof(int)); // int a[50]

  printf("Enter number of element: ");
  scanf("%d", &n);

  inputArray(a, n);
  printArray(a, n);

  free(a);

  return 0;
}

void inputArray(int a[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
  }
}
void printArray(int a[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("a[%d] = %d\n", i, a[i]);
  }
}
