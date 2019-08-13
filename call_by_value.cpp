#include <iostream>
using namespace std;

void swap(int x, int y);

int main() {
  int x = 10;
  int y = 20;
  cout << "x is " << x << "y is " << y << endl;
  swap(x, y);
  cout << "x is " << x << "y is " << y << endl;
  return 0;
}

void swap(int num1, int num2){
  num1 = num1 + num2;
  num2 = num1 - num2;
  num1 = num1 - num2;
  cout << "num1 is " << num1 << " and num2 is " << num2 << endl;
}