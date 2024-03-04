#include <stdio.h>
#include <string.h>

int main() {
  char s1[50];
  printf("Enter s1: ");
  fgets(s1, sizeof(s1), stdin);
  strtok(s1, "\n");

  char s2[50];
  printf("Enter s2: ");
  fgets(s2, sizeof(s2), stdin);
  strtok(s2, "\n");

  if (strstr(s1, s2) == NULL)
    printf("NO");
  else
    printf("YES");
}
