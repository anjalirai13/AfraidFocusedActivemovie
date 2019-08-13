#include<iostream>
using namespace std;

class Box {
  
  private:
    double height;

  public:
    double length;
    double width;
    void setLength(double len);
    void setWidth(double wid);
    void setHeight(double hgt);

    double getVolume(){
      return length*width*height;
    }
};

void Box::setLength(double len){
  length = len;
}

void Box::setWidth(double wid){
  width = wid;
}

void Box::setHeight(double hgt){
  height = hgt;
}

int main (){
  Box box1;
  double arg;
  cout << "Enter the box length" << endl;
  cin >> box1.length;
  cout << "Enter the box width" << endl;
  cin >> box1.width;
  cout << "Enter the box height" << endl;
  // cin >> box1.height; //because height is a private member
  cin >> arg;
  box1.setHeight(double (arg));
  cout << "\n The area of the box is " << box1.getVolume() << endl;
  return 0;
}