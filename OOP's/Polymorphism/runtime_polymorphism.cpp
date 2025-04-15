// #include<bits/stdc++.h>
// using namespace std;

// //example of runtime polyorphism-->function overriding
// class Person{
// public:
//     string name;
//     int age;
//     void getinfo(){
//         cout<<"This is parent class"<<endl;
//     }
// };

// class Student:public Person{
// public:
//     int marks;
//     void getinfo(){
//         cout<<"This is a child class"<<endl;
//     }
// };

// int main(){
//     Person p1;
//     p1.getinfo();
// }

#include<bits/stdc++.h>
using namespace std;

class Teacher{
public:
    int salary;
    string department;
    
    void getinfo(){
        cout<<"This is a parent class"<<endl;
    }
};

class Student:public Teacher{
public:
    int marks;

    void getinfo(){
        cout<<"This is a child class"<<endl;
    }
};
int main(){
    Teacher s1;
    s1.getinfo();
}