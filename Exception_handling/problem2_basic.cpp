#include<bits/stdc++.h>
using namespace std;


int main(){

    try{
        int *p=new int[10000000000000000];
        cout<<"Memory is allocated";
        delete[]p;
    }
    catch(const exception &e){
        cout<<"Exception occoured"<<e.what()<<endl;
    }


}