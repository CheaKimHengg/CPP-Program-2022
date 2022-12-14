#include <iostream>
using namespace std;
class lab
{
public:
    float width, length;
    int set_value()
    {
        cin >> length;
        cin >> width;
    }
    float calculateArea()
    {
        return (width * length);
    }
};
int main()
{
    lab room306;
    // room306.length = 3;
    // room306.width = 10;
    // cin >> room306.length;
    // cin >> room306.width;
    room306.set_value();
    cout << endl;
    cout << "Area of lab 306 is: " << room306.calculateArea();
    cout << endl;
    return 0;
}