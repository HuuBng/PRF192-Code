#include <stdio.h>
#include <stdlib.h>

void inputArray(int a[], int n);
void printArray(int a[], int n);
void removeOneLast(int a[], int *pn);
void addOneLast(int a[], int *pn, int x);
int linearSearch(int a[], int n, int x);
void removeOneMid(int a[], int *pn, int x);

int main() {
  int *a, n;
  a = (int *)calloc(50, sizeof(int));

  printf("Enter number of element: ");
  scanf("%d", &n);

  inputArray(a, n);
  printArray(a, n);
  // removeOneLast(a, &n);
  // printf("RemovedOneLast");

  int x, xPos;
  printf("\nEnter position to add: ");
  scanf("%d", &xPos);
  printf("\nEnter x: ");
  scanf("%d", &x);
  // addOneLast(a, &n, x);
  // printf("AddedOneLast");

  // removeOneMid(a, &n, x);

  printArray(a, n);
  free(a);

  return 0;
}

void removeOneMid(int a[], int *pn, int x) {
  int pos = linearSearch(a, *pn, x);
  if (pos < 0)
    printf("NOT FOUND");
  else {
    int i;
    for (i = pos; i < *pn; i++)
      a[i] = a[i + 1];
    (*pn)--;
    printf("REMOVED");
  }
}

int linearSearch(int a[], int n, int x) {
  int i;
  for (i = 0; i < n; i++) {
    if (a[i] == x)
      return i;
  }
  return -1;
}

void addOneLast(int a[], int *pn, int x) {
  a[*pn] = x;
  (*pn)++;
}

void removeOneLast(int a[], int *pn) { (*pn)--; }

void inputArray(int a[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
  }
}
void printArray(int a[], int n) {
  int i;
  printf("\n\n");
  for (i = 0; i < n; i++) {
    printf("a[%d] = %d\n", i, a[i]);
  }
}
