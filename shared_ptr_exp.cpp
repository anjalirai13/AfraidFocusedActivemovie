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

  //Class Declaration with the help of shared_ptr from original class
  //shared_ptr<Shape> rand_shape = nullptr;
  shared_ptr<Shape> rand_shape(new Shape);
  cout << "\nPrinting new shape with shared_ptr reference\n";
  rand_shape->generate_random_shape();

  //Class Declaration with the help of shared_ptr from previous shared_ptr
  shared_ptr<Shape> rand_shape_2(rand_shape);
  cout << "\nPrinting new shape with shared_ptr reference 2\n";
  rand_shape_2->generate_random_shape();
  cout << "Counter value is " << rand_shape_2.use_count() << endl;
  cout << "Counter value is " << rand_shape.use_count() << endl;

  //Pointer Class declaration and its usage
  Shape *random_shape = new Shape;
  cout << "\nPrinting new shape with pointer reference\n";
  random_shape->generate_random_shape();
  delete(random_shape);

  cout << "\nShared Ptr 2 is getting reset\n";
  rand_shape_2.reset();
  cout << "Counter value for shared_ptr 2 is " << rand_shape_2.use_count() << endl;
  cout << "Counter value for shared_ptr 1 is " << rand_shape.use_count() << endl;
  cout << "\nShared Ptr 1 is getting reset\n";
  rand_shape.reset();
  cout << "\nCounter value for shared_ptr 2 is " << rand_shape_2.use_count() << endl;
  cout << "Counter value for shared_ptr 1 is " << rand_shape.use_count() << endl;
  return 0;
}