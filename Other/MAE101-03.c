// by bihoang
// Version: 1.1

#include <math.h>
#include <stdio.h>

// Dinh nghia ham fx
double f(double x) {
  return x * x * x - x - 2; // ham so x^3-x-2
}

// phuong phap chia doi
double bisection_method(double (*f)(double), double a, double b, double TOL,
                        int NMAX) {
  int N = 1;
  double c;
  while (N <= NMAX) {
    c = (a + b) / 2;
    if (f(c) == 0 || (b - a) / 2 < TOL) {
      return c; // output gia tri gan dung cua nghiem
    }
    N++;
    if (f(c) * f(a) > 0) {
      a = c;
    } else {
      b = c;
    }
  }
  return -1; // phuong phap that bai sau nmax buoc
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

  printf("Enter tol: "); // nhap sai so
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
