#include <stdio.h>

void inputArray(float arr[], int n);
void bubbleSortArray(float arr[], int n);
void printArray(float arr[], int n);

int main() {
  int n = 5;
  float arr[n];
  inputArray(arr, n);

  bubbleSortArray(arr, n);

  printArray(arr, n);

  return 0;
}

void inputArray(float arr[], int n) {
  int i;
  for(i = 0; i < n; i++) {
    printf("[%d] = ", i + 1);
    scanf("%f", &arr[i]);
  }
}

void bubbleSortArray(float arr[], int n) {
  int i, j;
  for(i = 0; i < n; i++) {
    for(j = n - 1; j > i; j--) {
      if(arr[j] > arr[j - 1]) {
        float t = arr[j - 1];
        arr[j - 1] = arr[j];
        arr[j] = t;
      }
    }
  }
}

void printArray(float arr[], int n) {
  int i;
  for(i = 0; i < n; i++) {
    printf("%f\t", arr[i]);
  }
}
