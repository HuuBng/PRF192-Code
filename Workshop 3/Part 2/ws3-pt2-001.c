#include <stdio.h>

int isPrime(int n);
void printMinMaxDigit(int n);
void menu() {
  printf("\n ===========================================");
  printf("\n || 1. Check primes                       ||");
  printf("\n || 2. Print min, max digit in an integer ||");
  printf("\n || 3. Quit                               ||");
  printf("\n ===========================================");
  printf("\n");
}

int main() {
  int choice;
  do {
    menu();
    printf("Enter option: ");
    scanf("%d", &choice);
    switch (choice) {
    case 1: {
      int n;
      printf("Enter n: ");
      scanf("%d", &n);
      isPrime(n) ? printf("%d is prime\n", n) : printf("%d is not prime\n", n);
      break;
    }
    case 2: {
      int n;
      printf("Enter n: ");
      scanf("%d", &n);
      printMinMaxDigit(n);
      break;
    }
    case 3:
      printf("Bye Bye");
    }
  } while (choice != 3);

  return 0;
}

int isPrime(int n) {
  int i;
  if (n < 2)
    return 0;
  for (i = 2; i < n; i++) {
    if (n % i == 0)
      return 0;
  }
  return 1;
}

void printMinMaxDigit(int n) {
  int min = n + 1, max = 0;
  do {
    int remainder = n % 10;
    max = (remainder > max) ? remainder : max;
    min = (remainder < min) ? remainder : min;
    n /= 10;
  } while (n > 0);
  printf("Min digit: %d\nMax digit: %d\n", min, max);
}
