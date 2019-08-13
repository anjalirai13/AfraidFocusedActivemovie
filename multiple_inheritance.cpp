#include <iostream>
#include <cmath>
#include <cstring>
#include <typeinfo>
using namespace std;

class Shape{
  protected:
    int breadth;
    int height;
    int length;
  
  public:
    void set_height(int h){
      height = h;
    };

    void set_breadth(int b){
      breadth = b;
    };

    void set_length(int l) {
      length = l;
    };
};

class PaintCost{
  public:
    void get_cost(int area){
      cout << "Cost of painting will be " << area*70 << endl;
    }
};

class Triangle: public Shape, public PaintCost{
  public:
    double get_area(){
      return (breadth*height)/2;
    }
};

class Parallelogram: public Shape, public PaintCost{
  public:
    double get_area(){
      return breadth*height;
    }
};

class Square: public Shape, public PaintCost{
  public:
    double get_area(){
      return pow(length, 2);
    }
};

int main() {
  Triangle trg;
  Parallelogram plg;
  Square sq;
  int input;
  cout << "Enter the height or length " << endl;
  // cin >> input;
  input = 10;
  trg.set_height(input);
  plg.set_height(input);
  sq.set_length(input);
  cout << "Enter the breadth " << endl;
  // cin >> input;
  input = 6;
  trg.set_breadth(input);
  plg.set_breadth(input);

  cout << endl;
  cout << "Area of triangle is " << trg.get_area() << endl;
  cout << "Area of Parallelogram is " << plg.get_area() << endl;
  cout << "Area of square is " << sq.get_area() << endl;
  trg.get_cost(trg.get_area());
  plg.get_cost(plg.get_area());
  sq.get_cost(sq.get_area());
  return 0;
}