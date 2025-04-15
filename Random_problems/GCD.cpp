#include<iostream>
using namespace std;

int gcd(int a,int b){
    if(b==0){
        return a;
    }
    else{
        return b;
    }
    while(a!=b){
        if(a>=b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}

int main(){
    int a;
    cout<<"Enter the value of a"<<endl;
    cin>>a;

    int b;
    cout<<"Enter the value of b"<<endl;;
    cin>>b;

    int ans=gcd(a,b);
    cout<<"GCD of "<< a << " and " << b << " is " << ans <<endl;

    return 0;

}