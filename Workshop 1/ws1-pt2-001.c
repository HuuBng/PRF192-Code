#include <stdio.h>

int main() {
  double num1, num2, result;
  char op;
  printf("Enter an exxpression (+ - * /): ");
  scanf("%lf %c%lf", &num1, &op, &num2);

  switch (op) {
  case '+':
    result = num1 + num2;
    break;
  case '-':
    result = num1 - num2;
    break;
  case '*':
    result = num1 * num2;
    break;
  case '/':
    if (num2 == 0) {
      printf("Divide by 0");
      goto END;
    } else
      result = num1 / num2;
    break;
  default:
    printf("Op not supported");
    goto END;
  }
  printf("Result = %.2lf", result);

END:
  return 0;
}
