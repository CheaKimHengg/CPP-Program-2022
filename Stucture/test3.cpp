#include<iostream>
using namespace std;
struct person{
    string name;
    int age;
    char gender;
    string dob;
};

int main(){
    person m1[6];
    for(int i=1; i<6; i++){
        cout<<"Student: "<<i<<"\n";
        cout<<"Enter ur name: ";
        cin>>m1[i].name;
        cout<<"Enter ur age: ";
        cin>>m1[i].age;
        cout<<"Enter ur gender: ";
        cin>>m1[i].gender;
        cout<<"Enter ur DOB: ";
        cin>>m1[i].dob;
    }
    for(int i=1; i<6; i++){
        cout<<"Student "<<i<<"\n";
        cout<<"Name: "<<m1[i].name<<"\n";
        cout<<"Age: "<<m1[i].age<<"\n";
        cout<<"Gender: "<<m1[i].gender<<"\n";
        cout<<"DOB: "<<m1[i].dob<<"\n";
    }
}