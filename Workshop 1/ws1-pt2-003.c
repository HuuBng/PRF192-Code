#include <stdio.h>

int main() {
  int S = 0, num;

  do {
    printf("Enter number: ");
    scanf("%d", &num);
    if (num != 0)
      S += num;
  } while (num != 0);

  printf("S = %d", S);
  return 0;
}
