#include <stdio.h>

int isValidDate(int d, int m, int y);

int main() {
  int d, m, y;
  printf("Enter date: ");
  scanf("%d", &d);
  printf("Enter month: ");
  scanf("%d", &m);
  printf("Enter year: ");
  scanf("%d", &y);

  isValidDate(d, m, y) ? printf("Valid date") : printf("Invalid date");

  return 0;
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
