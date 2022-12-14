#include<iostream>
using namespace std;
int swap(int *a, int *b, int *c){
    	int y;
        // y=*a;
        // *a=*b;
        // *b=*c;
        // *c=y;
        y=*a;
        *a=*c;
        *b=*b;
        *c=y;

}
int main(){
    int i,j,k;
    cout<<"Input Value\n";
    cin>>i>>j>>k;
    swap(&i,&j,&k);
    cout<<"Swap Value\n"<<i<<"\n"<<j<<"\n"<<k;
}
