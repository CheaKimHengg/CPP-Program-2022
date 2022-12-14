#include<iostream>
using namespace std;
int funct(int *pa, int *pb);
int main(){
    int a=5, b=10;
    int total;
    total = funct(&a,&b);

}
int funct(int *pa, int *pb){
    int total = *pa + *pb;
    cout << total;
}