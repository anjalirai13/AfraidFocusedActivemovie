#include <iostream>
using namespace std;

int main(){
  char alphabets[] = {'a', 'b', 'c', 'd', 'e'};
  int length = sizeof(alphabets)/sizeof(alphabets[0]);
  for(int i = 0; i < length; i++){
    cout << "alphabet is " << alphabets[i] << endl;
  }
  return 0;
}