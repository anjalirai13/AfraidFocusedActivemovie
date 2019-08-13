#include <iostream>
using namespace std;

class Box{
  private:
    double width;
    double length;
    double height;
  
  public:
    Box(double l, double w, double h){
      length = l;
      width = w;
      height = h;
    }
    int compare_length(Box box){
      cout << "First length " << this->length << endl;
      cout << "Second length" << box.length << endl;
      return this->length == box.length;
    }
};


int main(){
  bool res;
  Box box1(5.6, 3.4, 2.7);
  Box box2(9.8, 7.3, 1.9);
  Box *box;
  box = &box2;
  res = box->compare_length(box1);
  cout << "Result is " << boolalpha << res << endl;
  cout << "\n";
  return 0;
}