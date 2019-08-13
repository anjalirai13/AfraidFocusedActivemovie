#include <iostream>
#include <fstream>
using namespace std;

int main(){
  const char* filename = "./testfile.txt";
  char data[1000];
  int num[5] = {4, 3, 6, 7, 12};
  string str;
  ofstream outfile;
  outfile.open(filename, ios::out | ios::trunc);
  outfile << "Writing to text file using fstream. It should print" << endl;
  for (int i=0; i<5; ++i)
    outfile << num[i] << endl;
  outfile.close();

  ifstream infile;
  infile.open(filename);
  infile >> data;
  cout << data << endl;
  infile.close();

  ifstream file(filename);
  while(getline(file, str)){
    cout << str << endl; 
  }
  file.close();
  return 0;
};