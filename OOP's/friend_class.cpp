#include<bits/stdc++.h>
using namespace std;

class Human{
    string color;
    int age;

    protected:
    string gender;

public:
    Human(){
        color="Black";
        age=89;
        gender="Male";
    }
    friend class calc;
};

class calc{
    public:
    void display(Human &t){
        cout<<"Color is:"<<t.color<<endl;
        cout<<"Age is:"<<t.age<<endl;
        cout<<"Gender is:"<<t.gender<<endl;
    }
};

int main(){
    Human h1;
    calc c;
    c.display(h1);
}

