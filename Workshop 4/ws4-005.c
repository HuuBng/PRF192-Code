#include <stdio.h>

void inputArray(int a[], int n);
void printCountEqualToKArray(int a[], int n, int k);

int main() {
  int a[100], n, k;
  printf("Enter number of element: ");
  scanf("%d", &n);

  inputArray(a, n);

  printf("Enter k: ");
  scanf("%d", &k);
  printCountEqualToKArray(a, n, k);

  return 0;
}

void printCountEqualToKArray(int a[], int n, int k) {
  int i, count = 0;
  for (i = 0; i < n; i++) {
    count += (a[i] == k) ? 1 : 0;
  }
  printf("Count: %d", count);
}

void inputArray(int a[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
  }
}
