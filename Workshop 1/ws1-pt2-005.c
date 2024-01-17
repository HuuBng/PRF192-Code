#include <ctype.h>
#include <stdio.h>

int main() {
  char ch = 0;
  int nVowels = 0, nConsonants = 0, nOthers = 0, i = 1;

  do {
    if (i == 1)
      printf("Enter ch: ");\
    ch = getchar();
    ch = toupper(ch);
    if (ch >= 'A' && ch <= 'Z') {
      switch (ch) {
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
        nVowels++;
        break;
      default:
        nConsonants++;
      }
    } else
      nOthers++;
    i++;
  } while (ch != '\n');

  printf("Number of vowels: %d\n", nVowels);
  printf("Number of consonants: %d\n", nConsonants);
  printf("Number of others: %d\n", nOthers);

  return 0;
}
