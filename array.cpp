#include <iostream>
using namespace std;
template <typename T> class Array {
private:
  int length;
  T *data;

public:
  Array(int len);
  int push(T data);
  void print();
};

template <typename T> Array<T>::Array(int len) { data = new T[len]; };

template <typename T> int Array<T>::push(T val) {
  data[length] = val;
  length++;
  return length;
}

template <typename T> void Array<T>::print() {
  for(int i=0;i<length;i++){
    cout << data[i];
  }
}

int main() {
  Array<int> a(1);
  a.push(10);
  a.push(38);
a.push(476);
  a.print();
}
