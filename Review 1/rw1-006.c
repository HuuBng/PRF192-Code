#include <stdio.h>

void topLeftTriangle(int row);
void botLeftTriangle(int row);
void topRightTriangle(int row);
void botRightTriangle(int row);
void hollowRectangle(int row, int column);
void hollowBotLeftTriangle(int row);

int main() {
  int row, column;
  do {
    printf("Enter row: ");
    scanf("%d", &row);
    printf("Enter column: ");
    scanf("%d", &column);
  } while (row <= 0 || column <= 0);

  botLeftTriangle(row);
  topLeftTriangle(row);
  topRightTriangle(row);
  botRightTriangle(row);
  hollowRectangle(row, column);
  hollowBotLeftTriangle(row);

  return 0;
}

void topLeftTriangle(int row) {
  int i, j;
  for (i = row; i >= 1; i--) {
    for (j = 1; j <= i; j++)
      printf("*");
    printf("\n");
  }
  printf("\n");
}

void botLeftTriangle(int row) {
  int i, j;
  for (i = 1; i <= row; i++) {
    for (j = 1; j <= i; j++) {
      printf("*");
    }
    printf("\n");
  }
  printf("\n");
}

void topRightTriangle(int row) {
  int i, j;
  for (i = row; i >= 1; i--) {
    for (j = 1; j <= row - i; j++)
      printf(" ");
    for (j = 1; j <= i; j++)
      printf("*");
    printf("\n");
  }
  printf("\n");
}

void botRightTriangle(int row) {
  int i, j;
  for (i = row; i >= 1; i--) {
    for (j = 1; j < i; j++)
      printf(" ");
    for (j = 1; j <= row - i + 1; j++)
      printf("*");
    printf("\n");
  }
  printf("\n");
}

void hollowRectangle(int row, int column) {
  int i, j;
  for (i = 1; i <= row; i++) {
    for (j = 1; j <= column; j++) {
      if (i == 1 || i == row || j == 1 || j == column)
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }
  printf("\n");
}

void hollowBotLeftTriangle(int row) {
  int i, j;
  for (i = 1; i <= row; i++) {
    for (j = 1; j <= i; j++) {
      if (i == 1 || i == row || j == 1 || j == i)
        printf("*");
      else
        printf(" ");
    }
    printf("\n");
  }
  printf("\n");
}
