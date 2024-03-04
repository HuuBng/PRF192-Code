#include <stdio.h>
#include <string.h>

int main() {
  int n = 5;
  char name[n][30];
  char s[100] = {'\0'};
  int i;
  for (i = 0; i < n; i++) {
    printf("Name[%d] = ", i + 1);
    fgets(name[i], sizeof(name[i]), stdin);
    strtok(name[i], "\n");
    strcat(name[i], " ");
    strcat(s, name[i]);
  }

  puts(s);

  return 0;
}
