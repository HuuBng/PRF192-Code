#include <stdio.h>
#define MAXN 10
#define MAXM 10
void input2DArray(int a[][MAXM], int n, int m);
void sum2DArray(int a[][MAXM], int n, int m);

int main() {
  int n, m;
  do {
    printf("Enter number of row: ");
    scanf("%d", &n);
    printf("Enter number of columns: ");
    scanf("%d", &m);
  } while (n < 1 || n > MAXN || m < 1 || m > MAXM);

  int a[MAXN][MAXM];
  input2DArray(a, n, m);
  sum2DArray(a, n, m);

  return 0;
}

void sum2DArray(int a[][MAXM], int n, int m) {
  int i, j, sum = 0;
  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      sum += a[i][j];
    }
  }
  printf("Sum2DArray: %d", sum);
}

void input2DArray(int a[][MAXM], int n, int m) {
  int i, j;
  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      printf("a[%d][%d] = ", i, j);
      scanf("%d", &a[i][j]);
    }
  }
}
