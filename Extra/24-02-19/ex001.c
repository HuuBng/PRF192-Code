#include <stdio.h>

void inputArray(int a[], int n);
void printArray(int a[], int n);
void printEven(int a[], int n);
int sumOdd(int a[], int n);
int checkPrime(int n);
void countPrime(int a[], int n);
void maxArray(int a[], int n);
void minPosArray(int a[], int n);
void maxNegArray(int a[], int n);
int searchX(int a[], int n, int x);

int main() {
  int a[100], n;

  printf("Enter number of element: ");
  scanf("%d", &n);

  inputArray(a, n);
  printArray(a, n);
  printEven(a, n);
  printf("SumOdd: %d\n", sumOdd(a, n));
  countPrime(a, n);
  maxArray(a, n);
  minPosArray(a, n);
  maxNegArray(a, n);

  int x;

  printf("Search x: ");
  scanf("%d", &x);
  searchX(a, n, x) == -1 ? printf("NOT FOUND")
                         : printf("Position: %d", searchX(a, n, x));

  return 0;
}

void printArray(int a[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("%d\t", a[i]);
  }
  printf("\n");
}

void inputArray(int a[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
  }
}

void printEven(int a[], int n) {
  int i;
  printf("PrintEven: ");
  for (i = 0; i < n; i++) {
    if (a[i] >= 0 && a[i] % 2 == 0)
      printf("%d\t", a[i]);
  }
  printf("\n");
}

int sumOdd(int a[], int n) {
  int i, sum = 0;
  for (i = 0; i < n; i++) {
    if (a[i] % 2 == 1)
      sum += a[i];
  }
  return sum;
}

int checkPrime(int n) {
  int i;
  if (n < 2)
    return 0;
  for (i = 2; i < n; i++) {
    if (n % i == 0)
      return 0;
  }
  return 1;
}

void countPrime(int a[], int n) {
  int i, count = 0;
  for (i = 0; i < n; i++) {
    if (checkPrime(a[i]))
      count += 1;
  }
  printf("countPrime: %d\n", count);
}

void maxArray(int a[], int n) {
  int i, max = 0;
  for (i = 0; i < n; i++) {
    max = (a[i] > max) ? a[i] : max;
  }
  printf("Max: %d\n", max);
}

void minPosArray(int a[], int n) {
  int i, min = 100;
  for (i = 0; i < n; i++) {
    if (a[i] > 0)
      min = (a[i] < min) ? a[i] : min;
  }
  printf("MinPos: %d\n", min);
}

void maxNegArray(int a[], int n) {
  int i, maxNeg = -100;
  for (i = 0; i < n; i++) {
    if (a[i] < 0)
      maxNeg = (a[i] > maxNeg) ? a[i] : maxNeg;
  }
  printf("MaxNeg: %d\n", maxNeg);
}

int searchX(int a[], int n, int x) {
  int i;
  for (i = 0; i < n; i++) {
    if (a[i] == x)
      return i;
  }
  return -1;
}
