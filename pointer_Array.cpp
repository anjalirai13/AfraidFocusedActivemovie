#include <iostream>
 
using namespace std;
const int MAX = 3;
 
int main () {
  int  var[MAX] = {10, 100, 200};
 
  for (int i = 0; i < MAX; i++) {
    cout << "Before *var " << *var << endl;
    cout << "Before i " << i << endl;
    *var = i;
    cout << "After *var " << *var << endl;
    cout << "After i " << i << endl;
  }
  return 0;
}