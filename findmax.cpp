#include <iostream>
using namespace std;

int findmax(int a[], int i) {
  if (i > 0) {
    int j = findmax(a, i - 1);

    if (a[i] < a[j])
      return j;
    
  }
  return i;

}

int main() {
  int a[] = {5, 2, 887, 5, 34, 12, 567, 54};
  int n = sizeof(a) / sizeof(a[0]);

  cout << findmax(a,n-1);
} 
