#include <iostream>
using namespace std;

class Line{
  public:
    double length;
    void getLength();
    Line(double len);
    ~Line();
};

void Line::getLength(){
  cout << "Length of line is " << length << endl;
}

Line::Line(double len){
  length = len;
  cout << "Conatructor object is created and Length of line is " << len << endl;
}

Line::~Line(){
  cout << "Destructor object is initialized. The end of program" << endl;
}

int main(){
  Line line1(10.2);
  cout << "Enter the line length: " << endl;
  cin >> line1.length;
  line1.getLength();
  return 0;
}