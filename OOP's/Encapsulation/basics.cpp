// #include<bits/stdc++.h>
// using namespace std;

// class student{
// public:

    
//     string name;
//     int age,roll_no;
//     string grade;
    
//     //non parameterized constructor
//     student(){
//         cout<<"Hi i am constructor"<<endl;
//     }

//     // parameterized constructor
//     student(string n,int a,int r){
//         name=n;
//         age=a;
//         roll_no=r;
//         grade="A+";
//     }

//     // parameterized constructor
//     // student(string name,int age,int roll_no,string grade){
//     //     this->name=name;
//     //     this->age=age;
//     //     this->roll_no=roll_no;
//     //     this->grade=grade;
//     // }

//     //copy constructor
//     student(student &origobj){
//         cout<<"i am custom copy constructor...."<<endl;
//         this->name=origobj.name;
//         this->age=origobj.age;
//         this->roll_no=origobj.roll_no;
//         this->grade=origobj.grade;
//     }

//     inline student(string n,int a,int r,string g):name(n),age(a),roll_no(r),grade(g){

//     }

//     void getinfo(){
//         cout<<"Name:"<<name<<endl;
//         cout<<"Age:"<<age<<endl;
//         cout<<"Roll_no:"<<roll_no<<endl;
//         cout<<"Grade:"<<grade<<endl;
//     }

// };

// int main(){
//     student s1; //automatically calls constructor
//     s1.name="Anant";
//     s1.age=45;
//     s1.roll_no=90;
//     s1.getinfo();

//     // copy constructor
//     // student s2(s1);  //default copy constructor -invoke
//     // s2.getinfo();
// }



// #include<bits/stdc++.h>
// using namespace std;

// class student{
// private:
//     string name;
//     int age,roll_no;
//     string grade;

//     //function getter and setter
//     public:
//     void setname(string n){
//         if(n.size()==0){
//             cout<<"invalid name";
//             return;
//         }
//         name=n;
//     }
//     void setage(int k){
//         age=k;
//     }
//     void setroll(int m){
//         roll_no=m;
//     }
//     void setgrade(string j){
//         grade=j;
//     }

//     void getname(){
//         cout<<name<<endl;
//     }
//     void getage(){
//         cout<<age<<endl;
//     }
//     int get_rollno(){
//         return roll_no;
//     }
//     string get_grade(int pin){
//         if(pin==123){
//             return grade;
//         }

//         return "invalid";
//     }
// };

// int main(){
//     student s1;
//     s1.setname("");
//     s1.setage(45);
//     s1.setroll(22);
//     s1.setgrade("A+");

//     s1.getname();
//     s1.getage();
//     cout<<s1.get_rollno()<<endl;
//     cout<<s1.get_grade(345)<<endl;
// }


#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
    string name;
    int age;
    int marks;

    Person(string name,int age,int marks){
        this->name=name;
        this->age=age;
        this->marks=marks;
    }

    void show(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Marks:"<<marks<<endl;
    }
};
int main(){
    Person p1("Anant",34,90);
    // p1.show();

    Person p2(p1);  //copy constructor;
    p2.show();
}


