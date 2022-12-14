#include <iostream>
using namespace std;

// declare a class
class lab {
  private:
    double length;
    double height;

  public:

    // initialize variables with parameterized constructor
    lab(double len, double hgt) {
      length = len;
      height = hgt;
    }

    // copy constructor with a lab object as parameter
    // copies data of the obj parameter
    lab(lab &obj) {
      length = obj.length;
      height = obj.height;
    }

    double calculateArea() {
      return length * height;
    }
};

int main() {
  // create an object of lab class
  lab room306(10.5, 8.6);

  // copy contents of room306 to room307
  lab room307 = room306;

  // print areas of room306 and room307
  cout << endl;
  cout << "Area of room 306: " << room306.calculateArea() << endl;
  cout << "Area of room 307: " << room307.calculateArea();
  cout << endl;

  return 0;
}