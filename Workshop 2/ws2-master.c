#include <stdio.h>

// Menus
void showPreMenu();
void showMenuPt1();
void showMenuPt2();

// Part 1
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

// Part 2
void pt2printNumber1To100();
void pt2printNumberDiv3and5();
double pt2square(int n);
void pt2swapNumber(int n1, int n2);
int pt2isOdd(int n);
int pt2sumSeries(int n);
int pt2factorial(int n);
int pt2convertToBinary(int n);
int pt2reverseDigits(int n);
int pt2isPrime(int n);
int pt2isPerfectNumber(int n);

int main() {

  int preChoice;
  do {
    showPreMenu();
    printf("Enter part: ");
    scanf("%d", &preChoice);
    int choice;
    if(preChoice == 1) {
      do {
        showMenuPt1();
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
    } else if(preChoice == 2) {
      do {
        showMenuPt2();
        printf("Enter program: ");
        scanf("%d", &choice);
        printf("======================\n");
        switch (choice) {
        case 1: {
          pt2printNumber1To100();
          break;
        }
        case 2: {
          pt2printNumberDiv3and5();
          break;
        }
        case 3: {
          int n;
          printf("Enter number: ");
          scanf("%d", &n);
          printf("%d^2 = %.2lf", n, pt2square(n));
          break;
        }
        case 4: {
          int n1, n2;
          printf("Enter n1: ");
          scanf("%d", &n1);
          printf("Enter n2: ");
          scanf("%d", &n2);
          pt2swapNumber(n1, n2);
          break;
        }
        case 5: {
          int n;
          printf("Enter n: ");
          scanf("%d", &n);
          pt2isOdd(n) ? printf("%d is odd", n) : printf("%d is even", n);
          break;
        }
        case 6: {
          int n;
          printf("Enter n: ");
          scanf("%d", &n);
          printf("Sum series: %d", pt2sumSeries(n));
          break;
        }
        case 7: {
          int n;
          printf("Enter n: ");
          scanf("%d", &n);
          printf("%d ", pt2convertToBinary(n));
          break;
        }
        case 8: {
          int n;
          do {
            printf("Enter n: ");
            scanf("%d", &n);
          } while (n < 2);

          pt2isPrime(n) ? printf("%d is prime", n) : printf("%d is not prime", n);
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
            if (pt2isPerfectNumber(i))
              printf("%d ", i);
          }
          break;
        }
        default:
          printf("Bye Bye!!");
        }

      } while (choice >= 1 && choice <= 9);
    }


  } while(preChoice >= 1 && preChoice <= 2);


  return 0;
}

// Menus
void showPreMenu() {
  printf("\n\n\n");
  printf(" __      __                 __               __                         ___\n");
  printf("/\\ \\  __/\\ \\               /\\ \\             /\\ \\                      /'___`\\\n");
  printf("\\ \\ \\/\\ \\ \\ \\    ___   _ __\\ \\ \\/'\\     ____\\ \\ \\___     ___   _____ /\\_\\ /\\ \\\n");
  printf(" \\ \\ \\ \\ \\ \\ \\  / __`\\/\\`'__\\ \\ , <    /',__\\\\ \\  _ `\\  / __`\\/\\ '__`\\/_/// /__\n");
  printf("  \\ \\ \\_/ \\_\\ \\/\\ \\L\\ \\ \\ \\/ \\ \\ \\\\`\\ /\\__, `\\\\ \\ \\ \\ \\/\\ \\L\\ \\ \\ \\L\\ \\ // /_\\ \\\n");
  printf("   \\ `\\___x___/\\ \\____/\\ \\_\\  \\ \\_\\ \\_\\/\\____/ \\ \\_\\ \\_\\ \\____/\\ \\ ,__//\\______/\n");
  printf("    '\\/__//__/  \\/___/  \\/_/   \\/_/\\/_/\\/___/   \\/_/\\/_/\\/___/  \\ \\ \\/ \\/_____/\n");
  printf("                                                                \\ \\_\\\n");
  printf("                                                                 \\/_/\n");
  printf("             __       _                           __       ___\n");
  printf("            /\\ \\__  /' \\                         /\\ \\__  /'___`\\\n");
  printf("       _____\\ \\ ,_\\/\\_, \\                   _____\\ \\ ,_\\/\\_\\ /\\ \\\n");
  printf("      /\\ '__`\\ \\ \\/\\/_/\\ \\      _______    /\\ '__`\\ \\ \\/\\/_/// /__\n");
  printf("      \\ \\ \\L\\ \\ \\ \\_  \\ \\ \\    /\\______\\   \\ \\ \\L\\ \\ \\ \\_  // /_\\ \\\n");
  printf("       \\ \\ ,__/\\ \\__\\  \\ \\_\\   \\/______/    \\ \\ ,__/\\ \\__\\/\\______/\n");
  printf("        \\ \\ \\/  \\/__/   \\/_/                 \\ \\ \\/  \\/__/\\/_____/\n");
  printf("         \\ \\_\\                                \\ \\_\\\n");
  printf("          \\/_/                                 \\/_/\n");
  printf("\n\n");
}

