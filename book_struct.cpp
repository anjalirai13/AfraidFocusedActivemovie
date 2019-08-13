#include <iostream>
#include <string>
#include <cstring>
using namespace std;

struct Books {
  int book_id;
  string title;
  string author;
  string subject;
};

Books getBookDetails(Books);
void printBookDetails(Books);

int main(){
  Books book;
  book = getBookDetails(book);
  printBookDetails(book);
  return 0;
}

Books getBookDetails(Books book){
  cout << "Enter the title of book: ";
  // cin >> book.title;
  getline(cin, book.title);
  cout << "Enter the author of book: ";
  // cin >> book.author;
  getline(cin, book.author);
  cout << "Enter the subject of book: ";
  // cin >> book.subject;
  getline(cin, book.subject);
  cout << "Enter the book id: ";
  cin >> book.book_id;
  return book;
}

void printBookDetails(Books book){
  cout << "Title of book is " << book.title << endl;
  cout << "Author of book is " << book.author << endl;
  cout << "Subject of book is " << book.subject << endl;
  cout << "Book id is " << book.book_id << endl;
}