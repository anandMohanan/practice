#include <iostream>
using namespace std;

int main() {
  int a[]{0, 1, 0, 2, 1, 0, 3, 1, 0, 1, 2};
  int n = sizeof(a) / sizeof(a[0]);
  int sum{};
  for (int i = 0; i < n; i++) {
    

    if (a[i] > a[i + 1]) {
      sum += a[i] - a[i + 1];
    } else if (a[i] < a[i + 1]) {
      sum += a[i + 1] - a[i];
    }
  }
  cout << sum;
}
