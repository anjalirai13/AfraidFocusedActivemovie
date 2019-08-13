#include <iostream>
using namespace std;

class Shape{
  public:
    int width;
    int height;
    Shape(int a, int b){
      height = a;
      width = b;
    }
    virtual void area(){
      cout << "Parent Class" << endl;
    }
};

class Rectangle: public Shape{
  public:
    Rectangle(int a = 0, int b = 0): Shape(a, b){}
    void area(){
      cout << "This is rectangle class and area is " << width*height << endl;
    }
};

class Triangle: public Shape{
  public:
    Triangle(int a = 0, int b = 0): Shape(a, b){}
    void area(){
      cout << "This is triangle class and area is " << (width*height)/2 << endl;
    }
};

int main(){
  Shape box1(5, 10);
  Shape *box;
  Rectangle rect(10, 7);
  Triangle trg(5, 2);
  box = &rect;
  box->area();
  box = &trg;
  box->area();
}