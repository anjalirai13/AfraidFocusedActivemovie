#include <iostream>
using namespace std;

class Box{
  private:
    int width;
  
  public:
    int length;
    int height;
    void set_width(int wid);
    friend void print_width(Box box);
};

void Box::set_width(int wid ){
  width = wid;
}

void print_width(Box box){
  cout << "width of box is " << box.width << endl;
}

int main(){
  Box box;
  box.length = 10;
  box.height = 20;
  box.set_width(30);
  print_width(box);
  return 0;
}