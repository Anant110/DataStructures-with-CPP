#include<bits/stdc++.h>
using namespace std;

//This current example is runtime polymorphism and it is late binding which is achieved by virtual keyword
class Person{
public:
    string name;
    int age;

     virtual void show(){
        cout<<"This is a base class"<<endl;
    }
};

class Student:public Person{
public:
    int marks;
    void show(){
        cout<<"This is a child class"<<endl;
    }
};
int main(){
    // Person p1;
    // p1.show();

    // Student s1;
    // s1.show();

    Person *p1=new Student();
    p1->show();
}

