#include <iostream>
using namespace std;

void MaxActivity(int a[],int b[],int n){
  int i{};
  cout << i << " ";
  for(int j=1;j<n;j++){
    if(a[j] >= b[i]){
      cout << j << "";
      i=j;
    }
  }
}


int main(){
  int a[] =  {1, 3, 0, 5, 8, 5};
  int b[] =  {2, 4, 6, 7, 9, 9};
  int n = sizeof(a) / sizeof(a[0]);
  MaxActivity(a,b,n);
}
