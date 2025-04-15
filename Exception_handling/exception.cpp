#include<bits/stdc++.h>
using namespace std;

class Customer{
    string name;
    int balance;

public:
    Customer(string name,int balance){
        this->name=name;
        this->balance=balance;
    }

    void credit(int amt)
    {
        if(amt<0){
            throw "Amount is invalid";
        }
    
        balance+=amt;
        cout<<amt<<" Rs is credited successfully"<<endl;
        cout<<"Total amount is:"<<balance<<endl;

    }

    void withdraw(int amt)
    {
        if(amt<0 || amt>balance){
            throw "Your amount is greater than the Balance";
        }

        balance-=amt;
        cout<<"Rs is withdraw successfully"<<endl;
    }

};

int main(){
    Customer c("Anant",5400);

    try{
        c.credit(700);
        c.withdraw(90000);
        c.credit(800);
    }catch(const char*e){
        cout<<"Exception is:"<<e<<endl;
    }

}