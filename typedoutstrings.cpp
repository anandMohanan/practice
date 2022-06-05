#include <iostream>
#include <vector>
using namespace std;

// string build(string a) {
//
//   string final;
//   for (auto x : a) {
//     if (x != '#') {
//       final.push_back(x);
//     } else {
//       if (!final.empty()) {
//         final.pop_back();
//       }
//     }
//   }
//   return final;
// }
//
// int main() {
//   string a = "#d";
//   string b = "abf#d";
//
//   string builda = build(a);
//   string buildb = build(b);
//
//   int ans = 1;
//   if (builda.size() != buildb.size())
//     cout << "Not equal \n";
//   else {
//     for (int i = 0; i < builda.size(); i++) {
//       if (builda[i] != buildb[i]) {
//         ans = 0;
//       }
//     }
//   }
//
//   if (ans == 1)
//     cout << "equal";
// }
//
//
int main() {
  string a = "bc#d";
  string b = "abf#d";

  int a1 = a.length() - 1;
  int b1 = b.length() - 1;

  while (a1 >= 0 || b1 >= 0) {
    if (a[a1] == '#' || b[b1] == '#') {
      if (a[a1] == '#') {
        int count = 2;
        while (count > 0) {
          count--;
          a1--;
          if (a[a1] == '#') {
            count += 2;
          }
        }
      }
      if(b[b1]== '#'){
        int count=2;
        while(count>0){
          count--;
          b1--;
          if(b[b1]=='#'){
            count+=2;
          }
        }
      }
    }else{
      if(a[a1]!=b[b1]) cout << "false";
      else{
        a1--;
        b1--;

      }
    }


    
  }
  cout << "true";
}
