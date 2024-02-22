#include <stdio.h>

void inputArray(int a[], int n);
void printArray(int a[], int n);
void minArray(int a[], int n);
int binarySearchArray(int a[], int n, int x);
void bubbleSortArray(int a[], int n);

int main() {
  int a[100], n;
  printf("Enter how many element: ");
  scanf("%d", &n);

  inputArray(a, n);
  printArray(a, n);
  minArray(a, n);
  bubbleSortArray(a, n);
  printArray(a, n);

  int x;
  printf("Enter value to find: ");
  scanf("%d", &x);
  binarySearchArray(a, n, x) == -1
      ? printf("NOT FOUND!!")
      : printf("POSITION: %d", binarySearchArray(a, n, x));

  return 0;
}

int binarySearchArray(int a[], int n, int x) {
  int l = 0, r = n - 1;
  while (l <= r) {
    int m = (l + r) / 2;
    if (a[m] == x)
      return m;
    if (a[m] < x)
      l = m + 1;
    else
      r = m - 1;
  }
  return -1;
}

void bubbleSortArray(int a[], int n) {
  int i, j;
  for (i = 0; i < n; i++) {
    for (j = n - 1; j > i; j--) {
      if (a[j] < a[j - 1]) {
        int t = a[j];
        a[j] = a[j - 1];
        a[j - 1] = t;
      }
    }
  }
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
  printf("\n");
  for (i = 0; i < n; i++) {
    printf("a[%d] = %d\n", i, a[i]);
  }
}

void minArray(int a[], int n) {
  int i, min = a[0];
  for (i = 1; i < n; i++) {
    min = (a[i] < min) ? a[i] : min;
  }
  printf("\nMin: %d\n", min);
}
