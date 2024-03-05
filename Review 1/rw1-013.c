#include <stdio.h>

void printArray(int arr[], int n);

int main() {
  int arr[100], sum = 0;
  int n = 0;
  do {
    printf("Enter number: ");
    scanf("%d", &arr[n]);
    n++;
    sum += arr[n-1];
  } while (arr[n-1] != 0);

  printf("%d", sum);

  return 0;
}

void printArray(int arr[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("%d\n", arr[i]);
  }
}
