#include <algorithm>
#include <iostream>

#include <unordered_map>

using namespace std;

int main() {
  string s = "au";
  int longest =0;

  // for(int i=0;i<s.length();i++){
  //   int currLength{};
  //
  // unordered_map<char, bool> umap;
  //   for(int j=i;j<s.length();j++){
  //     char current = s[j];
  //     if(umap.find(current) != umap.end()){
  //       auto p = umap.find(current);
  //       cout << p->first;
  //       break;
  //     }else{
  //       currLength++;
  //       umap[current] = true;
  //       longest = max(currLength,longest);
  //     }
  //   }
  // }
  //   cout << longest;
  //
  int left = 0;
  unordered_map<char, int> umap;
  for (int right = 0; right < s.length(); right++) {
    char currentChar = s[right];
    int prevChar{};
    if(umap.find(currentChar) != umap.end()){
      auto p = umap.find(currentChar);
      prevChar = p->second;
      cout<< "prev" << prevChar << "\n";
    }

        if (prevChar >= left) {
      left = prevChar + 1;
    }
    umap.insert(make_pair(currentChar,right));
    longest = max(longest, right - left + 1);
  }
  cout << longest;
}
