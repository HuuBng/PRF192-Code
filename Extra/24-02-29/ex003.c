#include <stdio.h>
#include <string.h>


int main() {
  char s1[31], c;
  fgets(s1, sizeof(s1), stdin);
  scanf("%c", &c);

  int i;
  for(i = 0; i < strlen(s1); i++) {
    if(s1[i] == c) {
      printf("%d", i);
      break;
    }
  }
  return 0;
}
