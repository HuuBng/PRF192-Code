#include <stdio.h>

double makeDouble(int integral, int fraction);

int main() {
  int integral, fraction;
  printf("Enter integral part: ");
  scanf("%d", &integral);

  do {
    printf("Enter fraction part: ");
    scanf("%d", &fraction);
  } while (fraction < 0);

  printf("%lf", makeDouble(integral, fraction));
  return 0;
}

double makeDouble(int integral, int fraction) {
  double d_f = fraction;
  while (d_f >= 1)
    d_f /= 10;
  if (integral < 0)
    return integral - d_f;
  return integral + d_f;
}
