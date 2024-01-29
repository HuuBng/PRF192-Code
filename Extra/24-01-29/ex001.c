// Input: p1, p2
// Output: using pointer to calculate (+ - * /) p1 and p2
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  double *p1 = (double *)malloc(8);
  double *p2 = (double *)malloc(8);

  printf("Enter p1: ");
  scanf("%lf", p1);
  printf("Enter p2: ");
  scanf("%lf", p2);

  printf("p1 + p2 = %lf\n", *p1 + *p2);
  printf("p1 - p2 = %lf\n", *p1 - *p2);
  printf("p1 * p2 = %lf\n", *p1 * *p2);
  printf("p1 / p2 = %lf\n", *p1 / *p2);

  free(p1);
  free(p2);
}
