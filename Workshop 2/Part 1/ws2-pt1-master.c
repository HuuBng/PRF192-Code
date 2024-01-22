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
  printf("\n||   05   ||   10   ||");
  printf("\n======================\n");
}

int isPrime(int n);
int isValidDate(int d, int m, int y);
int getRelPos(double x, double y, double r);
double factorial(int n);
double fiboPos(int n);
int isFibo(int n);
int sumDigits(int n);
int productDigits(int n);
int reverseDigits(int n);
double makeDouble(int integral, int fraction);
int gcd(int a, int b);
int lcm(int a, int b);
void printMinMaxDigits(int n);

int main() {
  int choice;
  do {
    showMenu();
    printf("Enter program: ");
    scanf("%d", &choice);
    printf("======================\n");
    switch (choice) {
    case 1: {
      int n, i;
      do {
        printf("Enter n(n>2): ");
        scanf("%d", &n);
      } while (n < 2);

      for (i = 2; i <= n; i++) {
        if (isPrime(i))
          printf("%d ", i);
      }
      break;
    }
    case 2: {
      int d, m, y;
      printf("Enter date: ");
      scanf("%d", &d);
      printf("Enter month: ");
      scanf("%d", &m);
      printf("Enter year: ");
      scanf("%d", &y);

      isValidDate(d, m, y) ? printf("Valid date") : printf("Invalid date");

      break;
    }
    case 3: {
      double x, y, r, result;
      printf("Enter x: ");
      scanf("%lf", &x);
      printf("Enter y: ");
      scanf("%lf", &y);
      do {
        printf("Enter r: ");
        scanf("%lf", &r);
      } while (r < 0);

      result = getRelPos(x, y, r);

      if (result == 1)
        printf("The point is in the circle");
      else if (result == 0)
        printf("The point is on the circle");
      else
        printf("The point is out of the circle");

      break;
    }
    case 4: {
      int n;
      do {
        printf("Enter number: ");
        scanf("%d", &n);
      } while (n < 0);

      printf("n! = %lf", factorial(n));
      break;
    }
    case 5: {
      int n;

      do {
        printf("Enter position n: ");
        scanf("%d", &n);
      } while (n < 1);

      printf("%.2lf", fiboPos(n));
      break;
    }
    case 6: {
      int n;

      do {
        printf("Enter n: ");
        scanf("%d", &n);
      } while (n < 1);

      isFibo(n) ? printf("It is a Fibonacci element.")
                : printf("It is not a Fibonacci element.");

      break;
    }
    case 7: {
      int n;

      do {
        printf("Enter number: ");
        scanf("%d", &n);

        if (n >= 0) {
          printf("Sum: %d\n", sumDigits(n));
          printf("Product: %d\n", productDigits(n));
          printf("Reverse: %d\n\n", reverseDigits(n));
        }
      } while (n >= 0);
      break;
    }
    case 8: {
      int integral, fraction;
      printf("Enter integral part: ");
      scanf("%d", &integral);

      do {
        printf("Enter fraction part: ");
        scanf("%d", &fraction);
      } while (fraction < 0);

      printf("%lf", makeDouble(integral, fraction));
      break;
    }
    case 9: {
      int a, b;
      do {
        printf("Enter a: ");
        scanf("%d", &a);
        printf("Enter b: ");
        scanf("%d", &b);
      } while (a <= 0 || b <= 0);
      printf("\ngcd: %d", gcd(a, b));
      printf("\nlcm: %d", lcm(a, b));
      break;
    }
    case 10: {
      int n;
      do {
        printf("Enter n: ");
        scanf("%d", &n);
        printMinMaxDigits(n);
      } while (n < 0);
      break;
    }
    default:
      printf("Bye Bye!!");
    }

  } while (choice >= 1 && choice <= 10);
  return 0;
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
  if (d <= maxd)
    return 1;
  else
    return 0;
}

int getRelPos(double x, double y, double r) {
  double d2 = x * x + y * y;
  double r2 = r * r;
  if (d2 < r2)
    return 1;
  else if (d2 == r2)
    return 0;
  else
    return -1;
}

double factorial(int n) {
  double p = 1;
  int i;
  for (i = 2; i <= n; i++)
    p *= i;
  return p;
}

double fiboPos(int n) {
  int t1 = 1, t2 = 1, f = 1, i;
  for (i = 3; i <= n; i++) {
    f = t1 + t2;
    t1 = t2;
    t2 = f;
  }
  return f;
}

int isFibo(int n) {
  int t1 = 1, t2 = 1, f = 1;
  if (n == 1)
    return 1;
  while (f < n) {
    f = t1 + t2;
    t1 = t2;
    t2 = f;
  }
  if (n == f)
    return 1;
  return 0;
}

int sumDigits(int n) {
  int sum = 0;
  do {
    int remainder = n % 10;
    n /= 10;
    sum += remainder;
  } while (n > 0);
  return sum;
}

int productDigits(int n) {
  int product = 1;
  if (n == 0)
    product = 0;
  do {
    int remainder = n % 10;
    n /= 10;
    if (remainder == 0)
      continue;
    product *= remainder;
  } while (n > 0);
  return product;
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

double makeDouble(int integral, int fraction) {
  double d_f = fraction;
  while (d_f >= 1)
    d_f /= 10;
  if (integral < 0)
    return integral - d_f;
  return integral + d_f;
}

int gcd(int a, int b) {
  while (a != b) {
    if (a > b)
      a -= b;
    else
      b -= a;
  }
  return a;
}

int lcm(int a, int b) { return (a * b) / gcd(a, b); }

void printMinMaxDigits(int n) {
  int digit, min, max;
  digit = n % 10;
  n /= 10;
  min = max = digit;
  while (n > 0) {
    digit = n % 10;
    n = n / 10;
    if (min > digit)
      min = digit;
    if (max < digit)
      max = digit;
  }
  printf("Min: %d\n", min);
  printf("Max: %d\n", max);
}
