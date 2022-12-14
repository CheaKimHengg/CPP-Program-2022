#include<iostream>
using namespace std;
struct person{
    string name;
    int age;
    char gender;
    string dob;
};

person data(person info){
    cout<<"Enter ur name: ";
    cin>>info.name;
    cout<<"Enter ur age: ";
    cin>>info.age;
    cout<<"Enter ur gender: ";
    cin>>info.gender;
    cout<<"Enter ur dob: ";
    cin>>info.dob;
    return info;
}

int showdata(person info){
    cout<<"Name: "<<info.name<<"\n";
    cout<<"Age: "<<info.age<<"\n";
    cout<<"Gender: "<<info.gender<<"\n";
    cout<<"DOB: "<<info.dob<<"\n";
}

int main(){
    person info;
    info = data(info);
    showdata(info);
    return 0;
}