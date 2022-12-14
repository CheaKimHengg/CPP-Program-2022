#include <iostream>
using namespace std;
class shape
{
public:
    float length, width;
};
class rectangle : public shape
{
public:
    int set_value()
    {
        cout << "Input length = ";
        cin >> length;
        cout << "Input width = ";
        cin >> width;
    }
    float calculateRec()
    {
        return (width * length);
    }
};

class triangle : public shape
{
public:
    int set_value()
    {
        cout << "Input length = ";
        cin >> length;
        cout << "Input width = ";
        cin >> width;
    }
    float calculateTri()
    {
        return ((width * length) / 2);
    }
};

int main()
{
    rectangle areaRec;
    areaRec.set_value();
    // areaRec.length=5;
    // areaRec.width=5;
    areaRec.calculateRec();
    cout << "Area of Rectangle = " << areaRec.calculateRec() << "cm" << endl;
    triangle areaTri;
    areaTri.set_value();
    // areaTri.length=5;
    // areaTri.width=5;
    areaTri.calculateTri();
    cout << "Area of Triangle = " << areaTri.calculateTri() << "cm" << endl;
}