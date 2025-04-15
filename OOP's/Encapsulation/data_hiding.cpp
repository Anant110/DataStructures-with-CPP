// #include<bits/stdc++.h>
// using namespace std;

// class Account{
//     string name;
//     int acc_no;
//     int balance;
    
// public:
//     Account(string name,int acc_no,int balance){
//         this->name=name;
//         this->acc_no=acc_no;
//         this->balance=balance;
//     }

//     void display(int amount){
//         if(amount>0){
//             balance+=amount;
//             cout<<balance<<endl;
//         }
//         else{
//             cout<<"invalid amount"<<endl;
//         }
//     }
// };

// int main(){
//     Account a1("Mohit",1200,1000);
//     // a1.balance+=-1200;          //to overcome the false information and protect access fom users we need data hiding 
//                                 // concept which make the variable private and make changes in function to make them as public;
//     // cout<<a1.balance<<endl;

//     a1.display(200);

// }

#include<bits/stdc++.h>
using namespace std;

class Bank{
private:
    string name;
    int balance;

public:
    Bank(string name,int balance){
        this->name=name;
        this->balance=balance;
    }

    void show(){
        cout<<"Balance is: "<<balance<<endl;
    }

    void display(int amount){
        if(amount>0){
            balance+=amount;
            cout<<"Current Balance is: "<<balance<<endl;
        }
        else{
            cout<<"Invalid amount";
        }
    }
};

int main(){
    Bank b1("SBI",1200);
    b1.show();

    b1.display(300);
}