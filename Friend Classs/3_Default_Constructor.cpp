#include <iostream>
using namespace std;

// declare a class
class  lab {
  private:
    int area;

  public:
    // default constructor to initialize variable
    lab() {
      area = 10;
      cout << endl;
      cout << "Creating a lab." << endl;
      cout << "Area = " << area << endl;
      cout << endl;
    }
};

int main() {
  lab lab306;
  return 0;
}