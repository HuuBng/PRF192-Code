#include <stdio.h>
#include <stdlib.h>

void inputArray(int arr[], int n);
int sumSquaredEven(int arr[], int n);

int main() {
  int n;
  do {
    printf("Enter how many elements: ");
    scanf("%d", &n);
  } while (n < 0);

  int *arr = (int *)malloc(n * sizeof(int));
  inputArray(arr, n);

  printf("\nResult: %d", sumSquaredEven(arr, n));

  return 0;
}

void inputArray(int arr[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    do {
      printf("[%d] = ", i + 1);
      scanf("%d", &arr[i]);
    } while (arr[i] < 0 || arr[i] > 10);
  }
}

int sumSquaredEven(int arr[], int n) {
  int i, sum = 0;
  for (i = 0; i < n; i++) {
    if (arr[i] % 2 == 0)
      sum += arr[i] * arr[i];
  }
  return sum;
}
