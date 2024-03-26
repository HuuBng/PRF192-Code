// by pinku
// Version: 1.1

#include <math.h>
#include <stdio.h>
// https://cplusplus.com/reference/cmath/ //How to get input using math.h
double f(double x);
double leftEndPoint(double (*f)(double), double a, double b, int n);
double rightEndPoint(double (*f)(double), double a, double b, int n);
double midPoint(double (*f)(double), double a, double b, int n);
double trapezoidal(double (*f)(double), double a, double b, int n);
double simpson(double (*f)(double), double a, double b, int n);

int main() {
  double a, b;
  int n;
  do {
    printf("Enter lower limit a: ");
    scanf("%lf", &a);
    printf("Enter upper limit b: ");
    scanf("%lf", &b);
    printf("Enter subinterval: ");
    scanf("%d", &n);
    if (a >= b || n < 1) {
      printf("Invalid\n");
    }
  } while (a >= b || n < 1);
  // Calculate integral with 5 methods
  double left = leftEndPoint(f, a, b, n);
  double right = rightEndPoint(f, a, b, n);
  double mid = midPoint(f, a, b, n);
  double trap = trapezoidal(f, a, b, n);
  double simp = simpson(f, a, b, n);

  // Print result
  printf("Left end point: %f\n", left);
  printf("Right end point: %f\n", right);
  printf("Mid point: %f\n", mid);
  printf("Trapezoidal: %f\n", trap);
  printf("Simpson: %f\n", simp);

  return 0;
}

// Define Function
double f(double x) {
  return x * x; // Ex: f(x) = x^2
}

// Calculate integral with leftEndPoint method
double leftEndPoint(double (*f)(double), double a, double b, int n) {
  double h = (b - a) / n;
  double sum = 0;
  int i;
  for (i = 0; i < n; i++) {
    sum += f(a + i * h);
  }
  return h * sum;
}

// Calculate integral with rightEndPoint method
double rightEndPoint(double (*f)(double), double a, double b, int n) {
  double h = (b - a) / n;
  double sum = 0;
  int i;
  for (i = 0; i < n; i++) {
    sum += f(a + (i + 1) * h);
  }
  return h * sum;
}

// MidPoint method
double midPoint(double (*f)(double), double a, double b, int n) {
  double h = (b - a) / n;
  double sum = 0;
  int i;
  for (i = 0; i < n; i++) {
    sum += f(a + (i + 0.5) * h);
  }
  return h * sum;
}

// Trapezoidal method
double trapezoidal(double (*f)(double), double a, double b, int n) {
  double h = (b - a) / n;
  double sum = 0.5 * (f(a) + f(b));
  int i;
  for (i = 1; i < n; i++) {
    sum += f(a + i * h);
  }
  return h * sum;
}

// Simpson method
double simpson(double (*f)(double), double a, double b, int n) {
  double h = (b - a) / n;
  double sum = f(a) + f(b);
  int i;
  for (i = 1; i < n; i++) {
    if (i % 2 == 0) {
      sum += 2 * f(a + i * h);
    } else {
      sum += 4 * f(a + i * h);
    }
  }
  return h / 3 * sum;
}
