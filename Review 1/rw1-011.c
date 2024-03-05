#include <stdio.h>

void inputArray(int arr[], int n);
void removeDuplicateOddKeepFirst(int arr[], int *n);
void removeOneMid(int arr[], int *pn, int *pos);
void printArray(int arr[], int n);

int main() {
  int n;
  do {
    printf("Enter how many element: ");
    scanf("%d", &n);
  } while (n <= 0);

  int arr[n];
  inputArray(arr, n);

  removeDuplicateOddKeepFirst(arr, &n);

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

void printArray(int arr[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("%d\n", arr[i]);
  }
}

void removeDuplicateOddKeepFirst(int arr[], int *pn) {
  int i, j;
  for (i = 0; i < *pn; i++) {
    for (j = i + 1; j < *pn; j++) {
      if (arr[i] == arr[j] && arr[i] % 2 == 1) {
        if (j < *pn - 1)
          removeOneMid(arr, pn, &j);
        else if (j == *pn - 1)
          (*pn)--;
      }
    }
  }
}

void removeOneMid(int arr[], int *pn, int *pos) {
  int k;
  for (k = *pos; k < *pn; k++) {
    arr[k] = arr[k + 1];
  }
  (*pn)--;
  (*pos)--;
}
