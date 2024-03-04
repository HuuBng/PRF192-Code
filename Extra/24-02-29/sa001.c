#include <stdio.h>

void inputArray2D(int a[][50], int row, int column);
void printArray2D(int a[][50], int row, int column);
void evenMax(int a[][50], int row, int column);

int main() {
  int a[50][50];
  int row, column;
  printf("Enter how many row: ");
  scanf("%d", &row);
  printf("Enter how many column: ");
  scanf("%d", &column);

  inputArray2D(a, row, column);
  printArray2D(a, row, column);
  evenMax(a, row, column);

  return 0;
}

void evenMax(int a[][50], int row, int column) {
  int i, j, evenFirst = -1;

  for (i = 0; i < row; i++) {
    for (j = 0; j < column; j++) {
      if (a[i][j] % 2 == 0) {
        evenFirst = a[i][j];
        break;
      }
    }
  }

  int evenMax = evenFirst;

  for (i = 0; i < row; i++) {
    for (j = 0; j < column; j++) {
      if (evenFirst == -1)
        break;
      evenMax = (a[i][j] % 2 == 0 && a[i][j] > evenMax) ? a[i][j] : evenMax;
    }
    printf("\n");
  }

  if (evenFirst != -1)
    printf("evenMax: %d", evenMax);
  else
    printf("There is no evenMax");
}

void printArray2D(int a[][50], int row, int column) {
  int i, j;
  for (i = 0; i < row; i++) {
    for (j = 0; j < column; j++) {
      printf("%d\t", a[i][j]);
    }
    printf("\n");
  }
}

void inputArray2D(int a[][50], int row, int column) {
  int i, j;
  for (i = 0; i < row; i++) {
    for (j = 0; j < column; j++) {
      printf("[%d][%d] = ", i, j);
      scanf("%d", &a[i][j]);
    }
  }
}
