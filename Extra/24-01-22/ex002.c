// Input: n
// Output: Write a function
// (0)Show menu to choose
// (1)is n prime?
// (2)printf prime from 1 to n
// (3)count prime from 1 to n
// (4)sum prime from 1 to n

#include <stdio.h>

void showMenu();
int isPrime(int n);
void printfPrime(int n);
void countPrime(int n);
void sumPrime(int n);

int main() {
  int choice;
  do {
    showMenu();
    printf("Enter choice: ");
    scanf("%d", &choice);
    switch (choice) {
    case 1: {
      int n;
      printf("\nEnter n: ");
      scanf("%d", &n);
      isPrime(n) ? printf("%d is prime", n) : printf("%d is not prime", n);
      break;
    }
    case 2: {
      int n;
      printf("\nEnter n: ");
      scanf("%d", &n);
      printfPrime(n);
      break;
    }
    case 3: {
      int n;
      printf("\nEnter n: ");
      scanf("%d", &n);
      countPrime(n);
      break;
    }
    case 4: {
      int n;
      printf("\nEnter n: ");
      scanf("%d", &n);
      sumPrime(n);
      break;
    }
    default:
      printf("Bye bye!");
    }
  } while (choice >= 1 && choice <= 4);

  return 0;
}

void showMenu() {
  printf("\n\n\n");
  printf("\n=============================");
  printf("\n|| 1.     check prime      ||");
  printf("\n|| 2.     printf prime     ||");
  printf("\n|| 3.     count prime      ||");
  printf("\n|| 4.     sum prime        ||");
  printf("\n|| OTHER. EXIT             ||");
  printf("\n=============================\n");
}

int isPrime(int n) {
  int i;
  if (n < 2)
    return 0;
  for (i = 2; i * i <= n; i++) {
    if (n % i == 0)
      return 0;
  }
  return 1;
}

void printfPrime(int n) {
  int i;
  for (i = 2; i <= n; i++) {
    if (isPrime(i) == 1) {
      printf("%d ", i);
    }
  }
}

void countPrime(int n) {
  int i, count = 0;
  for (i = 2; i <= n; i++) {
    if (isPrime(i) == 1) {
      count += 1;
    }
  }
  printf("\nCount: %d", count);
}

void sumPrime(int n) {
  int i, sum = 0;
  for (i = 2; i <= n; i++) {
    if (isPrime(i) == 1) {
      sum += i;
    }
  }
  printf("\nSum: %d", sum);
}
