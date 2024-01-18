// Output: create the following shapes using function
// rectangle(n, m) | triangle1(n) | triangle2(n) | triangle3(n)
// *****           | ***          | ***          |   *
// *****           | **           |  **          |  **
// *****           | *            |   *          | ***

#include <stdio.h>

void rectangle(int row, int column);
void triangle1(int row);
void triangle2(int row);
void triangle3(int row);

int main() {
  int row, column;
  printf("Enter row: ");
  scanf("%d", &row);
  printf("Enter column: ");
  scanf("%d", &column);

  rectangle(row, column);
  triangle1(row);
  triangle2(row);
  triangle3(row);

  return 0;
}

void rectangle(int row, int column) {
  int i, j;
  for (i = 1; i <= row; i++) {
    for (j = 1; j <= column; j++) {
      printf("*");
    }
    printf("\n");
  }
  printf("\n");
}

void triangle1(int row) {
  int i, j;
  for (i = 1; i <= row; i++) {
    for (j = 1; j <= i; j++) {
      printf("*");
    }
    printf("\n");
  }
  printf("\n");
}

void triangle2(int row) {
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

void triangle3(int row) {
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
