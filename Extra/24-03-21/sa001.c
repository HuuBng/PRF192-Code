#include <stdio.h>

int main() {
  FILE *f = fopen("C:\\Users\\Acer\\OneDrive\\Documents\\Study\\01 - PRF192 - AnhNTM32\\Code\\Extra\\24-03-21\\example.txt", "w");
  fprintf(f, "hahaha");
  fclose(f);
}
