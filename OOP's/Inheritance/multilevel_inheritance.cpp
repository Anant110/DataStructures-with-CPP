#include<bits/stdc++.h>
using namespace std;

class Person{
public:
    string name;
    int age;
};

class student:public Person{
public:
    int roll_no;
};

class Gradstu:public student{
public:
    string dept;

    void getinfo(){
        cout<<"Name:"<<name;
    }
};

int main(){
    Gradstu s1;
    s1.name="Anant";
    s1.getinfo();
}


