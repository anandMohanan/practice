#include <stdio.h>
#include <stdlib.h>
void display(int *mat[]) {
  printf("\n");
  int i, j;
  for (i = 0; i < 9; i++) {
    for (j = 0; j < 9; j++) {
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}
int issafe(int *mat[], int row, int col, int d) {
  int i, j;
  // checking your entire row
  for (i = 0; i <= 8; i++) {
    if (mat[row][i] == d) {
      return 0;
    }
  }
  // checking your entire col
  for (i = 0; i <= 8; i++) {
    if (mat[i][col] == d) {
      return 0;
    }
  }
  // subgrid
  int x;
  int y;
  x = row / 3 * 3;
  y = col / 3 * 3;
  for (i = x; i <= x + 2; i++) {
    for (j = y; j <= y + 2; j++) {
      if (mat[i][j] == d) {
        return 0;
      }
    }
  }
  return 1;
}
void solve(int *mat[], int row, int col) {
  if (row == 8 && col == 9) {
    display(mat);
  } else {
    if (col == 9) {
      row++;
      col = 0;
    }
    if (mat[row][col] == 0) {
      for (int d = 1; d <= 9; d++) {
        if (issafe(mat, row, col, d) == 1) {
          mat[row][col] = d;
          solve(mat, row, col + 1);
          mat[row][col] = 0;
        }
      }

    } else {
      solve(mat, row, col + 1);
    }
  }
}
int main() {
  int *mat[9];
  int i, j;
  for (i = 0; i < 9; i++) {

    mat[i] = (int *)calloc(sizeof(int), 9);
  }
  for (i = 0; i < 9; i++) {
    for (j = 0; j < 9; j++) {
      scanf("%d", &mat[i][j]);
    }
  }
  solve(mat, 0, 0);
}
