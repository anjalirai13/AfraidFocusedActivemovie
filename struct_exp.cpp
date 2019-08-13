#include <iostream>
using namespace std;

struct Books{
  string name;
  string author;
}book;

struct Genre{
  string type;
  double rating;
};

int main(){
  book.name = "The Monk who sold his ferrari";
  book.author = "Robin Sharma";
  cout << "Book name is " << book.name << endl;
  cout << "Book author is " << book.author << endl;
  Genre genre;
  genre.type = "Inspirational";
  genre.rating = 9.0;
  cout << "Books falls under category of " << genre.type << endl;
  cout << "Rating of the book is " << genre.rating << endl;
  return 0;
}