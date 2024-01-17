#include <stdio.h>
const int M = 1000000;

int main() {
  int pa = 9 * M, pd = 3.6 * M, it;
  int income, n;
  printf("Enter your income this year: ");
  scanf("%d", &income);
  printf("Number of dependent: ");
  scanf("%d", &n);

  int tf = 12 * (pa + n * pd);
  int ti = income - tf;

  if (ti <= 0) {
    it = 0;
    ti = 0;
  } else if (ti <= 5 * M)
    it = ti * 0.05;
  else if (ti <= 10 * M)
    it = 5 * M * 0.05 + (ti - 5 * M) * 0.1;
  else if (ti <= 18 * M)
    it = 5 * M * 0.05 + 5 * M * 0.1 + (ti - 10 * M) * 0.15;
  else
    it = 5 * M * 0.05 + 5 * M * 0.1 + 8 * M * 0.15 + (ti - 18 * M) * 0.2;

  printf("\nTax-free income: %d\n", tf);
  printf("Taxable income: %d\n", ti);
  printf("income tax: %d\n", it);

  return 0;
}
