// #include<bits/stdc++.h>
// using namespace std;
// class Shape{//abstract class
//     virtual void show()=0; //pure virtual function
// };

// class Circle:public Shape{
// public:
//     void show(){
//         cout<<"This is a CIRCLE\n";
//     }
// };

// int main(){
//     Circle c1;
//     c1.show();
// }

#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    virtual void speak()=0;
};

class Dog:public Animal{
    public:
    void speak(){
        cout<<"Bark\n";
    }
};

class Cat:public Animal{
    public:
    void speak(){
        cout<<"Meow\n";
    }
};

class Elephant:public Animal{
    public:
    void speak(){
        cout<<"Trumpet\n";
    }
};

int main(){
    // Animal *p;
    // vector<Animal*>animals;
    // animals.push_back(new Dog());
    // animals.push_back(new Cat());
    // animals.push_back(new Elephant());
    // // animals.push_back(new Animal());


    // for(int i=0;i<animals.size();i++){
    //     p=animals[i];
    //     p->speak();
    // }

    Cat c1;
    c1.speak();
}

