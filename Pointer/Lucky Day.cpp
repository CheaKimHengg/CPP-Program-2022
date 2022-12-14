#include<iostream>
using namespace std;
int main(){
    char operators;
    const char *pday1="Monday", *pday2="Tuesday", *pday3="Wednesday", *pday4="Thursday", *pday5="Friday", *pday6="Saturday", *pday7="Sunday";
    cout<<"Please input number 1-7\n";
    cin>>operators;

    switch(operators){
        case '1':
            cout<<"Your Lucky day is " << pday1;
            break;
        case '2':
            cout<<"Your Lucky day is " << pday2;
            break;
        case '3':
            cout<<"Your Lucky day is " << pday3;
            break;
        case '4':
            cout<<"Your Lucky day is " << pday4;
            break;
        case '5':
            cout<<"Your Lucky day is " << pday5;
            break;
        case '6':
            cout<<"Your Lucky day is " << pday6;
            break;
        case '7':
            cout<<"Your Lucky day is " << pday7;
            break;
        default:
            cout<<"Please choose number between 1-7!";
    }
}