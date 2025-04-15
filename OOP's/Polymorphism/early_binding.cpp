#include<bits/stdc++.h>
using namespace std;

class Car{
    public:
    void show(){
        cout<<"This is base class\n";
    }
};
class Parts:public Car{
    public:
    void show(){
        cout<<"This is derived class\n";
    }
};
int main(){
    Car *c=new Parts();
    c->show();
}