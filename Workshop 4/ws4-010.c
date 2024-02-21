#include <stdio.h>

void printArray(int a[], int n);
void countArray(int a[], int n, int x);
void printInRangeArray(int a[], int n, int minVal, int maxVal);
void printAscOrderArray(int a[], int n);
void bubbleSortArray(int a[], int n);

void menu() {
  printf("\n =====================================================");
  printf("\n || 1.      Add a value                             ||");
  printf("\n || 2.      Search a value                          ||");
  printf("\n || 3.      Print out array                         ||");
  printf("\n || 4.      Print out values in a range             ||");
  printf("\n || 5.      Print out the array in ascending order  ||");
  printf("\n || Others. Quit                                    ||");
  printf("\n =====================================================");
  printf("\n");
}

int main() {
  int a[100], arrIndex = 0;
  int choice;
  do {
    menu();
    printf("Enter choice: ");
    scanf("%d", &choice);
    printf("\n");
    switch (choice) {
    case 1: {
      printf("Enter a value to add: ");
      scanf("%d", &a[arrIndex]);
      arrIndex++;
      break;
    }
    case 2: {
      int x;
      printf("Enter value to find: ");
      scanf("%d", &x);
      countArray(a, arrIndex, x);
      break;
    }
    case 3: {
      printArray(a, arrIndex);
      break;
    }
    case 4: {
      int minVal, maxVal;
      printf("Enter min value: ");
      scanf("%d", &minVal);
      printf("Enter max value: ");
      scanf("%d", &maxVal);
      if (minVal > maxVal) {
        int t = minVal;
        minVal = maxVal;
        maxVal = t;
      }
      printInRangeArray(a, arrIndex, minVal, maxVal);
      break;
    }
    case 5: {
      printAscOrderArray(a, arrIndex);
      break;
    }
    default:
      printf("Bye bye!!!");
    }
  } while (choice >= 1 && choice <= 5);

  return 0;
}

void printAscOrderArray(int a[], int n) {
  int i, b[n];
  for (i = 0; i < n; i++) {
    b[i] = a[i];
  }
  bubbleSortArray(b, n);
  printArray(b, n);
}

void printInRangeArray(int a[], int n, int minVal, int maxVal) {
  int i;
  for (i = 0; i < n; i++) {
    if (minVal <= a[i] && a[i] <= maxVal)
      printf("%d\t", a[i]);
  }
  printf("\n");
}

void countArray(int a[], int n, int x) {
  int i, count = 0;
  for (i = 0; i < n; i++) {
    count += (a[i] == x) ? 1 : 0;
  }
  printf("Count: %d\n", count);
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

void printArray(int a[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("a[%d] = %d\n", i, a[i]);
  }
}
