#include <stdio.h>
#include <string.h>

int main() {
  char s1[50];
  printf("Enter s1: ");
  fgets(s1, sizeof(s1), stdin);
  strtok(s1, "\n");

  int i;
  int mid = strlen(s1) / 2;
  for (i = 0; i < mid; i++) { // change s1[i] s1[strlen(s1) - i - 1]
    char t = s1[i];
    s1[i] = s1[strlen(s1) - i - 1];
    s1[strlen(s1) - i - 1] = t;
  }

  puts(s1);
}
