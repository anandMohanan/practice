#include <cstdlib>
#include <iostream>
using namespace std;
void display(int *mat[]) {
  cout << "\n";
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      cout << mat[i][j];
      cout << "\n";
    }
  }
}

int issafe(int *mat[], int r, int c, int d) {
  for (int i = 0; i <= 8; i++) {
    if (mat[r][i] == d)
      return 0;
  }
  for (int i = 0; i <=8; i++) {
    if (mat[i][c] == d) {
      return 0;
    }
  }
  int x = r / 3 * 3;
  int y = c / 3 * 3;
  for (int i = x; i <= x + 2; i++) {
    for (int j = y; j <= y + 2; j++) {
      if (mat[i][j] == d) {
        return 0;
      }
    }
  }
  return 1;
}
void solve(int *mat[], int r, int c) {
  if (r == 8 && c == 9) {
    display(mat);
  } else {
    if (c == 9) {
      r++;
      c = 0;
    }
    if (mat[r][c] == 0) {
      for (int i = 1; i <= 9; i++) {
        if (issafe(mat, r, c, i) == 1) {
          mat[r][c] = i;
          solve(mat, r, c + 1);
          mat[r][c] = 0;
        }
      }
    }else{
      solve(mat, r,c+1);
    }
  }
}

int main() {
  int *m[9];
  for (int i = 0; i < 9; i++) {
    m[i] = (int *)calloc(sizeof(int), 9);
  }
  for (int i = 0; i < 9; i++)
    for (int j = 0; j < 9; j++)
      cin >> m[i][j];
  solve(m, 0, 0);
}
