#include <cmath>
#include <iostream>
using namespace std;

int BinarySearch(int a[], int low, int high, int n);

int ExponentialSearch(int a[], int n, int key) {
  int x = sqrt(n);
  if (a[0] == key) {
    return 0;
  }
  int i = 1;
  ;
  while (i < n && a[i] <= key)
    i *= 2;

  return BinarySearch(a, i / 2, min(i, n - 1), key);
}

int BinarySearch(int a[], int low, int high, int key) {
  int mid{};
  while (low <= high) {
    mid = (low + high) / 2;
    if (a[mid] == key)
      return mid;
    else if (a[mid] < key) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return -1;
}

int main() {
  int a[] = {2, 3, 4, 10, 40};
  int n = sizeof(a) / sizeof(a[0]);
  cout << ExponentialSearch(a, n, 10);
}
