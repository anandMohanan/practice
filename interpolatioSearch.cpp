#include <array>
#include <cstdlib>
#include <iostream>
using namespace std;

int InterpolationSearch(int a[], int size, int key) {
  int low = 0;
  int high = size - 1;
  int mid;

  while (a[high] != a[low] && key >= a[low] && key <= a[high]) {

    mid = low + ((key - a[low]) * (high - low) / (a[high] - a[low]));
    if (a[mid] < key)
      low = mid + 1;
    else if (key < a[mid])
      high = mid - 1;
    else
      return mid;

  }

  if (key == a[low]) {
    return low;
  } else {
    return -1;
  }
}

int main() {
  int a[] = {0, 1, 2, 3, 4, 7, 8, 9, 10};
  int n;
  cin >> n;
  int ans = InterpolationSearch(a, 9, n);
  cout << ans << "\n";
}
