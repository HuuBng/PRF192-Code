// Version: 2

#include <stdio.h>
#include <stdlib.h>

#define MAX 101

void inputMatrix(float mat[][MAX], int row, int column);
void inputRowColumn(char id, int *row, int *column);
void printMatrix(float mat[][MAX], int row, int column);
void menu() {
  printf("\n");
  printf("================================\n");
  printf("|| 1.     A * B               ||\n");
  printf("|| 2.     A + B, A - B        ||\n");
  printf("|| 3.     A * real number     ||\n");
  printf("|| 4.     A - B + real number ||\n");
  printf("|| OTHER. Exit                ||\n");
  printf("================================\n");
}

int main() {
  int choice;
  do {
    menu();
    printf("\nEnter choice: ");
    scanf("%d", &choice);
    switch (choice) {
    case 1: { // m.A * m.B

      // Create matrix A
      float matA[MAX][MAX];
      int rowA, columnA;
      inputRowColumn('A', &rowA, &columnA);

      // Create matrix B
      float matB[MAX][MAX];
      int rowB, columnB;
      inputRowColumn('B', &rowB, &columnB);

      // Check compatible
      if (columnA != rowB) {
        printf("\nCan't multiply because the number of column of matrix A is "
               "not equal to the number of row of matrix B\n");
        break;
      }

      // Input matrix
      printf("Enter matrix A:\n");
      inputMatrix(matA, rowA, columnA);
      printf("Enter matrix B:\n");
      inputMatrix(matB, rowB, columnB);

      // Create a matrix C to store result
      float matC[MAX][MAX];
      int rowC = rowA, columnC = columnB;
      int i, j, k;
      for (i = 0; i < rowA; i++) {
        for (j = 0; j < columnB; j++) {
          matC[i][j] = 0;
          for (k = 0; k < columnA; k++) {
            matC[i][j] += matA[i][k] * matB[k][j];
          }
        }
      }

      // Output
      printf("\nMatrix A: \n");
      printMatrix(matA, rowA, columnA);
      printf("\nMatrix B: \n");
      printMatrix(matB, rowB, columnB);
      printf("\nResult: \n");
      printMatrix(matC, rowC, columnC);

      break;
    }
    case 2: { // m.A + m.B, m.A - m.B

      // Create matrix A
      float matA[MAX][MAX];
      int rowA, columnA;
      inputRowColumn('A', &rowA, &columnA);

      // Create matrix B
      float matB[MAX][MAX];
      int rowB, columnB;
      inputRowColumn('B', &rowB, &columnB);

      // Check compatible
      if (rowA != rowB || columnA != columnB) {
        printf(
            "\nCan't add or subtract because matrix A & B is not equal size\n");
        break;
      }

      // Input matrix
      printf("Enter matrix A:\n");
      inputMatrix(matA, rowA, columnA);
      printf("Enter matrix B:\n");
      inputMatrix(matB, rowB, columnB);

      // Create matrix C(+) & D(-) to store result
      float matC[MAX][MAX], matD[MAX][MAX];
      int i, j;
      for (i = 0; i < rowA; i++) {
        for (j = 0; j < columnA; j++) {
          matC[i][j] = matD[i][j] = 0;
          matC[i][j] += matA[i][j] + matB[i][j];
          matD[i][j] += matA[i][j] - matB[i][j];
        }
      }

      // Output
      printf("\nMatrix A: \n");
      printMatrix(matA, rowA, columnA);
      printf("\nMatrix B: \n");
      printMatrix(matB, rowB, columnB);
      printf("\nResult A + B: \n");
      printMatrix(matC, rowA, columnA);
      printf("\nResult A - B: \n");
      printMatrix(matD, rowA, columnA);

      break;
    }
    case 3: { // m.A * real number

      // Input matrix A
      float matA[MAX][MAX];
      int rowA, columnA;
      inputRowColumn('A', &rowA, &columnA);
      inputMatrix(matA, rowA, columnA);

      // Input real number
      float number;
      printf("Enter a real number: ");
      scanf("%f", &number);

      // Create a matrix C to store result
      float matC[MAX][MAX];
      int i, j;
      for (i = 0; i < rowA; i++) {
        for (j = 0; j < columnA; j++) {
          matC[i][j] = matA[i][j] * number;
        }
      }

      // Output
      printf("\nMatrix A: \n");
      printMatrix(matA, rowA, columnA);
      printf("\nResult A * %.04f\n", number);
      printMatrix(matC, rowA, columnA);

      break;
    }
    case 4: { // m.A - m.B + real number

      // Create matrix A
      float matA[MAX][MAX];
      int rowA, columnA;
      inputRowColumn('A', &rowA, &columnA);

      // Create matrix B
      float matB[MAX][MAX];
      int rowB, columnB;
      inputRowColumn('B', &rowB, &columnB);

      // Check compatible
      if (rowA != rowB || columnA != columnB) {
        printf(
            "\nCan't add or subtract because matrix A & B is not equal size\n");
        break;
      }

      // Input matrix
      printf("Enter matrix A:\n");
      inputMatrix(matA, rowA, columnA);
      printf("Enter matrix B:\n");
      inputMatrix(matB, rowB, columnB);

      // Input real number
      float number;
      printf("Enter a real number: ");
      scanf("%f", &number);

      // Create a matrix C to store result
      float matC[MAX][MAX];
      int i, j;
      for (i = 0; i < rowA; i++) {
        for (j = 0; j < columnA; j++) {
          matC[i][j] = matA[i][j] - matB[i][j] + number;
        }
      }

      // Output
      printf("\nMatrix A: \n");
      printMatrix(matA, rowA, columnA);
      printf("\nMatrix B: \n");
      printMatrix(matB, rowB, columnB);
      printf("\nResult A - B + %.04f\n", number);
      printMatrix(matC, rowA, columnA);

      break;
    }
    default:
      printf("Bye bye!!!");
    }

  } while (choice >= 1 && choice <= 4);

  return 0;
}

void inputMatrix(float mat[][MAX], int row, int column) {
  int i, j;
  for (i = 0; i < row; i++) {
    for (j = 0; j < column; j++) {
      printf("[%d][%d] = ", i + 1, j + 1);
      scanf("%f", &mat[i][j]);
    }
  }
}

void inputRowColumn(char id, int *row, int *column) {
  do {
    printf("\nEnter number of row for matrix %c: ", id);
    scanf("%d", row);
    printf("Enter number of column for matrix %c: ", id);
    scanf("%d", column);
  } while (*row < 0 || *column < 0);
}

void printMatrix(float mat[][MAX], int row, int column) {
  int i, j;
  for (i = 0; i < row; i++) {
    for (j = 0; j < column; j++) {
      printf("%.2f\t", mat[i][j]);
    }
    printf("\n");
  }
}
