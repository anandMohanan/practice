#include <cmath>
#include <iostream>
using namespace std;

void seiveoferato(int n) {
  int a[n];
  for (int i = 0; i <= n; i++) {
    a[i] = i;
  }
  int sq = sqrt(n);
  for (int i = 2; i <= sq; i++) {
    if (a[i] != -1) {
      for (int j = i+1; j <= n; j++) {
        if (a[j] != -1 && j % i == 0)
          a[j] = -1;
      }
    }
  }

  for (int i = 2; i <= n; i++) {
    if (a[i] != -1) {
      cout << a[i] << "\n";
    }
  }
}

int main() {
  int n;
  cout << "Enter range:";
  cin >> n;
  seiveoferato(n);
}
