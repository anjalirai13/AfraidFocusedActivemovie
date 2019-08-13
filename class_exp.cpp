#include <iostream>
#include <cstdlib>
#include <memory>
using namespace std;

class Shape{
  public:
  void generate_random_shape(){
    int randIndex = rand() % 5;
    string shapes[5] = {"Rectangle", "Square", "Triangle", "Rectangle", "Pentagon"};
    cout << "I am in shape of " << shapes[randIndex] << endl;
  }
  ~Shape(){
    cout << "Destructor is called" << endl;
  }
};

int main(){
  //Normal Class declaration and usage
  Shape shape;
  srand((unsigned)time(NULL));
  for (int i = 1; i <6; i++){
    shape.generate_random_shape();
  }
  
  //Class Declaration with the help of shared_ptr
  std::shared_ptr<Shape> rand_shape = nullptr;
  cout << "\nPrinting new shape with shared_ptr reference\n";
  rand_shape->generate_random_shape();

  //Pointer Class declaration and its usage
  Shape *random_shape = new Shape;
  cout << "\nPrinting new shape with pointer reference\n";
  random_shape->generate_random_shape();
  delete(random_shape);
  return 0;
}