#include <iostream>
using namespace std;
class animal
{
private:
    string name;
    float weight;

public:
    int setValue(string classname)
    {
        cout << "Enter the " << classname << " name : ";
        cin >> name;
        cout << "Enter the " << classname << " weight : ";
        cin >> weight;
        cout << endl;
    }
    int Display(string classname)
    {
        cout << "The " << classname << " name is : " << name << endl;
        cout << "The " << classname << " weight is : " << weight << "kg" << endl;
    }
};

class lion : public animal
{
};

class dinosaur : public animal
{
};

int main()
{

    lion lion1;
    lion1.setValue("lion");
    dinosaur dinosaur1;
    dinosaur1.setValue("dinosaur");

    lion1.Display("lion");
    dinosaur1.Display("dinosaur");
}