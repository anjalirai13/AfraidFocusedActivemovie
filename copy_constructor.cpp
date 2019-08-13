#include <iostream>
using namespace std;

class Line{
  public:
    double *length;
    double getLength();
    Line(double len);
    Line(const Line &obj);
    ~Line();
};

double Line::getLength(){
  cout << "Length of line is " << *length << endl;
  return *length;
}

Line::Line(double len){
  length = new double;
  *length = len;
  cout << "Constructor object is created and Length of line is " << *length << endl;
}

Line::~Line(){
  cout << "Destructor object is initialized. The end of program" << endl;
}

Line::Line(const Line &obj){
  cout << "This is constructor copy" << endl;
  length = new double;
  *length = *obj.length;
}

void display(Line obj){
  cout << "From copy constructor " << obj.getLength() << endl;
}

int main(){
  double len = 10.2;
  Line line1(len);
  cout << "Enter the line length: " << endl;
  cin >> *line1.length;
  line1.getLength();
  display(line1);
  return 0;
}