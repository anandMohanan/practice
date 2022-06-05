#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int a[]{1,8,6,2,5,4,8,3,7};
  int n = sizeof(a) / sizeof(a[0]);
  int maxArea{};
  int temp{};
  // for (int i = 0; i < n; i++) {
  //   for (int j = i + 1; j < n; j++) {
  //     temp = min(a[j], a[i]) * (j - i);
  //     maxArea = max(temp,maxArea);
  // }
  //
  int x = 0;
  int y = n-1;
  while(x<y){
         temp = min(a[x],a[y]) * (y-x);
      maxArea = max(maxArea,temp);
      if(a[x]<a[y]) x++;
      else y--;
    
  }
  cout << maxArea;
}
