#include<bits/stdc++.h>
using namespace std;
class Human{
    string Religion,color;
    public:
        string name;
        int age;
        int weight;
};

class Student:protected Human{ //change access modifiers according to informtion
    int marks; 
    int id;

    public:
    Student(string name,int age,int weight,int marks,int id){
        this->name=name;
        this->age=age;
        this->weight=weight;
        this->marks=marks;
        this->id=id;
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Weight: "<<weight<<endl;
        cout<<"Marks: "<<marks<<endl;
        cout<<"Id: "<<id<<endl;
    }
};

class Teacher:public Human{
    int salary;
    string department;
};

int main(){
    Student s1("Mohit",12,45,98,22);
    s1.display();
    Teacher t1;
    t1.age=23;
    cout<<t1.age<<endl;
}