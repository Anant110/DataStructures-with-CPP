#include<bits/stdc++.h>
using namespace std;
class Base{
    private:
    int private_variable;

    protected:
    int protected_variable;

    public:
    Base(){
        private_variable=10;
        protected_variable=11;
    }
    friend void member_func(Base &obj);
};
void member_func(Base &obj){
    cout<<"Private variable is:"<<obj.private_variable<<endl;
    cout<<"Protected variable is:"<<obj.protected_variable<<endl;
}

int main(){
    Base b1;
    member_func(b1);
}