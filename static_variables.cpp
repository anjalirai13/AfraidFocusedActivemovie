#include <iostream>
using namespace std;

void func();
static int count = 10;

int main(){
  while(count--){
    func();
  }
  return 0;
}

void func(){
  static int i = 0;
  cout << "i is " << i;
  cout << "and count is " << count << endl;
  i++;
}