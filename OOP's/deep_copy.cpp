// #include<bits/stdc++.h>
// using namespace std;


// class Teacher{

//     public:
//     string name;
//     int* salaryptr;

//     Teacher(string name,int salary){
//         this->name=name;
//         salaryptr=new int;
//         *salaryptr=salary;
//     }
//     Teacher(Teacher &newobj){
//         this->name=newobj.name;
//         salaryptr=new int;
//         *salaryptr=*newobj.salaryptr;
//     }

//     void getinfo(){
//         cout<<"Name:"<<name<<endl;
//         cout<<"Salary:"<<*salaryptr<<endl;
//     }
// };

// int main(){
//     Teacher t1("Abhilasha",120000);
//     t1.getinfo();


//     //deep copy example
//     Teacher t2(t1);
//     *(t2.salaryptr)=111000;
//     t2.name="shraddha";
//     t1.getinfo();
//     t2.getinfo();
// }


#include<bits/stdc++.h>
using namespace std;

class Person{
public:
    string name;
    int age;
    int *salaryptr;


    Person(string name,int age,int salary){
        this->name=name;
        this->age=age;
        salaryptr=new int;
        *salaryptr=salary;
    }

    Person(Person &newobj){
        this->name=newobj.name;
        this->age=age;
        salaryptr=new int;
        *salaryptr=*newobj.salaryptr;

    }

    void show(){
        cout<<"Name is:"<<name<<endl;
        cout<<"Age is:"<<age<<endl;
        cout<<"Salary is:"<<*salaryptr<<endl;
    }
};

int main(){
    Person p1("Anant",90,9000);
    p1.show();

    Person p2(p1);
    *(p2.salaryptr)=900678;
    p2.name="Agni";
    p2.age=90;

    p2.show();
    p1.show();
    
}
