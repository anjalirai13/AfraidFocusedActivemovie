// Invalid scenario just to check enum functionality. We should not compare 2 different enums

#include <iostream>
using namespace std;
enum Color {Red, Yello, White, Blue};
enum Flowers{Rose, SunFlower, Lily, Orchids};

int main(){
  Color color;
  color = White;
  Flowers flower;
  flower = Lily;
  if (flower == color){
    cout << "Color and Flower are same" << endl; 
  } else {
    cout << "Flower and color are different" << endl;
  }
  flower = Orchids;
  if (flower == color){
    cout << "Color and Flower are same" << endl; 
  } else {
    cout << "Flower and color are different" << endl;
  }
  return 0;
}