void showMenuPt1() {
  printf("\n\n\n");
  printf(" __      __                 __               __                              ___     \n");
  printf("/\\ \\  __/\\ \\               /\\ \\             /\\ \\                           /'___`\\   \n");
  printf("\\ \\ \\/\\ \\ \\ \\    ___   _ __\\ \\ \\/'\\     ____\\ \\ \\___     ___   _____      /\\_\\ /\\ \\  \n");
  printf(" \\ \\ \\ \\ \\ \\ \\  / __`\\/\\`'__\\ \\ , <    /',__\\\\ \\  _ `\\  / __`\\/\\ '__`\\    \\/_/// /__ \n");
  printf("  \\ \\ \\_/ \\_\\ \\/\\ \\L\\ \\ \\ \\/ \\ \\ \\\\`\\ /\\__, `\\\\ \\ \\ \\ \\/\\ \\L\\ \\ \\ \\L\\ \\      // /_\\ \\\n");
  printf("   \\ `\\___x___/\\ \\____/\\ \\_\\  \\ \\_\\ \\_\\/\\____/ \\ \\_\\ \\_\\ \\____/\\ \\ ,__/     /\\______/\n");
  printf("    '\\/__//__/  \\/___/  \\/_/   \\/_/\\/_/\\/___/   \\/_/\\/_/\\/___/  \\ \\ \\/      \\/_____/ \n");
  printf("                                                                 \\ \\_\\               \n");
  printf("                                                                  \\/_/               \n");
  printf("              __           _                                                         \n");
  printf("             /\\ \\__      /' \\                                                        \n");
  printf("        _____\\ \\ ,_\\    /\\_, \\                                                       \n");
  printf("       /\\ '__`\\ \\ \\/    \\/_/\\ \\                                                      \n");
  printf("       \\ \\ \\L\\ \\ \\ \\_      \\ \\ \\                                                     \n");
  printf("        \\ \\ ,__/\\ \\__\\      \\ \\_\\                                                    \n");
  printf("         \\ \\ \\/  \\/__/       \\/_/                                                    \n");
  printf("          \\ \\_\\                                                                      \n");
  printf("           \\/_/                                                                      \n");
  printf("   _         __       ______         ________         __                             \n");
  printf(" /' \\      /'__`\\    /\\  ___\\       /\\_____  \\      /'_ `\\                           \n");
  printf("/\\_, \\    /\\_\\L\\ \\   \\ \\ \\__/       \\/___//'/'     /\\ \\L\\ \\                          \n");
  printf("\\/_/\\ \\   \\/_/_\\_<_   \\ \\___``\\         /' /'      \\ \\___, \\                         \n");
  printf("   \\ \\ \\    /\\ \\L\\ \\   \\/\\ \\L\\ \\      /' /'         \\/__,/\\ \\                        \n");
  printf("    \\ \\_\\   \\ \\____/    \\ \\____/     /\\_/                \\ \\_\\                       \n");
  printf("     \\/_/    \\/___/      \\/___/      \\//                  \\/_/                       \n");
  printf("                                                                                     \n");
  printf("                                                                                     \n");
  printf("          ___       __ __          ____         __          _     __                 \n");
  printf("        /'___`\\    /\\ \\\\ \\        /'___\\      /'_ `\\      /' \\  /'__`\\               \n");
  printf("       /\\_\\ /\\ \\   \\ \\ \\\\ \\      /\\ \\__/     /\\ \\L\\ \\    /\\_, \\/\\ \\/\\ \\              \n");
  printf("       \\/_/// /__   \\ \\ \\\\ \\_    \\ \\  _``\\   \\/_> _ <_   \\/_/\\ \\ \\ \\ \\ \\             \n");
  printf("          // /_\\ \\   \\ \\__ ,__\\   \\ \\ \\L\\ \\    /\\ \\L\\ \\     \\ \\ \\ \\ \\_\\ \\            \n");
  printf("         /\\______/    \\/_/\\_\\_/    \\ \\____/    \\ \\____/      \\ \\_\\ \\____/            \n");
  printf("         \\/_____/        \\/_/       \\/___/      \\/___/        \\/_/\\/___/             \n");
  printf("                                                                                     \n");
  printf("\n\n");
}

