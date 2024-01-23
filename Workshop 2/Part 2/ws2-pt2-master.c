#include <stdio.h>

void showMenu() {
  printf("\n\n\n");
  printf("        ,\\\n");
  printf("       # (_\n");
  printf("         _)\\##\n");
  printf("     ###/((_\n");
  printf("          ))\\####\n");
  printf("        _((     \n");
  printf("   ####/  )\\\n");
  printf("        ,;;``;,\n");
  printf("       (_______)\n");
  printf("         \\===/\n");
  printf("         /===\\\n");
  printf("        /=====\\");
  printf("\n======================");
  printf("\n||      Choose      ||");
  printf("\n||==================||");
  printf("\n||   01   ||   06   ||");
  printf("\n||   02   ||   07   ||");
  printf("\n||   03   ||   08   ||");
  printf("\n||   04   ||   09   ||");
  printf("\n||   05   ||  OTHER ||");
  printf("\n======================\n");
}

void printNumber1To100();
void printNumberDiv3and5();
double square(int n);
void swapNumber(int n1, int n2);
int isOdd(int n);
int sumSeries(int n);
int factorial(int n);
int convertToBinary(int n);
int reverseDigits(int n);
int isPrime(int n);
int isPerfectNumber(int n);

int main() {
  int choice;
  do {
    showMenu();
    printf("Enter program: ");
    scanf("%d", &choice);
    printf("======================\n");
    switch (choice) {
    case 1: {
      printNumber1To100();
      break;
    }
    case 2: {
      printNumberDiv3and5();
      break;
    }
    case 3: {
      int n;
      printf("Enter number: ");
      scanf("%d", &n);
      printf("%d^2 = %.2lf", n, square(n));
      break;
    }
    case 4: {
      int n1, n2;
      printf("Enter n1: ");
      scanf("%d", &n1);
      printf("Enter n2: ");
      scanf("%d", &n2);
      swapNumber(n1, n2);
      break;
    }
    case 5: {
      int n;
      printf("Enter n: ");
      scanf("%d", &n);
      isOdd(n) ? printf("%d is odd", n) : printf("%d is even", n);
      break;
    }
    case 6: {
      int n;
      printf("Enter n: ");
      scanf("%d", &n);
      printf("Sum series: %d", sumSeries(n));
      break;
    }
    case 7: {
      int n;
      printf("Enter n: ");
      scanf("%d", &n);
      printf("%d ", convertToBinary(n));
      break;
    }
    case 8: {
      int n;
      do {
        printf("Enter n: ");
        scanf("%d", &n);
      } while (n < 2);

      isPrime(n) ? printf("%d is prime", n) : printf("%d is not prime", n);
      break;
    }
    case 9: {
      int n1, n2, i;
      do {
        printf("Enter n1: ");
        scanf("%d", &n1);
        printf("Enter n2: ");
        scanf("%d", &n2);
      } while (n1 < 0 || n2 < 0);

      printf("The perfect number between %d and %d are: ", n1, n2);

      for (i = n1; i <= n2; i++) {
        if (isPerfectNumber(i))
          printf("%d ", i);
      }
      break;
    }
    default:
      printf("Bye Bye!!");
    }

  } while (choice >= 1 && choice <= 9);
  return 0;
}

void printNumber1To100() {
  int i = 1;
  while (i <= 100) {
    printf("%d ", i);
    i++;
  }
}

void printNumberDiv3and5() {
  int i = 1;
  while (i <= 100) {
    if (i % 3 == 0 && i % 5 == 0)
      printf("%d ", i);
    i++;
  }
}

double square(int n) { return n * n; }

void swapNumber(int n1, int n2) {
  int t = n1;
  n1 = n2;
  n2 = t;
  printf("n1 = %d\nn2 = %d", n1, n2);
}

int isOdd(int n) {
  if (n % 2 == 0)
    return 0;
  return 1;
}

int sumSeries(int n) {
  int sum = 0, i;
  for (i = 1; i <= n; i++) {
    sum += factorial(i);
  }
  return sum;
}

int factorial(int n) {
  int i, result = 1;
  for (i = 1; i < n; i++) {
    result *= i;
  }
  return result;
}

int convertToBinary(int n) {
  int i = n, temp = 1;
  while (i > 0) {
    if (i % 2 == 0)
      temp *= 10;
    else
      temp = temp * 10 + i % 2;
    i /= 2;
  }

  return reverseDigits(temp) / 10;
}

int reverseDigits(int n) {
  int reverse = 0;
  do {
    int remainder = n % 10;
    n /= 10;
    reverse = reverse * 10 + remainder;
  } while (n > 0);
  return reverse;
}

int isPrime(int n) {
  int i;
  for (i = 2; i < n; i++) {
    if (n % i == 0)
      return 0;
  }
  return 1;
}

int isPerfectNumber(int n) {
  int i, temp = 0;
  for (i = 1; i < n; i++) {
    if (n % i == 0)
      temp += i;
  }
  if (temp == n)
    return 1;
  else
    return 0;
}
