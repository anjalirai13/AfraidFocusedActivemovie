#include<iostream>
using namespace std;

class Box {
  
  private:
    double height;

  protected:
    double width;

  public:
    double length;
    void setLength(double len);
    void setHeight(double hgt);
    double getHeight();

    double getVolume(){
      cout << length;
      cout << width;
      cout << height;
      return length*width*height;
    }
};

class Width:Box {
  public:
    void setWidth(double wid){
      width = wid;
    }

    double getWidth(){
      return width;
    }
};

void Box::setLength(double len){
  length = len;
}

void Box::setHeight(double hgt){
  height = hgt;
}
 
double Box::getHeight(){
  return height;
}
 
int main (){
  Box box1;
  Width box_wid;
  double arg;
  cout << "Enter the box length" << endl;
  cin >> box1.length;
  cout << "Enter the box width" << endl;
  cin >> arg;
  box_wid.setWidth(double (arg));
  cout << box_wid.getWidth();   
  cout << "Enter the box height" << endl;
  cin >> arg;
  box1.setHeight(double (arg));
  return 0;
}

