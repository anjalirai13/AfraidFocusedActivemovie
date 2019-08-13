#include <iostream>
#include <stdio.h>
using namespace std;

#define MY_AGE 27
//Use of semicolon is not required
#define BIRTH_DATE 13;
#ifndef MY_AGE

// Defining my name if it is not defined
#define MY_AGE 25
#endif

int main(){
  //Since semicolon is not used so we can add additional string and use endl or concatenate.
  cout << "My age is " << MY_AGE << endl;
  cout << "Defined a new directive MY_AGE" << endl;

  //Since directive is ended with semicolon so string or line will be finished after directive BIRTH_DATE, it wont throw error if you dont add semicolon in the end
  cout << "My birth date is " << BIRTH_DATE

  //even if you add there will be no difference
  cout << "\nMy birth date is " << BIRTH_DATE;
  return 0;
}