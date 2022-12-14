#include <iostream>
using namespace std;
class m1
{
public:
    int x, y, a;
};
class derived : public m1
{
public:
    int anwser()
    {
        a = x * y;
        cout << "Answer = " << a;
    }
};
int main()
{
    derived derive;
    cout << "Input length = ";
    cin >> derive.x;
    cout << "Input width = ";
    cin >> derive.y;
    derive.anwser();
    return 0;
}