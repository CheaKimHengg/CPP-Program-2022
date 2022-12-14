#include<iostream>
using namespace std;
int Array(int x[]);   //declare
int main(){
    int arr[5]={5,10,20,15,50};  
    Array(arr);   //call   
    return 0;
}
int Array(int x[]){     //function definition
    for(int i=0; i<5; i++){
        cout<<"Array"<<i+1<<"="<<"\t"<<x[i]<<"\n";
    }
}