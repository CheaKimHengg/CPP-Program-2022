#include <iostream>
using namespace std;

/* local variable is same as a member's name */
class lab
{
private:
   int area;

public:
   void setArea(int value)
   {
      // The 'this' pointer is used to retrieve the object's area
      // hidden by the local variable 'area'
      this->area = value;
   }
   void print() { cout << "area = " << area << endl; }
};

int main()
{
   lab room306;
   int x = 20;
   room306.setArea(x);
   cout << endl;
   room306.print();
   cout << endl;
   return 0;
}
