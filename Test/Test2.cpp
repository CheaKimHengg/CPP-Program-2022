#include<iostream>
using namespace std;
int main(){
    string student[3];
    for(int i=0; i<=2; i++){
        cout<<"Input Member Name = ";
        cin>>student[i];
    }
    for(int j=0; j<=2; j++){
    cout<<student[j];
    cout<<"\t";
    }
}