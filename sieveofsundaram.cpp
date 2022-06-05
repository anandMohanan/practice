#include <iostream>
using namespace std;

void SieveOfSundaram(int n) {
  int n1 = (n - 1) / 2;
  int a[n1];
  for (int i = 0; i < n1; i++)
    a[i] = i + 1;
  int i = 1;
  int j = 1;
  int z;
  while (true) {
    z = i + j + 2 * j * i;
    if (i == j && z > n1)
      break;
    else if (z <= n1) {
      a[z - 1] = -1;
      j++;
    } else {
      i++;
      j = i;
    }
  }

  cout << 2 << "\n";
  for (int b : a) {
    if (b != -1) {
      cout << 2*b+1 << "\n";
    }
  }
}

int main() {
  int n;
  cin >> n;
  SieveOfSundaram(n);
}
