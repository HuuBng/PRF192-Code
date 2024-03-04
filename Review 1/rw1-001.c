#include <stdio.h>
#include <string.h>

void sortName(char name[][30], int n);
void inputName(char name[][30], int n);

int main() {
  int n = 5;
  char name[n][30];

  inputName(name, n);
  sortName(name, n);

  char s[100] = {'\0'};
  int i;
  for (i = 0; i < n; i++) {
    strcat(s, name[i]);
  }

  puts(s);

  return 0;
}

void sortName(char name[][30], int n) {
  int i, j;
  char temp[50];
  for (i = 0; i < n; i++) {
    for (j = n - 1; j > i; j--) {
      if (strcmp(name[i], name[j]) > 0) {
        strcpy(temp, name[i]);
        strcpy(name[i], name[j]);
        strcpy(name[j], temp);
      }
    }
  }
}

void inputName(char name[][30], int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("Name[%d] = ", i + 1);
    fgets(name[i], sizeof(name[i]), stdin);
    strtok(name[i], "\n");
    strcat(name[i], " ");
  }
}
