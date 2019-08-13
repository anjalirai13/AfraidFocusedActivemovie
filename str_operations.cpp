#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(){
  char str1[30] = "C++ & ";
  char str2[30] = "Google Test :-(";
  char str3[30];
  cout << "length of str1 is " << strlen(str1) << endl;
  cout << "Comparison of str1 & str2 is " << strcmp(str1, str2) << endl;
  strcpy(str3, str1);
  cout << "str3 is same as str1 " << str3 << endl;
  cout << "Concatenation of str1 & str2 is " << strcat(str1, str2) << endl;
  cout << "str3 char in str1 " << strstr(str1, str3) << endl;
  cout << "G in str2 " << strchr(str2, 'G') << endl;
  string str = str3;
  cout << "str is " << str3;
  cout << " str size is " << str.size() << endl;
  cout << "End of string operations";
  return 0;
}