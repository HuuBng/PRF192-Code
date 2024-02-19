#include <stdio.h>

void inputArray(int a[], int n);
void printArray(int a[], int n);
void bubbleSortArray(int a[], int n);
void swap(int *p1, int *p2);

int main() {
  int a[100], n;
  printf("Enter number of element: ");
  scanf("%d", &n);

  inputArray(a, n);
  bubbleSortArray(a, n);
  printf("\n\n");
  printArray(a, n);

  return 0;
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

void swap(int *p1, int *p2) {
  int temp;
  temp = *p1;
  *p1 = *p2;
  *p2 = temp;
}

void printArray(int a[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("a[%d] = %d\n", i, a[i]);
  }
}

void inputArray(int a[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
  }
}
