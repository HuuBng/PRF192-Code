// by bihoang
// Version: 1.1

#include <math.h>
#include <stdio.h>

// Định nghĩa hàm f(x)
double f(double x) {
  return x * x * x - x - 2; // Hàm số x^3 + 3x 2 2
}

// Phương pháp chia đôi
double bisection_method(double (*f)(double), double a, double b, double TOL,
                        int NMAX) {
  int N = 1;
  double c;
  while (N <= NMAX) {
    c = (a + b) / 2;
    if (f(c) == 0 || (b - a) / 2 < TOL) {
      return c; // Output giá trị gần đúng của nghiệm
    }
    N++;
    if (f(c) * f(a) > 0) {
      a = c;
    } else {
      b = c;
    }
  }
  return -1; // Phương pháp thất bại sau NMAX bước
}

int main() {
  double a, b, TOL;
  int NMAX;

  printf("Enter endpoint value a: ");
  scanf("%lf", &a);

  printf("Enter endpoint value b: ");
  scanf("%lf", &b);

  while (f(a) * f(b) > 0) {
    printf("\nf(a) and f(b) dont have opposite site\n");
    printf("Enter endpoint value a: ");
    scanf("%lf", &a);

    printf("Enter endpoint value b: ");
    scanf("%lf", &b);
  }

  printf("Enter tol: "); // Nhập sai số
  scanf("%lf", &TOL);

  printf("Enter iterations: ");
  scanf("%d", &NMAX);

  double root = bisection_method(f, a, b, TOL, NMAX);
  if (root != -1) {
    printf("Root is: %lf\n", root);
  } else {
    printf("Bisection algorithm failed after %d iterations.\n", NMAX);
  }

  return 0;
}
