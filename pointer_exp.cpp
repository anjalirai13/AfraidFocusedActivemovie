#include <iostream>
#include <stdint.h>
using namespace std;

int main(){
  uint64_t* results = nullptr;
  results = new uint64_t[3];
  results[0] = 5;
  results[1] = 10;
  results[2] = 15;
  cout << *results << endl;
  cout << "results[0] is " << results[0] << endl;
  cout << "results[1] is " << results[1] << endl;
  cout << "results[2] is " << results[2] << endl;
  int* a;
  int b = 10;
  a = &b;
  cout << "a is " << *a << endl;
  b = 20;
  cout << "a after b modification " << *a << endl;
  b = 10;
  *a = b;
  cout << "a is " << *a << endl;
  b = 20;
  cout << "a after b modification " << *a << endl;
}