#include<bits/stdc++.h>
using namespace std;

//example of contructor overloading which is a compile time polymorphism
class Person{
public:
    string name;
    int age;

    Person(){
        cout<<"Non-parameterized contructor...\n";
    }

    Person(string name){
        this->name=name;
        cout<<name<<endl;
        cout<<"Parameterized contructor...\n";
    }
};

int main(){
    Person p1("Anant");
}


