#include<bits/stdc++.h>
using namespace std;

class Human{
public:
    string color;
    string sex;
    int Acc_no;

    //non-parameterized constructor
    Human(){
        cout<<"I am non-parameterized constructor"<<endl;
    }

    //parameterized constructor
    Human(string color,string sex,int Acc_no){
        this->color=color;
        this->sex=sex;
        this->Acc_no=Acc_no;
    }

    // inline Human(string n,string j,int k):color(n),sex(j),Acc_no(k){

    // }

    // copy constructor-->user defined constructor
    Human(Human &obj){
        this->color=obj.color;
        this->sex=obj.sex;
        this->Acc_no=obj.Acc_no;
    }

    void getinfo(){
        cout<<"Color:"<<color<<endl;
        cout<<"Sex:"<<sex<<endl;
        cout<<"Acc_no"<<Acc_no<<endl;
    }
};
int main(){
    // Human h1("Black","Male",1234);
    Human h1;
    h1.color="Black";
    h1.sex="Male";
    h1.Acc_no=1234;

    Human h2(h1); //default copy constructior when we not making the constructor explicitly in class
    h2.getinfo();
}

