#include<iostream>
using namespace std;

int main(){
    int i=8;
    int *p=&i;
    int **p2=&p;

    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;

    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl;
}