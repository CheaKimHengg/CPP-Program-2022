#include<iostream>
using namespace std;
int main(){
    char operators;
    float a,b,total;
    cout<<"Choose ( + - * / ) : ";
    cin>>operators;

    switch(operators){
        case '+':
            cout<<"Input Value : \n";
            cin>>a>>b;
            total=a+b;
            cout<<"Ur answer is = "<<total;
            
    }
}