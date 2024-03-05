#include <stdio.h>

void inputArray(int arr[], int n);
void bubbleSortArray(int arr[], int n);
void printArray(int arr[], int n);

int main() {
  int n = 5;
  int arr[n];
  inputArray(arr, n);

  bubbleSortArray(arr, n);

  printArray(arr, n);

  return 0;
}

void inputArray(int arr[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("[%d] = ", i + 1);
    scanf("%d", &arr[i]);
  }
}

void bubbleSortArray(int arr[], int n) {
  int i, j;
  for (i = 0; i < n; i++) {
    for (j = n - 1; j > i; j--) {
      if (arr[j] < arr[j - 1]) {
        float t = arr[j - 1];
        arr[j - 1] = arr[j];
        arr[j] = t;
      }
    }
  }
}

void printArray(int arr[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    if (arr[i] % 2 == 0)
      printf("%d\n", arr[i]);
  }
}
