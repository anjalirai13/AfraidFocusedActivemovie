#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
  srand((unsigned)time(NULL));
  cout << rand() << endl;
  cout << rand() << endl;
  cout << rand() << endl;
  cout << rand() << endl;
  return 0;
}