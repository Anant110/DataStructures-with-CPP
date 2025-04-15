#include<bits/stdc++.h>
using namespace std;

//Function overloading example
class Person{
public:
    void show(int x){
        cout<<"int:"<<x<<endl;
    }

    void show(char ch){
        cout<<"char:"<<ch<<endl;
    }
};
int main(){
    Person p1;
    // p1.show(102);
    p1.show('h');
}