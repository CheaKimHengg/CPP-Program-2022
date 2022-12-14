// C++ program to demonstrate the working of friend function

#include <iostream>
using namespace std;

class lab {
    private:
        int area;
        
        // friend function
        friend int InsertValue(lab);    
};
// friend function definition
int InsertValue(lab room306) {
    //accessing private members from the friend function
    room306.area = 20;
    return (room306.area);
}

int main() {
    lab Room306;
    cout << endl;
    cout << "lab 306's length: " << InsertValue(Room306);
    cout << "\n" << endl;;
    return 0;
}