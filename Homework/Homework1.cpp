#include<iostream>
using namespace std;
int assign();
int main(){
    assign();
    return 0;
}

int assign(){
    int y[3];
    for(int i=0; i<=2; i++){
        cout<<"Input Value = ";
        cin>>y[i];
    }
    for(int j=0; j<=2; j++){
        cout<<y[j]; 
        cout<<"\t";
        }
}