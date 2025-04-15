#include<bits/stdc++.h>
using namespace std;


class Teacher{

    public:
    string name;
    int* salaryptr;

    Teacher(string name,int salary){
        this->name=name;
        salaryptr=new int;
        *salaryptr=salary;
    }
    
    Teacher(Teacher &newobj){
        this->name=newobj.name;
        this->salaryptr=newobj.salaryptr;
    }

    void getinfo(){
        cout<<"Name:"<<name<<endl;
        cout<<"Salary:"<<*salaryptr<<endl;
    }
};

int main(){
    Teacher t1("Abhilasha",120000);
    t1.getinfo();


    //shallow copy example
    Teacher t2(t1);
    *(t2.salaryptr)=111000;
    t1.getinfo();
}


