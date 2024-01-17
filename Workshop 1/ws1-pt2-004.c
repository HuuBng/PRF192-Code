#include <stdio.h>

int main() {
  int num1, num2, temp;

  do {
    printf("Enter num1: ");
    scanf("%d", &num1);
    printf("Enter num2: ");
    scanf("%d", &num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("Number 1: %d\n", num1);
    printf("Number 2: %d\n", num2);
  } while (num1 != 0 && num2 != 0);

  return 0;
}
