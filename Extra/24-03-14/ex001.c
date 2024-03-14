#include <math.h>
#include <stdio.h>

// Ex1
void s1SumFactorial(int x);
int s1Factorial(int x);

// Ex2
void s2SumSeries(int x, int n);

// Ex3
void s3ProductDigits();

// Ex4
int isPalindrome(int x);

// Ex5
void findExponent(int a, int *count);
int checkExponent(int a, int count);

int main() {
  int x, n;
  do {
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter n: ");
    scanf("%d", &n);
  } while (x <= 0 || n <= 0);

  s1SumFactorial(x);
  s2SumSeries(x, n);
  s3ProductDigits();

  int num1;
  do {
    printf("Ex4:\nEnter number: ");
    scanf("%d", &num1);
  } while (num1 <= 0);
  isPalindrome(num1) ? printf("Yes\n") : printf("No\n");

  int num2, count = 0;
  do {
    printf("Ex5:\nEnter number: ");
    scanf("%d", &num2);
  } while (num2 <= 0);
  findExponent(num2, &count);
  checkExponent(num2, count) ? printf("%d\n", count + 1) : printf("None");

  return 0;
}

// Ex1
void s1SumFactorial(int x) {
  int sum = 0;
  int i;
  for (i = 1; i <= x; i++) {
    sum += s1Factorial(i);
  }
  printf("Ex1: %d\n", sum);
}

int s1Factorial(int x) {
  int p = 1;
  int i;
  for (i = 2; i <= x; i++)
    p *= i;
  return p;
}

// Ex2
void s2SumSeries(int x, int n) {
  double sum = 1;
  int i;
  for (i = 1; i <= n; i++) {
    sum += 1.0 / pow(x, i);
  }
  printf("Ex2: %.6lf\n", sum);
}

// Ex 3
void s3ProductDigits() {
  int x;
  do {
    printf("Enter number: ");
    scanf("%d", &x);
  } while (x <= 0);

  int sum = 1;
  do {
    sum *= x % 10;
    x /= 10;
  } while (x > 0);
  printf("Ex3: %d\n", sum);
}

// Ex4
int isPalindrome(int x) {
  int result = 0, x_orin = x;
  do {
    int digit = x % 10;
    result = result * 10 + digit;
    x /= 10;
  } while (x != 0);

  if (result == x_orin)
    return 1;
  else
    return 0;
}

// Ex5
void findExponent(int a, int *count) {
  int root = 4;
  if (a % root == 0) {
    while (a > root) {
      a /= root;
      *count += 1;
    }
  }
}

int checkExponent(int a, int count) {
  int root = 4, c = root;
  int i;
  for (i = 1; i <= count; i++) {
    c *= root;
  }
  if (a == c)
    return 1;
  else
    return 0;
}
