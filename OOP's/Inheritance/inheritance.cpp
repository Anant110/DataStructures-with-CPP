#include<bits/stdc++.h>
using namespace std;

class Person{
public:
    string name;
    int age;

    Person(){
        cout<<"i am parent constructor"<<endl;
    }

    ~Person(){
        cout<<"i am parent destructor"<<endl;
    }

    //parameterized constructor
    Person(string name,int age){
        this->name=name;
        this->age=age;
    }
};

class Student : public Person{
    //name ,age,roll no;
    public:
    int roll_no;

    //parameterized constructor
    Student(string name,int age,int roll_no):Person(name,age){
        this->roll_no=roll_no;
    }

    void getinfo(){
        cout<<"Name:"<<name<<endl;;
        cout<<"Age:"<<age<<endl;
        cout<<"Roll no.:"<<roll_no<<endl;
    }

    Student(){
        cout<<"i am child constructor"<<endl;
    }

    ~Student(){
        cout<<"i am child destructor"<<endl;
    }
};

int main(){
    Student s1;
    s1.name="Anant";
    s1.age=34;
    s1.roll_no=22;

    s1.getinfo();
}
