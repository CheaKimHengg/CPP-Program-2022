#include<iostream>
using namespace std;
struct person{
    string name;
    char gender;
    int age;
    string DOB;
};

int main(){
    person data;
    data.name = "Heng";
    data.gender = 'M';
    data.age = 19;
    data.DOB = "26.11.03";
    cout<<data.name<<"\n";
    cout<<data.gender<<"\n";
    cout<<data.age<<"\n";
    cout<<data.DOB<<"\n"<<"---------"<<"\n";

    person data2;
    data2.name = "Chan";
    data2.gender = 'F';
    data2.age = 18;
    data2.DOB = "24.05.04";
    cout<<data2.name<<"\n";
    cout<<data2.gender<<"\n";
    cout<<data2.age<<"\n";
    cout<<data2.DOB;
}