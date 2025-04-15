// #include<bits/stdc++.h>
// using namespace std;

// class Animal{
//     public:
//     virtual void show(){
//         cout<<"huhu\n";
//     }
// };

// class Dog:public Animal{
//     public:
//     void show(){
//         cout<<"Bark\n";
//     }
// };

// class Cat:public Animal{
//     public:
//     void show(){
//         cout<<"Meow\n";
//     }
// };

// int main(){
//     Animal *p;
//     p=new Dog();
//     p->show();

//     // Animal*p;
//     // vector<Animal*>animals;
//     // animals.push_back(new Dog());
//     // animals.push_back(new Cat());
//     // animals.push_back(new Animal());
//     //  animals.push_back(new Dog());
//     // animals.push_back(new Cat());
//     // for(int i=0;i<animals.size();i++){
//     //     p=animals[i];
//     //     p->show();
//     // }

// }



#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
    virtual void show(){
        cout<<"Person class"<<endl;
    }
};

class Student:public Person{
    public:
    void show(){
        cout<<"Student class"<<endl;
    }
};

class Male:public Person{
    public:
    void show(){
        cout<<"Male class"<<endl;
    }
};

int main(){
    Person *p;
    p=new Student;
    p->show();
}
