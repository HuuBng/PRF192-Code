#include <stdio.h>

int isPerfectNumber(int n);

int main() {
  int n1, n2, i;
  do {
    printf("Enter n1: ");
    scanf("%d", &n1);
    printf("Enter n2: ");
    scanf("%d", &n2);
  } while (n1 < 0 || n2 < 0);

  printf("The perfect number between %d and %d are: ", n1, n2);

  for (i = n1; i <= n2; i++) {
    if (isPerfectNumber(i))
      printf("%d ", i);
  }
  return 0;
}

int isPerfectNumber(int n) {
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
