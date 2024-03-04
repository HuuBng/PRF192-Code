#include <stdio.h>

int isPalindrome(int n);

int main() {
  int n;
  do {
    printf("Enter n: ");
    scanf("%d", &n);
  } while (n < 0);

  isPalindrome(n) ? printf("%d is palindrome number", n)
                  : printf("%d is not palindrome number", n);

  return 0;
}

int isPalindrome(int n) {
  int result = 0, n_orin = n;
  do {
    int digit = n % 10;
    result = result * 10 + digit;
    n /= 10;
  } while (n != 0);

  if (result == n_orin)
    return 1;
  else
    return 0;
}
