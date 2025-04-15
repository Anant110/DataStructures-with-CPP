#include<bits/stdc++.h>
using namespace std;
class Complex{
    int real,img;
    public:
    Complex(int real,int img){
        this->real=real;
        this->img=img;
    };
    Complex(){
    }
    void display(){
        cout<<real<<"+i"<<img<<endl;
    }
    Complex operator + (Complex &c){
        Complex ans;
        ans.real=real+c.real;
        ans.img=img+c.img;
        return ans;
    }
};
int main(){
    Complex c1(3,2);
    Complex c2(4,5);
    c1.display();
    c2.display();
    Complex c3=c1+c2;
    c3.display();
}

