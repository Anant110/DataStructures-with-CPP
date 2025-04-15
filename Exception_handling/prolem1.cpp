#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    try{
        if(b==0){ 
            throw "Divide by 0 is not possible"; //when throw statement is executed then below statement are not executed;
        }
        int c=a/b;
        cout<<c<<endl;
    }catch(const char *e){
        cout<<"Exception Occoured: "<<e<<endl;
    }
}