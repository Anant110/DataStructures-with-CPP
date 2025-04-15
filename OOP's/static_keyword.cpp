// #include<bits/stdc++.h>
// using namespace std;

// void fun(){
//     //static variable
//     static int x=0; //this statement run only 1 time;
//     cout<<"x:"<<x<<endl;
//     x++;
// }

// int main(){
//     fun();
//     fun();
//     fun();
// }

#include<bits/stdc++.h>
using namespace std;

class Customer{
public:
    string name;
    int acc_no;
    int balance;
    static int total_balance;
    static int total_customer;

    Customer(string name,int acc_no,int balance){
        this->name=name;
        this->acc_no=acc_no;
        this->balance=balance;
        total_balance+=balance;
        total_customer++;
    }

    static void total(){
        cout<<"Total Customers are: "<<total_customer<<endl;
        cout<<"Total Balance in bank: "<<total_balance<<endl;
    }

    void display_total(){
        cout<<"Total Customers are: "<<total_customer<<endl;
        cout<<"Total Balance in bank: "<<total_balance<<endl;
    }

    void deposit(int amt){
        if(amt>0){
            total_balance+=amt;
        }
    }
    void withdraw(int amount){
        if(amount<=total_balance && amount>0){
            total_balance-=amount;
        }
        else{
            cout<<"invalid amount"<<endl;
        }
    }
};
int Customer::total_customer=0; //::-->resolution operator;
int Customer::total_balance=0;

int main(){
    Customer a1("Anuchar",1200,234);
    Customer a2("Anmol",1230,123);
    Customer a3("Anuchar",1200,112);
    Customer a4("Anmol",1230,111);
    // a2.display_total();
    a2.deposit(120);
    a1.deposit(12);
    Customer::total();
}