void showMenuPt2() {
  printf("\n\n\n");
  printf(" __      __                 __               __                              ___\n");
  printf("/\\ \\  __/\\ \\               /\\ \\             /\\ \\                           /'___`\\\n");
  printf("\\ \\ \\/\\ \\ \\ \\    ___   _ __\\ \\ \\/'\\     ____\\ \\ \\___     ___   _____      /\\_\\ /\\ \\\n");
  printf(" \\ \\ \\ \\ \\ \\ \\  / __`\\/\\`'__\\ \\ , <    /',__\\\\ \\  _ `\\  / __`\\/\\ '__`\\    \\/_/// /__\n");
  printf("  \\ \\ \\_/ \\_\\ \\/\\ \\L\\ \\ \\ \\/ \\ \\ \\\\`\\ /\\__, `\\\\ \\ \\ \\ \\/\\ \\L\\ \\ \\ \\L\\ \\      // /_\\ \\\n");
  printf("   \\ `\\___x___/\\ \\____/\\ \\_\\  \\ \\_\\ \\_\\/\\____/ \\ \\_\\ \\_\\ \\____/\\ \\ ,__/     /\\______/\n");
  printf("    '\\/__//__/  \\/___/  \\/_/   \\/_/\\/_/\\/___/   \\/_/\\/_/\\/___/  \\ \\ \\/      \\/_____/\n");
  printf("                                                                 \\ \\_\\\n");
  printf("                                                                  \\/_/\n");
  printf("              __            ___\n");
  printf("             /\\ \\__       /'___`\\\n");
  printf("        _____\\ \\ ,_\\     /\\_\\ /\\ \\\n");
  printf("       /\\ '__`\\ \\ \\/     \\/_/// /__\n");
  printf("       \\ \\ \\L\\ \\ \\ \\_       // /_\\ \\\n");
  printf("        \\ \\ ,__/\\ \\__\\     /\\______/\n");
  printf("         \\ \\ \\/  \\/__/     \\/_____/\n");
  printf("          \\ \\_\\\n");
  printf("           \\/_/\n");
  printf("   _         __       ______         ________         __\n");
  printf(" /' \\      /'__`\\    /\\  ___\\       /\\_____  \\      /'_ `\\\n");
  printf("/\\_, \\    /\\_\\L\\ \\   \\ \\ \\__/       \\/___//'/'     /\\ \\L\\ \\\n");
  printf("\\/_/\\ \\   \\/_/_\\_<_   \\ \\___``\\         /' /'      \\ \\___, \\\n");
  printf("   \\ \\ \\    /\\ \\L\\ \\   \\/\\ \\L\\ \\      /' /'         \\/__,/\\ \\\n");
  printf("    \\ \\_\\   \\ \\____/    \\ \\____/     /\\_/                \\ \\_\\\n");
  printf("     \\/_/    \\/___/      \\/___/      \\//                  \\/_/\n");
  printf("\n");
  printf("\n");
  printf("          ___       __ __          ____         __\n");
  printf("        /'___`\\    /\\ \\\\ \\        /'___\\      /'_ `\\\n");
  printf("       /\\_\\ /\\ \\   \\ \\ \\\\ \\      /\\ \\__/     /\\ \\L\\ \\\n");
  printf("       \\/_/// /__   \\ \\ \\\\ \\_    \\ \\  _``\\   \\/_> _ <_\n");
  printf("          // /_\\ \\   \\ \\__ ,__\\   \\ \\ \\L\\ \\    /\\ \\L\\ \\\n");
  printf("         /\\______/    \\/_/\\_\\_/    \\ \\____/    \\ \\____/\n");
  printf("         \\/_____/        \\/_/       \\/___/      \\/___/\n");
  printf("\n\n");
}

// Part 1
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

// Part 2
void pt2printNumber1To100() {
  int i = 1;
  while (i <= 100) {
    printf("%d ", i);
    i++;
  }
}

void pt2printNumberDiv3and5() {
  int i = 1;
  while (i <= 100) {
    if (i % 3 == 0 && i % 5 == 0)
      printf("%d ", i);
    i++;
  }
}

double pt2square(int n) { return n * n; }

void pt2swapNumber(int n1, int n2) {
  int t = n1;
  n1 = n2;
  n2 = t;
  printf("n1 = %d\nn2 = %d", n1, n2);
}

int pt2isOdd(int n) {
  if (n % 2 == 0)
    return 0;
  return 1;
}

int pt2sumSeries(int n) {
  int sum = 0, i;
  for (i = 1; i <= n; i++) {
    sum += pt2factorial(i);
  }
  return sum;
}

int pt2factorial(int n) {
  int i, result = 1;
  for (i = 1; i < n; i++) {
    result *= i;
  }
  return result;
}

int pt2convertToBinary(int n) {
  int i = n, temp = 1;
  while (i > 0) {
    if (i % 2 == 0)
      temp *= 10;
    else
      temp = temp * 10 + i % 2;
    i /= 2;
  }

  return pt2reverseDigits(temp) / 10;
}

int pt2reverseDigits(int n) {
  int reverse = 0;
  do {
    int remainder = n % 10;
    n /= 10;
    reverse = reverse * 10 + remainder;
  } while (n > 0);
  return reverse;
}

int pt2isPrime(int n) {
  int i;
  for (i = 2; i < n; i++) {
    if (n % i == 0)
      return 0;
  }
  return 1;
}

int pt2isPerfectNumber(int n) {
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
