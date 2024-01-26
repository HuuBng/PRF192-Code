// Input: a, b
// Output: Write a function to swap 2 number using pointer.

#include <stdio.h>

void swap(int *a, int *b);

int main() {
  int number1, number2;

  printf("Enter number1: ");
  scanf("%d", &number1);
  printf("Enter number2: ");
  scanf("%d", &number2);

  swap(&number1, &number2);
  printf("\nNumber 1: %d", number1);
  printf("\nNumber 2: %d", number2);
}

void swap(int *a, int *b) {
  int i = *a;
  *a = *b;
  *b = i;
}
