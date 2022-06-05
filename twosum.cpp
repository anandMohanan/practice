#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
  int a[6]{4,1,9,8,122,2};
  int target = 11;
  int len = sizeof(a)/sizeof(a[0]);


  //O(n^2)
  // for(int i=0;i<len;i++){
  //   for(int j=i+1;j<len;j++){
  //     if(a[i]+a[j] == target){
  //       cout << i << "-" << j;
  //       break;
  //     }
  //   }
  // }
  
  //O(n)
  unordered_map<int,int> umap;
  for(int i=0;i<len;i++){
    int ans = target - a[i];
    if(umap.find(ans) != umap.end()){
      cout << i << "-" << umap[ans];
    }

    umap[a[i]] = i;
  }

}
