#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

struct Activity {
  int start;
  int finish;
};

bool GetMax(Activity a1, Activity a2) { return a1.finish < a2.finish; }

void MaxActivity(Activity a[], int n) {
  sort(a,a+n,GetMax);
  int i{};
  cout << a[i].start  << " " << a[i].finish;
  for(int j=1;j<n;j++){
    if(a[j].start > a[i].finish){
      cout << a[j].start << " " << a[j].finish;
      i=j;
    }
  }
}

int main() {
  Activity a[] = {{5, 9}, {1, 2}, {3, 4}, {0, 6}, {5, 7}, {8, 9}};
  int n = sizeof(a) / sizeof(a[0]);
  MaxActivity(a, n);
}
