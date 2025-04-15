#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    string name;
    string Class;
    int age;
    string *dept;

    Student(string name,string Class,int age,string department){
        this->name=name;
        this->Class=Class;
        this->age=age;
        dept=new string;
        *dept=department;
    }

    ~Student(){
        cout<<"Hii,i am destructor";
        delete dept;
    }

    void getinfo(){
        cout<<"Name:"<<name<<endl;
        cout<<"Class:"<<Class<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Department:"<<*dept<<endl;
    }
};

int main(){
    Student s1("Rahul","Fourth",13,"AIML");
    s1.getinfo();
}


