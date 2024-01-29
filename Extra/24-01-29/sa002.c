#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int *p;
  p = (int *)malloc(sizeof(int));

  printf("&p = %d\n", &p);
  printf("p = %d\n", p);
  *p = 13000;
  printf("*p = %d\n", *p);

  free(p);
  return 0;
}
