#include<iostream>
using namespace std;
int main(){
    long number = 12345;
    long *pnumber = &number;

    cout<<pnumber<<"\n";
    cout<<*pnumber;
}
