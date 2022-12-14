#include <iostream>
using namespace std;
class animal
{
private:
    string name;
    float weight;

protected:
    void setValue(string classname)
    {
        cout << "Enter the " << classname << " name : ";
        cin >> name;
        cout << "Enter the " << classname << " weight : ";
        cin >> weight;
        cout << endl;
    }
    void Display(string classname)
    {
        cout << "The " << classname << " name is : " << name << endl;
        cout << "The " << classname << " weight is : " << weight << "kg" << endl;
    }
};

class lion : public animal
{
    public:
    void set(){
        setValue("lion");
    }
    void show(){
        Display("lion");
    }
};

class dinosaur : public animal
{
    public:
    void set(){
        setValue("dinosaur");
    }
    void show(){
        Display("dinosaur");
    }
};

int main()
{

    lion lion1;
    lion1.set();
    dinosaur dinosaur1;
    dinosaur1.set();

    lion1.show();
    dinosaur1.show();
}