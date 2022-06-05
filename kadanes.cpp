#include <iostream>

using namespace std;

int main(){
  int a[] {1,-4,5,4,-6,1};
int n = sizeof(a) / sizeof(a[0]);
  int maxSum = a[0];
  int maxCurr = a[0];
  for(int i=1;i<n;i++){
    maxCurr = max(a[i],maxCurr + a[i]);
    maxSum = max(maxCurr,maxSum);
  }
  cout << maxSum;
}
