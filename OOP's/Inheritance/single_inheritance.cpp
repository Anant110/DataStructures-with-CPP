#include<bits/stdc++.h>
using namespace std;

class Human{
    protected:
    string name;
    int age;

    protected:
    Human(string name,int age){
        this->name=name;
        this->age=age;
    }
};

class Student:public Human{
    int roll_no;
    int marks;

    public:
    Student(string name,int age,int roll_no,int marks):Human(name,age){
        this->roll_no=roll_no;
        this->marks=marks;
    
    }

    void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Roll_no:"<<roll_no<<endl;
        cout<<"Marks:"<<marks<<endl;
    }
};

int main(){
    Student s1("Mohot",12,56,89);
    s1.display();
}