#include<bits/stdc++.h>
using namespace std;
void pass_by_reference(int& x){
    x=10; //change in original value of c;
}

int main(){
    int c;
    c=5;
    pass_by_reference(c);
    cout<<c<<endl;
}