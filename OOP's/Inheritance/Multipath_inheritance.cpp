#include<bits/stdc++.h>
using namespace std;

class Human{
public:
    string name;
    int age;

    Human(){
        cout<<"I am human"<<endl;
    }
};

class Youtube:public virtual Human{
public:
    Youtube(){
        cout<<"I am Youtuber"<<endl;
    }
};

class Engineer:public virtual Human{
public:
    Engineer(){
        cout<<"I am Engineer"<<endl;
    }
};

class Teacher:public Youtube,public Engineer{
public:
    Teacher(){
        cout<<"I am Teacher"<<endl;
    }
};

int main(){
    Teacher t1;
}