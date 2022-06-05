#include <iostream>
using namespace std;

void insertionSort(int a[], int n) {
  int j, key;
  for (int i = 1; i <= n; i++) {
    key = a[i];
    j = i - 1;
    while (j >= 0 && a[j] > key) {
      a[j + 1] = a[j];
      j--;
    }
    a[j + 1] = key;
  }
}

int main() {
  int n;
  cout << "Enter array size"
       << "\n";
  cin >> n;
  int a[n];
  for (int i = 0; i <= n; i++) {
    cin >> a[i];
  }

  insertionSort(a,n);
  for(int x:a){
    cout << x << "\n";
  }
}
