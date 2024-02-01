#include <stdio.h>

void printFiboSequence(int n);
int isValidDate(int date, int month, int year);
int convertToBinary(int n);
int isPerfectNumber(int n);

void menu() {
  printf("\n");
  printf("\n ===========================================");
  printf("\n || 1. Fibonacci sequence                 ||");
  printf("\n || 2. Check a date                       ||");
  printf("\n || 3. Convert to binary                  ||");
  printf("\n || 4. Check perfect number               ||");
  printf("\n || 5. Quit                               ||");
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
      printFiboSequence(n);
      break;
    }
    case 2: {
      int date, month, year;
      printf("Enter date: ");
      scanf("%d", &date);
      printf("Enter month: ");
      scanf("%d", &month);
      printf("Enter year: ");
      scanf("%d", &year);
      isValidDate(date, month, year) ? printf("Date is valid!")
                                     : printf("Date is invalid!");
      break;
    }
    case 3: {
      int n;
      printf("Enter n: ");
      scanf("%d", &n);
      printf("%d", convertToBinary(n));
      break;
    }
    case 4: {
      int n;
      printf("Enter n: ");
      scanf("%d", &n);
      isPerfectNumber(n) ? printf("%d is perfect", n)
                         : printf("%d is not perfect", n);
      break;
    }
    case 5:
      printf("Bye Bye");
    }
  } while (choice != 5);

  return 0;
}

void printFiboSequence(int n) {
  int i, t1 = 1, t2 = 1, f = 1;
  for (i = 1; i <= n; i++) {
    f = t1 + t2;
    t1 = t2;
    t2 = f;
    printf("%d ", f);
  }
}

int isValidDate(int d, int m, int y) {
  int maxd = 31;
  if (d < 1 || d > 31 || m < 1 || m > 12)
    return 0;
  if (m == 4 || m == 6 || m == 9 || m == 11)
    maxd = 30;
  else if (m == 2) {
    if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
      maxd = 29;
    else
      maxd = 28;
  }
  if (d > maxd)
    return 0;
  return 1;
}

int convertToBinary(int n) {
  int base = 1, temp = 0;
  while (n > 0) {
    temp = temp + n % 2 * base;
    base *= 10;
    n /= 2;
  }
  return temp;
}

int isPerfectNumber(int n) {
  int i, temp = 0;
  for (i = 1; i < n; i++) {
    if (n % i == 0)
      temp += i;
  }
  if (temp != n)
    return 0;
  return 1;
}
