#include <cstdlib>
#include <iostream>
using namespace std;

void display(int *mat[], int n, int m) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << mat[i][j];
    }
    cout << "\n";
  }
  cout << "\n";
}

void solve(int *mat[], int row, int col, int n, int m) {
  if (row == n - 1 && col == m - 1)
    display(mat, n, m);
  else {
    int n_row = row;
    int n_col = col + 1;
    if (n_row >= 0 && n_col >= 0 && n_row <= n - 1 && n_col <= m - 1) {
      mat[n_row][n_col] = 1;
      solve(mat, n_row, n_col, n, m);
    }
    n_row = row + 1, n_col = col;

    if (n_row >= 0 && n_col >= 0 && n_row <= n - 1 && n_col <= m - 1) {
      mat[n_row][n_col] = 1;
      solve(mat, n_row, n_col, n, m);
    }
  }

  mat[row][col] = 0;
}

int main() {
  int n, m;
  cin >> n >> m;
  int *mat[n];
  for (int i = 0; i < n; i++) {
    mat[i] = (int *)calloc(sizeof(int), m);
  }
  mat[0][0] = 1;
  solve(mat, 0, 0, n, m);
}
