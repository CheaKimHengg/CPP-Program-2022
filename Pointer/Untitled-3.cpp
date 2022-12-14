#include<iostream>
using namespace std;
int main(){
    int num = 5;
    int *pvalue; 
    pvalue = &num;
    *pvalue+=2;
    cout<<pvalue;
    cout<<"\n"<<*pvalue;
    return 0;
}