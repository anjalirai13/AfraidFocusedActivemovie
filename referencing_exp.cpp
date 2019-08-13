#include <iostream>
#include <stdint.h>
using namespace std;

void alter_b(int& val){
  val = 30;
}

int main(){
  int b = 20;
  cout << "Value of b is " << b << endl;
  alter_b(b);
  cout << "Value of b after referencing is " << b << endl;
  return 0;
};