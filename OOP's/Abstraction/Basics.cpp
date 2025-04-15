#include<bits/stdc++.h>
using namespace std;

class Calculate{
private:
    int a,b; //we are not allowed to acces the variables directly

public:
   Calculate(int x,int y){
       a=x;
       b=y;
    }

    void show(){
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }
};

int main(){
    Calculate c(10,20);
    c.show();
}