#include <iostream>
using namespace std;

int main(){
  char alphabets[] = {'a', 'b', 'c', 'd', 'e'};
  char *p;
  p = alphabets;
  int length = sizeof(alphabets)/sizeof(alphabets[0]);
  for(int i = 0; i < length; i++){
    cout << "alphabet at "<< "index " << i << " is " << alphabets[i] << endl;
  }
  for(int i =0; i < length; i++){
    cout << "alphabet using pointer at index " << i << " " << *(p+i) << endl;
  }
  return 0;
}