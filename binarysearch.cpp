#include <iostream>
using namespace std;

int binarySearch(int a[], int size, int key) {
  int low = 0;
  int high = size;
  int mid;
  while (low < high) {
    mid = (low + high) / 2;
    if (a[mid] == key) {
      return mid;
    } else if (key < a[mid]) {
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }
  return -1;
}

int main() {
  int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
  int n;
  cout << "Enter Key ";
  cin >> n;
  cout << binarySearch(a, 12, n) << "\n"; 
}
