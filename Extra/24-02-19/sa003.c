#include <stdio.h>

void inputArray(int a[], int n);
void printArray(int a[], int n);

int main()
{
  int a[100], n;

  printf("Enter number of element: ");
  scanf("%d", &n);

  inputArray(a, n);
  printArray(a, n);

  return 0;
}
void printArray(int a[], int n) {
  int i;
  for(i = 0; i < n; i++) {
    printf("%d\t", *(a+i));
  }
}

void inputArray(int a[], int n) {
  int i;
  for(i = 0; i < n; i++) {
    printf("a[%d] = ", i);
    scanf("%d", a+i);
  }
}
