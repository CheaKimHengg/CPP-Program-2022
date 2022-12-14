#include<iostream>
using namespace std;
int main(){
    string Shop[3]={"Food","Sport","Book"};
    string Food[3]={"Chiken","Fish","Pizza"};
    string Sport[3]={"Ball","Shoes","Jersey"};
    string Book[3]{"Math","Physic","Khmer"};

    cout<<"In this shop we have : ";

    cout<<"\nFood :";
    for(int i=0;i<3;i++){
        cout<<"\t"<<Food[i];
    }

    cout<<"\nSport :";
    for(int i=0;i<3;i++){
        cout<<"\t"<<Sport[i];
    }

    cout<<"\nBook :";
    for(int i=0;i<3;i++){
        cout<<"\t"<<Book[i];
    }

    string Cart[3];
    cout<<"\n";
    for(int i=0;i<3;i++){
        cout<<"Please select the items that u want : ";
        cin>>Cart[i];
    }
    cout<<"============================================";
    cout<<"\nYour cart are :";
    for(int j=0;j<3;j++){
        cout<<"\t"<<Cart[j];
    }

    return 0;
}