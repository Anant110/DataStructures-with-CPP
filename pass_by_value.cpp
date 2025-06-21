#include<bits/stdc++.h>
using namespace std;
void pass_by_value(int x){
    x=10; //change the copy of value of c;
}

int main(){
    int c;
    c=5;
    pass_by_value(c);
    cout<<c<<endl;
}