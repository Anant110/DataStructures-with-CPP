#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack <int> s;
    s.push(12);
    s.push(34);

    s.pop();

    cout<<"Print the element "<<s.top()<<endl;

    if(s.empty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stack is not empty"<<endl;
    }

    cout<<"Size of stack is "<<s.size()<<endl;



}