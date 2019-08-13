#include <iostream>
using namespace std;

extern int a, b;

int main() {
  int a, b, c, d;
  a = 10;
  b = 20;
  c = a + b;
  d = b - a;
  cout << "d is " << d;
  cout << "c is " << c;
  return 0;
}
