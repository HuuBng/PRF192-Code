#include <stdio.h>
#include <string.h>


int main() {
  char s1[31];
  fgets(s1, sizeof(s1), stdin);

  int i;
  for(i = 0; i < strlen(s1); i++) {
    if(s1[i] == '3') {
      s1[i] = 'e';
    }
  }

  printf("%s", s1);

  return 0;
}
