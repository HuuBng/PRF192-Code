#include <stdio.h>

void maxEvenArray(int arr[], int n);

int main() {
  int n = 5, arr[n];
  int i;
  for (i = 0; i < n; i++) {
    printf("[%d] = ", i + 1);
    scanf("%d", &arr[i]);
  }

  maxEvenArray(arr, n);

  return 0;
}

void maxEvenArray(int arr[], int n) {
  int i, evenFirst = -1;

  for (i = 0; i < n; i++) {
    if (arr[i] % 2 == 0) {
      evenFirst = arr[i];
      break;
    }
  }

  int evenMax = evenFirst;

  for (i = 0; i < n; i++) {
    if (evenFirst == -1)
      break;
    evenMax = (arr[i] % 2 == 0 && arr[i] > evenMax) ? arr[i] : evenMax;
  }

  if (evenFirst != -1)
    printf("evenMax: %d", evenMax);
  else
    printf("There is no evenMax");
}
