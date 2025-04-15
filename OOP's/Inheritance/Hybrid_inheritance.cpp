#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int age;

    Student(){
        cout<<"Hey I am a Student"<<endl;
    }
};

class Male{
    public:
    Male(){
        cout<<"I am Male student"<<endl;
    }
};

class Female{
    public:
    Female(){
        cout<<"I am Female student"<<endl;
    }
};

class Boy:public Student,public Male{
    public:
    Boy(){
        cout<<"I am a Boy"<<endl;
    }
};

class Girl:public Student,public Female{
    public:
    Girl(){
        cout<<"I am a Girl"<<endl;
    }
};

int main(){
    Boy b1;
    Girl g1;
}


