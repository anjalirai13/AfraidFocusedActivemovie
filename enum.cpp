#include <iostream>
using namespace std;

enum Color {RED, BLUE, YELLOW, GREEN};
enum class Suits {Diamonds, Hearts, Clubs, Spades};

int main(){
  Color fav_color;
  fav_color = RED;
  if(fav_color == RED){
    cout << "Mine also" << endl;
  }
  else {
    cout << "Nice choice" << endl;
  }
  Suits hand;
  hand = Suits::Hearts;
  if(hand == Suits::Hearts){
    cout << "You got lucky. Won a jackpot" << endl;
  }
  else {
    cout << "Better Luck next time" << endl;
  }
  return 0;
}
