// Version: 3

#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

void inputMatrix(float **mat, int row, int column);
void inputRowColumn(char id, int *row, int *column);
void printMatrix(float **mat, int row, int column);
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
  int choice, ii;
  do {
    menu();
    printf("\nEnter choice: ");
    scanf("%d", &choice);
    switch (choice) {
    case 1: { // m.A * m.B

      // Create matrix A (heap)
      int rowA, columnA;
      inputRowColumn('A', &rowA, &columnA);
      float **matA = (float **)malloc(rowA * sizeof(float *));
      for (ii = 0; ii < rowA; ii++) {
        matA[ii] = (float *)malloc(columnA * sizeof(float));
      }

      // Create matrix B (heap)
      int rowB, columnB;
      inputRowColumn('B', &rowB, &columnB);
      float **matB = (float **)malloc(rowB * sizeof(float *));
      for (ii = 0; ii < rowB; ii++) {
        matB[ii] = (float *)malloc(columnB * sizeof(float));
      }

      // Check compatible
      if (columnA != rowB) {
        printf("\nCan't multiply because the number of column of matrix A is "
               "not equal to the number of row of matrix B\n");
        break;
      }

      // Input matrix
      printf("\nEnter matrix A:\n");
      inputMatrix(matA, rowA, columnA);
      printf("Enter matrix B:\n");
      inputMatrix(matB, rowB, columnB);

      // Create a matrix C (heap) to store result
      int rowC = rowA, columnC = columnB;
      float **matC = (float **)malloc(rowC * sizeof(float *));
      for (ii = 0; ii < rowC; ii++) {
        matC[ii] = (float *)malloc(columnC * sizeof(float));
      }

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

      // Create matrix A (heap)
      int rowA, columnA;
      inputRowColumn('A', &rowA, &columnA);
      float **matA = (float **)malloc(rowA * sizeof(float *));
      for (ii = 0; ii < rowA; ii++) {
        matA[ii] = (float *)malloc(columnA * sizeof(float));
      }

      // Create matrix B (heap)
      int rowB, columnB;
      inputRowColumn('B', &rowB, &columnB);
      float **matB = (float **)malloc(rowB * sizeof(float *));
      for (ii = 0; ii < rowB; ii++) {
        matB[ii] = (float *)malloc(columnB * sizeof(float));
      }

      // Check compatible
      if (rowA != rowB || columnA != columnB) {
        printf(
            "\nCan't add or subtract because matrix A & B is not equal size\n");
        break;
      }

      // Input matrix
      printf("\nEnter matrix A:\n");
      inputMatrix(matA, rowA, columnA);
      printf("Enter matrix B:\n");
      inputMatrix(matB, rowB, columnB);

      // Create a matrix C (+)(heap) to store result
      int rowC = rowA, columnC = columnA;
      float **matC = (float **)malloc(rowC * sizeof(float *));
      for (ii = 0; ii < rowC; ii++) {
        matC[ii] = (float *)malloc(columnC * sizeof(float));
      }

      // Create a matrix D (-)(heap) to store result
      int rowD = rowA, columnD = columnA;
      float **matD = (float **)malloc(rowD * sizeof(float *));
      for (ii = 0; ii < rowD; ii++) {
        matD[ii] = (float *)malloc(columnD * sizeof(float));
      }

      int i, j;
      for (i = 0; i < rowA; i++) {
        for (j = 0; j < columnB; j++) {
          matC[i][j] = matA[i][j] + matB[i][j];
          matD[i][j] = matA[i][j] - matB[i][j];
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

      // Create & Input matrix A (heap)
      int rowA, columnA;
      inputRowColumn('A', &rowA, &columnA);
      float **matA = (float **)malloc(rowA * sizeof(float *));
      for (ii = 0; ii < rowA; ii++) {
        matA[ii] = (float *)malloc(columnA * sizeof(float));
      }
      inputMatrix(matA, rowA, columnA);

      // Input real number
      float number;
      printf("Enter a real number: ");
      scanf("%f", &number);

      // Create a matrix C (heap) to store result
      int rowC = rowA, columnC = columnA;
      float **matC = (float **)malloc(rowC * sizeof(float *));
      for (ii = 0; ii < rowC; ii++) {
        matC[ii] = (float *)malloc(columnC * sizeof(float));
      }

      int i, j;
      for (i = 0; i < rowC; i++) {
        for (j = 0; j < columnC; j++) {
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

      // Create matrix A (heap)
      int rowA, columnA;
      inputRowColumn('A', &rowA, &columnA);
      float **matA = (float **)malloc(rowA * sizeof(float *));
      for (ii = 0; ii < rowA; ii++) {
        matA[ii] = (float *)malloc(columnA * sizeof(float));
      }

      // Create matrix B (heap)
      int rowB, columnB;
      inputRowColumn('B', &rowB, &columnB);
      float **matB = (float **)malloc(rowB * sizeof(float *));
      for (ii = 0; ii < rowB; ii++) {
        matB[ii] = (float *)malloc(columnB * sizeof(float));
      }

      // Check compatible
      if (rowA != rowB || columnA != columnB) {
        printf(
            "\nCan't add or subtract because matrix A & B is not equal size\n");
        break;
      }

      // Input matrix
      printf("\nEnter matrix A:\n");
      inputMatrix(matA, rowA, columnA);
      printf("Enter matrix B:\n");
      inputMatrix(matB, rowB, columnB);

      // Input real number
      float number;
      printf("Enter a real number: ");
      scanf("%f", &number);

      // Create a matrix C (heap) to store result
      int rowC = rowA, columnC = columnA;
      float **matC = (float **)malloc(rowC * sizeof(float *));
      for (ii = 0; ii < rowC; ii++) {
        matC[ii] = (float *)malloc(columnC * sizeof(float));
      }

      int i, j;
      for (i = 0; i < rowC; i++) {
        for (j = 0; j < columnC; j++) {
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

void inputMatrix(float **mat, int row, int column) {
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
  } while (*row < 0 || *column < 0 || *row > MAX || *column > MAX);
}

void printMatrix(float **mat, int row, int column) {
  int i, j;
  for (i = 0; i < row; i++) {
    for (j = 0; j < column; j++) {
      printf("%.2f\t", mat[i][j]);
    }
    printf("\n");
  }
}
