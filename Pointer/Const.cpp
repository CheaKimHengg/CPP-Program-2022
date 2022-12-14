#include<iostream>
using namespace std;
int main(){
    char *proverb="Raining is good";  //Dont Do This
    cout<<proverb;
    const char*proverb2="\nI think so...";  //Do this
    cout<<proverb2;
}