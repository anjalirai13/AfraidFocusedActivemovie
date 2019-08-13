#include <iostream>
using namespace std;

int main(){
  int i;
  double d;

  int& r = i;
  double& s = d;

  i = 5;
  cout << "Value of i is " << i << endl;
  cout << "Reference value r is " << r << endl;

  d = 11.67;
  cout << "Value of d is " << d << endl;
  cout << "Reference value s is " << s << endl;
  return 0;
}