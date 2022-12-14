// C++ program to calculate the area of a lab

#include <iostream>
using namespace std;

// declare a class
class lab {
  private:
    double length;
    double height;

  public:
    // parameterized constructor to initialize variables
    lab(double len, double hgt) {
      length = len;
      height = hgt;
    }

    double calculateArea() {
      return length * height;
    }
};

int main() {
    // create object and initialize data members
    lab lab306(8, 10);
    lab lab307(10, 15);
    cout << endl;
    cout << "Area of lab 306: " << lab306.calculateArea() << endl;
    cout << "Area of lab 307: " << lab307.calculateArea() << endl;
    cout << endl;

  return 0;
}