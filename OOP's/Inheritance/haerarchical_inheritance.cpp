#include<bits/stdc++.h>
using namespace std;

class Person{
public:
    string name;
    int age;
};

class Student:public Person{
public:
    int marks;
};

class Teacher:public Person{
public:
    string dept;
};

int main(){
    Teacher t1;
    cout<<(t1.name="Abhi")<<endl;
}

