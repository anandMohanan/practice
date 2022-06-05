#include<iostream>
#include<cmath>
using namespace std;
int fibo(int n){
  double t1 = (1 + sqrt(5)) / 2.0;
	double t2 = (1 - sqrt(5)) / 2.0;
	t1 = pow(t1, n);
	t2 = pow(t2, n);
	double ans = 1.0 / sqrt(5) * (t1 - t2);
  return (int)ans;
}


int main(){
  int n;
  cin >> n;
  cout << fibo(n);
}
