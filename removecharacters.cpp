#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main() {
  string s1;
  char s2[100];
  cin >> s1;
  cin >> s2;
  char ans[100];
  int k{};
  for (auto x : s1) {
    for (auto y : s2) {
      if (x == y)
        continue;
      else {
        ans[k] = y;
        k++;
      }
    }

    ans[k] = '\0';
    strcpy(s2, ans);
    k = 0;
  }

  cout << ans;
}
