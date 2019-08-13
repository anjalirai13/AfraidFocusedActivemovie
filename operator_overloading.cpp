#include <iostream>
using namespace std;

class Box{
  public:
    double length;
    double width;
    double breadth;
    double get_volume(){
      return length*width*breadth;
    }
    Box operator+(const Box& b){
      Box box;
      box.length = this->length+b.length;
      box.width = this->width+b.width;
      box.breadth = this->breadth+b.breadth;
      return box;
    }
};

int main(){
  Box box1;
  Box box2;
  Box box3;
  box1.length = 5.0;
  box2.length = 2.6;
  box1.width = 9.4;
  box2.width = 2.0;
  box1.breadth = 6.3;
  box2.breadth = 8.1;
  cout << box1.get_volume() << endl;
  cout << box2.get_volume() << endl;
  box3 = box1+box2;
  cout << box3.length << endl;
  cout << box3.width << endl;
  cout << box3.breadth << endl;
  return 0;
}