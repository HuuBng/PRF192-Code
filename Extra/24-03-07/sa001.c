#include <stdio.h>
#include <string.h>

void *ltrim(char s[]);
void *rtrim(char s[]);
void *trim(char s[]);

int main() {
  char s[30];
  fgets(s, sizeof(s), stdin);
  strtok(s, "\n");

  trim(s);
  puts(s);

  return 0;
}

void *ltrim(char s[]) {
  int i = 0;
  while (s[i] == ' ')
    i++;
  if (i > 0)
    strcpy(&s[0], &s[i]);
  return s;
}

void *rtrim(char s[]) {
  int i = strlen(s) - 1;
  while (s[i] == ' ')
    i--;
  s[i + 1] = '\0';
  return s;
}

void *trim(char s[]) {
  ltrim(s);
  rtrim(s);
  char *ptr = strstr(s, "  ");
  while(ptr != NULL) {
    strcpy(ptr, ptr + 1);
    ptr = strstr(s, "  ");
  }
  return s;
}
